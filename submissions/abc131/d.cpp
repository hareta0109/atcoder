#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
#include <string>
#include <math.h>
#include <iomanip>
#include <limits>
#include <list>
#include <queue>
#include <tuple>
#include <map>
using namespace std;
#define MOD (long long int)(1e9+7)
#define ll long long int
#define rep(i,n) for(int i=0; i<(int)(n); i++)
#define reps(i,n) for(int i=1; i<=(int)(n); i++)
#define REP(i,n) for(int i=n-1; i>=0; i--)
#define REPS(i,n) for(int i=n; i>0; i--)
#define ALL(x) (x).begin(),(x).end()
#define INF (int)(1123456789)
#define LINF (long long int)(112345678901234567)

int main() {
  int N; cin >> N;
  vector<vector<ll> > L;
  rep(i,N){
    ll a, b; cin >> a >> b;
    vector<ll> v;
    v.push_back(b);
    v.push_back(a);
    L.push_back(v);
  }
  sort(ALL(L));
  ll t = 0;
  string ans = "Yes";
  rep(i,N){
    t += L[i][1];
    if(L[i][0]<t) ans = "No";
  }

  cout << ans << endl;


  return 0;
}