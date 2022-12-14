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
  int x,y; cin>>x>>y;
  int cnt = 0;
  // int a=abs(x), b=abs(y);
  // if(x==0&&y<0) return cout<<abs(y)+1<<endl,0;
  // if(x*y>=0){
  //   if(a-b>=0^(x>=0&&y>=0)) cnt=abs(a-b);
  //   else cnt=abs(a-b)+2;
  // }else{
  //   cnt = abs(a-b)+1;
  // }
  int cnt0=INF,cnt1=INF,cnt2=INF,cnt3=INF;
  if(x<=y) cnt0 = y-x;
  if(-x<=y) cnt1 = y+x+1;
  if(x<=-y) cnt2 = -y-x+1;
  if(-x<=-y) cnt3 = -y+x+2;
  cnt = min(cnt0,min(cnt1,min(cnt2,cnt3)));
  cout << cnt << endl;

  return 0;
}
