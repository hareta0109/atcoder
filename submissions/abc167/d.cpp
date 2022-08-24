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
	ll n,k; cin>>n>>k;
	VI a(n); rep(i,n) cin>>a[i], a[i]--;
	bool flg=true; int next=0;
	VI b; b.PB(0);
	int visited[n]; rep(i,n) visited[i]=-1; visited[0]=0;
	int loop=-1;
	int cnt=1;
	while(flg){
		if(visited[a[next]]!=-1) flg=false, loop=visited[a[next]];
		else{
			b.PB(a[next]); visited[a[next]]=cnt; next=a[next]; cnt++;
		}
	}
	// cerr<<loop<<endl;
	// rep(i,b.size()) cerr<<b[i]<<' '; cerr<<endl;
	if(k<loop) cout<<b[k]+1<<endl;
	else{
		k-=loop;
		cout<<b[loop+k%(b.size()-loop)]+1<<endl;
	}
	// cout<<b[k%(b.size())]+1<<endl;
	return 0;
}
