#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
#include <string>
#include <math.h>
#include <stdio.h>
#include <iomanip>
#include <limits>
#include <list>
#include <queue>
#include <tuple>
#include <map>
#include <set>
#include <sstream>
using namespace std;
#define ll long long int
#define rep(i,n) for(int i=0; i<(int)(n); i++)
#define reps(i,n) for(int i=1; i<=(int)(n); i++)
#define REP(i,n) for(int i=n-1; i>=0; i--)
#define REPS(i,n) for(int i=n; i>0; i--)
#define FOR(i,a,b) for(int i=a; i<(int)(b); i++)
#define ALL(x) (x).begin(),(x).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define SORT(c) sort(ALL(x))
#define CLR(a) memset((a), 0 ,sizeof(a))
#define PB push_back
#define MP make_pair
#define SP << " " <<
const int INF = 1001001001;
const ll MOD = 1e9+7;
const ll LINF = 100100100100100100;
const double EPS = 1e-10;
const double PI  = acos(-1.0);
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<vi> vvi;

template<typename A, size_t N, typename T>
void Fill(A (&array)[N], const T &val){std::fill((T*)array, (T*)(array+N),val);}

void chmax(pll &a, pll b){
	if(a.first<b.first) a.second = max(a.first,b.second), a.first = b.first;
	else a.second = max(a.second,b.first);
}

__attribute__((constructor))
void initial(){
	cin.tie(nullptr);
	ios::sync_with_stdio(false);
	cout << fixed << setprecision(15);
}

signed main(){
	int n; cin>>n;
	vector<ll> a(1<<n); vector<pll> dp(1<<n);
	rep(bit,1<<n){
		cin>>a[bit];
		dp[bit] = {a[bit],-INF};
	}
	rep(i,n) rep(bit,1<<n) if(bit&(1<<i)) chmax(dp[bit],dp[bit^(1<<i)]);
	ll res = -INF;
	rep(bit,1<<n){
		ll tmp = dp[bit].first + dp[bit].second;
		res = max(res,tmp);
		if(bit) cout<<res<<endl;
	}
  return 0;
}
