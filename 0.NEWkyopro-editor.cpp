#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
#include <atcoder/all>
using namespace atcoder;
typedef modint998244353 mint;
#endif
typedef long long ll; typedef long double ld; typedef pair<int,int> pii; typedef pair<ll,ll> pll;
typedef vector<ll> vl; typedef vector<vl> vvl; typedef vector<vvl> vvvl;
typedef vector<ld> vld; typedef vector<vld> vvld; typedef vector<pll> vpl;
const int INF = 1e9; const long long LINF = 1e18;
const ll MOD = 998244353; //const ll MOD = 1e9+7;
#define rep(i,n) for(ll i=0;i<(ll)(n);i++)
#define rep1(i,n) for(ll i=1;i<=(ll)(n);i++)
#define REP(i,n,m) for(ll i=(ll)(n);i<=(ll)(m);i++)
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
template<typename T> bool chmin(T& a,T b){if(a>b){a=b;return true;}return false;}
template<typename T> bool chmax(T& a,T b){if(a<b){a=b;return true;}return false;}
void yorn(bool ans){cout<<(ans?"Yes":"No")<<endl;return;}
template<class T> void vout(T v){for(auto i:v)cout<<i<<' ';cout<<endl;return;}
template<class T> void vvout(T v){for(auto i:v){for(auto j:i)cout<<j<<' ';cout<<endl;}return;}
template<class T> void vpout(T v){for(auto [i,j]:v)cout<<'('<<i<<','<<j<<')';cout<<endl;return;}
vector<ll> dy = {1,-1,0,0}; vector<ll> dx = {0,0,1,-1};
vector<ll> dy2 = {-1,1,1,-1}; vector<ll> dx2 = {1,1,-1,-1};
bool in(ll a,ll x,ll y){return x<=a&&a<=y;}
// priority_queue<型, vector<型>, greater<型>> q; //小さい順

int main(){
    
}
