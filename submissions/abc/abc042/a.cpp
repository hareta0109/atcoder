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

bool IsPrime(ll num){
    if(num < 2) return false;
    else if(num == 2) return true;
    else if(num % 2 == 0) return false;
    double sqrtNum = sqrt(num);
    for(ll i = 3; i <= sqrtNum; i += 2){
        if(num%i==0) return false;
    }
    return true;
}


signed main(){
  int n,k; cin>>n>>k;
  VI d(k); rep(i,k) cin>>d[i];
  for(int ret=n;ret<=n*10;ret++){
    bool flg = true;
    // ostringstream oss;
    // oss << ret;
    // string check = oss.str();
    int ch = ret;
    while(ch){
      rep(j,k){
        if(ch%10==d[j]){
          flg=false; break;
        }
      }
      ch /= 10;
    }

    // rep(i,check.size()){
    //   rep(j,k){
    //     cerr << i SP j SP ret SP check << endl;
    //     cerr << check[i] SP d[j] << endl;
    //     if(check[i]==d[j]){
    //       flg = false; break;
    //     }
    //   }
    // }
    if(flg) return cout<<ret<<endl,0;
  }

  return 0;
}
