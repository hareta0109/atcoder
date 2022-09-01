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
const int INF = numeric_limits<int>::max();
const ll LINF = numeric_limits<ll>::max();
const double EPS = 1e-10;
const long double PI  = acos(-1.0L);
typedef pair<int,int> PII;
typedef pair<ll,ll> PLL;
typedef pair<double,double> PDD;
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<ll> VL;
typedef vector<VL> VVL;
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
	vector<vector<char>> a(n, vector<char>(n));
	rep(i,n)rep(j,n) cin>>a[i][j];

	rep(i,n)rep(j,i){
		// cerr<<a[i][j] SP a[j][i]<<endl;
		if(i==j){
			continue;
		}else if(a[i][j]=='W' && a[j][i]!='L'){
			return cout<<"incorrect"<<endl,0;
		}else if(a[i][j]=='L' && a[j][i]!='W'){
			return cout<<"incorrect"<<endl,0;
		}else if(a[i][j]=='D' && a[j][i]!='D'){
			return cout<<"incorrect"<<endl,0;
		}
	}
	cout<<"correct"<<endl;
	return 0;
}
