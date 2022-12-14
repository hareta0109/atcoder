package templates

import "math"

func Max(a, b int) int {
	if a > b {
		return a
	}
	return b
}

func Min(a, b int) int {
	if a < b {
		return a
	}
	return b
}

func IsPrime(target int) bool {
	for i := 2; i <= int(math.Pow(float64(target), 0.5)); i++ {
		if target%i == 0 {
			return false
		}
	}
	return true
}

func Gcd(x, y int) int {
	a, b := x, y
	if x > y {
		a, b = y, x
	}
	residual := b % a
	if residual == 0 {
		return a
	}
	return Gcd(a, residual)
}

func Lcm(x, y int) int {
	gcd := Gcd(x, y)
	return (x * y) / gcd
}

func ModPow(a, b, mod int) int {
	p, num := a, 1
	for i := 0; i < 30; i++ {
		if (b>>i)&1 == 1 {
			num = (num * p) % mod
		}
		p = (p * p) % mod
	}
	return num
}

func ModDiv(a, b, mod int) int {
	return (a * ModPow(b, mod-2, mod) % mod)
}

func ModNcr(n, r, mod int) int {
	a := 1
	for i := 1; i <= n; i++ {
		a = (a * i) % mod
	}
	b := 1
	for i := 1; i <= r; i++ {
		b = (b * i) % mod
	}
	for i := 1; i <= n-r; i++ {
		b = (b * i) % mod
	}
	return ModDiv(a, b, mod)
}
