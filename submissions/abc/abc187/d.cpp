#include <bits/stdc++.h>
using namespace std;
#define MOD (long long int)(998244353)
#define ll long long int
#define rep(i,n) for(int i=0; i<(int)(n); i++)
#define reps(i,n) for(int i=1; i<=(int)(n); i++)
#define REP(i,n) for(int i=n-1; i>=0; i--)
#define REPS(i,n) for(int i=n; i>0; i--)
#define FOR(i,a,b) for(int i=a; i<(int)(b); i++)
#define ALL(x) (x).begin(),(x).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define CLR(a) memset((a), 0 ,sizeof(a))
#define PB push_back
#define MP make_pair
#define SP << " " <<
const int INF = 1001001001;
const ll LINF = 100100100100100100;
const double EPS = 1e-10;
const long double PI  = acos(-1.0L);
typedef pair<int,int> PII;
typedef pair<ll,ll> PLL;
typedef pair<double,double> PDD;
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<ll> VL;
#define chmax(a,b) a = (((a)<(b))?(b):(a))
#define chmin(a,b) a = (((a)>(b))?(b):(a))

__attribute__((constructor))
void initial(){
	cin.tie(nullptr);
	ios::sync_with_stdio(false);
	cout << fixed << setprecision(15);
}

// 素数かどうかの判定
bool IsPrime(ll num){
    if(num<2) return false;
    else if(num==2) return true;
    else if(num%2==0) return false; // 偶数はあらかじめ除く
    double sqrtNum = sqrt(num);
    for(ll i=3; i<=sqrtNum; i+=2){
        if(num%i==0) return false;
    }
    return true;
}


signed main() {
	int n; cin>>n;
	vector<PLL> v(n);
	ll sum = 0LL;
	ll suma = 0LL;
	ll sumb = 0LL;
	rep(i,n){
		ll a,b; cin>>a>>b;
		v.PB(MP(2*a+b,a));
		sum += a+b; suma += a;
	}
	int ans = 0;
	sort(RALL(v));
	while(suma>=sumb){
		sumb += v[ans].first-v[ans].second;
		suma -= v[ans].second;
		ans++;
	}

	cout<<ans<<endl;

	return 0;
}
