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
const double PI  = acos(-1.0);
typedef pair<int,int> PII;
typedef vector<int> VI;
typedef vector<VI> VVI;

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



signed main(){
  int n; cin>>n;
  VI a(n), b(n); rep(i,n) cin>>a[i]>>b[i];
  VI c(n), d(n); rep(i,n) cin>>c[i]>>d[i];
  vector<PII> ab(n); rep(i,n) ab[i] = make_pair(a[i],b[i]);
  vector<PII> cd(n); rep(i,n) cd[i] = make_pair(c[i],d[i]);
  sort(ALL(ab)); sort(ALL(cd));
  VI used(n,false);
  int ans = 0;

  rep(i,n){
    PII next = cd[i];
    int index = -1, maxval = -INF;
    rep(j,n){
      if(!used[j] && ab[j].first<next.first && ab[j].second<next.second && maxval<ab[j].second){
        index = j; maxval = max(maxval, ab[j].second);
      }
    }
    if(index != -1){
      ans++; used[index] = true;
    }
  }
  cout << ans << endl;


  return 0;
}