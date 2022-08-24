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
  int n; cin>>n;
  int a; string op; cin>>a;
  ll dp[n][3]; memset(dp,-INF,sizeof(dp)); dp[0][0]=a;

  rep(i,n-1){
    cin>>op>>a;
    ll tmp[3];
    if(op=="+"){
      rep(j,3) tmp[j]=dp[i][j];
    }else{
      tmp[0]=dp[i][1];
      tmp[1]=max(dp[i][0],dp[i][2]);
      tmp[2]=dp[i][1];
    }
    dp[i+1][2] = tmp[2]+a;
    dp[i+1][1] = max(dp[i+1][2], tmp[1]-a);
    dp[i+1][0] = max(dp[i+1][1], tmp[0]+a);
  }
  ll ans = max(dp[n-1][0],dp[n-1][1]);
  ans = max(ans,dp[n-1][2]);

  cout << ans << endl;

  return 0;
}
