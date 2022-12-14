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
#define chmax(a, b) a = (((a)<(b))?(b):(a))
#define chmin(a, b) a = (((a)<(b))?(a):(b))

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

class CompareDist
{
public:
    bool operator()(PLL n1,PLL n2) {
				if(n1.first!=n2.first) return n1.first<n2.first;
				else return n1.second<n2.second;
    }
};

#define lengthof(x) (sizeof(x) / sizeof(*(x)))


__attribute__((constructor))
void initial(){
	cin.tie(nullptr);
	ios::sync_with_stdio(false);
	cout << fixed << setprecision(15);
}

bool contain(int mask, int position){
  if((mask&(1<<position))) return true;
  else return false;
}

// GCD,LCMを求める関数
ll gcd(ll a,ll b){
	if(a%b==0) return(b);
	else return(gcd(b,a%b));
}
ll lcm(ll a, ll b){
	return a*b/gcd(a,b);
}

double dabs(double a, double b){
  if(a>=b) return a-b;
  else return b-a;
}


signed main(){
	double n; cin>>n;
  double sum = 0;
  vector<double> a(n);
  rep(i,n){
    double b; cin>>b;
    sum+=b; a[i]=b;
  }
  double ave = sum/n;
  double dif = 100000.0;
  int idx = -1;
  rep(i,n){
    if(dabs(ave,a[i])<dif){
      dif = dabs(ave,a[i]);
      idx = i;
    }
  }
  cout << idx << endl;

  return 0;
}
