#include <bits/stdc++.h>
using namespace std;
#define MOD (long long int)(1e9+7)
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

ll n,k;
ll a[200000], f[200000];

bool check(ll x){
	ll prac=0;
	rep(i,n){
		ll ok=x/f[i];
		if(ok<a[i]) prac+=a[i]-ok;
	}
	return (prac<=k);
}


signed main(){
	cin>>n>>k; rep(i,n) cin>>a[i]; rep(i,n) cin>>f[i];
	sort(a,a+n); sort(f,f+n); reverse(f,f+n);
	ll ok=1e18, ng=-1;
	while(ok-ng>1){
		ll mid=(ok+ng)/2;
		(check(mid)?ok:ng)=mid;
	}
	cout<<ok<<endl;
	return 0;
}
