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
#define chmax(a, b) a = (((a)<(b)) ? (b) : (a))
const int INF = 1001001001;
const ll MOD = 1e9+7;
const ll LINF = 100100100100100100;
const double EPS = 1e-10;
const double PI  = acos(-1.0);
typedef pair<int,int> PII;
typedef pair<ll,ll> PLL;
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<ll> VL;

template<typename A, size_t N, typename T>
void Fill(A (&array)[N], const T &val){std::fill((T*)array, (T*)(array+N),val);}


__attribute__((constructor))
void initial(){
	cin.tie(nullptr);
	ios::sync_with_stdio(false);
	cout << fixed << setprecision(15);
}


signed main(){
	double a,b,x; cin>>a>>b>>x;
	double ans1 = atan(2.0*(pow(a,2.0)*b-x)/pow(a,3.0));
	double ans2 = atan(2.0*x/(a*pow(b,2.0)));
	if((a*a*b/2)<x) cout<< ans1/PI*180 <<endl;
	else cout<< 90.0-ans2/PI*180 <<endl;
	
	cerr << ans1/PI*180 SP 90.0-ans2/PI*180 << endl;
	// cout << min(ans1,PI/2-ans2)/PI*180 << endl;
  return 0;
}
