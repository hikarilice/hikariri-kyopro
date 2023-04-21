//#include <bits/stdc++.h>
#include "stdc++.hの中身.cpp"

//#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
#include <atcoder/all>
using namespace atcoder;
typedef modint998244353 mint;
#endif
typedef long long  ll;
typedef pair<int,int> pii; typedef pair<ll,ll> pll;
const int INF = 1e9; const long long LINF = 1e18;
const int MOD = 998244353; const int MOD1 = 1e9+7;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define all(x) x.begin(), x.end()
template<typename T> bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<typename T> bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}
void yorn(bool ans){cout << (ans?"Yes":"No") << endl; return;}

// a^b%m (巨大数の累乗のmod)
ll modpow(ll a, ll b, ll m){
    ll ans = 1, p = a;
    // 繰り返し二乗法
    rep(i,63){
        ll wari = (1LL<<i);
        if((b/wari)%2==1) ans = ans * p % m;
        p = p * p % m;
    }
    return ans;
}

// 分数a/b のmod (modpowとセット)
ll moddiv(ll a, ll b, ll m){
    return a * modpow(b,m-2,m) % m;
}

// 素数判定
bool isPrime(ll x){
    for(ll i=2;i*i<=x;i++){
        if(x%i==0) return false;
    }
    return true;
}

// 約数列挙 (long longのみ！！)(1とそれ自身も含む)
vector<ll> divisors(ll x){
    vector<ll> p;
    for(ll i=1;i*i<=x;i++){
        if(x%i==0){
            p.push_back(i);
            if(i*i!=x) p.push_back(x/i);
        }
    }
    sort(all(p)); // sort済み
    return p;
}

// 素因数分解 (型に注意)
map<ll,ll> prime_factor(ll x) {
  map<ll,ll> ret;
  for(ll i=2;i*i<=x;i++) {
    while(x%i==0) {
      ret[i]++;
      x /= i;
    }
  }
  if(x!=1) ret[x] = 1;
  return ret;
}

int main(){
    return 0;
}