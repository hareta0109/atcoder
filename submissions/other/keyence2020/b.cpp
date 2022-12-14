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
#include <deque>
#include <tuple>
#include <map>
#include <sstream>
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
#define SORT(c) sort(ALL(x))
#define CLR(a) memset((a), 0 ,sizeof(a))
#define PB push_back
#define MP make_pair
#define SP << " " <<
const int INF = 1001001001;
const ll LINF = 100100100100100100;
const double EPS = 1e-10;
const long double PI  = acos(-1.0L);
typedef pair<int,int> PII;
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<ll> VL;
#define chmax(a,b) a = (((a)<(b))?(b):(a))
#define chmin(a,b) a = (((a)>(b))?(b):(a))

template<typename A, size_t N, typename T>
void Fill(A (&array)[N], const T &val){
    std::fill( (T*)array, (T*)(array+N), val );
}
__attribute__((constructor))
void initial(){
	cin.tie(nullptr);
	ios::sync_with_stdio(false);
	cout << fixed << setprecision(15);
}


ll f(ll b, ll n){
  if(n<b) return n;
  return f(b,n/b)+n%b;
}


signed main(){
  int n; cin>>n;
  vector<pair<ll, ll> > p(n);
  rep(i,n){
    int x,l; cin>>x>>l;
    pair<ll,ll> q = MP(x,l); p[i]=q;
  }
  sort(ALL(p));
  // rep(i,n) cerr << p[i].first SP p[i].second << endl;

  ll l = p[0].first-p[0].second;
  ll r = p[0].first+p[0].second;
  int ans = n;
  reps(i,n-1){
    ll n_l = p[i].first-p[i].second;
    ll n_r = p[i].first+p[i].second;
    if(r<=n_l) r=n_r;
    else{
      ans--;
      r = min(r,n_r);
    }
  }
  cout << ans << endl;



  return 0;
}
