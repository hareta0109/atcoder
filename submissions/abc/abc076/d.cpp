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

signed main(){
	int n; cin>>n;
	vector<double> t(n),v(n); rep(i,n)cin>>t[i]; rep(i,n)cin>>v[i];
	double T=0; rep(i,n) t[i]*=2,T+=t[i];
	int l=0, r=0; vector<double> maxv(T+1,INF);
	maxv[0]=maxv[T]=0.0;
	reps(i,T/2){
		maxv[i]=maxv[i-1]+0.5;
		maxv[T-i]=maxv[T-i+1]+0.5;
	}
	rep(i,n){
		r+=t[i];
		reps(j,T){
			if(j<l) chmin(maxv[j],v[i]+(l-j)/2.0);
			else if(j>r) chmin(maxv[j],v[i]+(j-r)/2.0);
			else chmin(maxv[j],v[i]);
		}
		l+=t[i];
	}
	double ans=0.0;
	rep(i,T){
		// cerr<<maxv[i]<<' ';
		ans+=(maxv[i]+maxv[i+1])/2.0;
	}
	// cerr<<endl;
	ans/=2.0;
	cout<<ans<<endl;
	return 0;
}
