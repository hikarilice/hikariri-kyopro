//#include <bits/stdc++.h>
#include "stdc++.hの中身.cpp"

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
#define rep1(i,n) for(int i=1;i<=(int)(n);i++)
#define all(x) x.begin(), x.end()
template<typename T> bool chmin(T& a, T b){if(a>b){a=b; return true;} return false;}
template<typename T> bool chmax(T& a, T b){if(a<b){a=b; return true;} return false;}
void yorn(bool ans){cout << (ans?"Yes":"No") << endl; return;}
void vout(vector<ll> v){for(auto i:v)cout<<i<<' ';cout<<endl;return;}

int main() {
    vector<ll> x = {1,1,2,3,5};
    cout << x.size() << endl;
    cout << x.at(2)<< endl;

    auto a = 4;
    cout << a << endl;

    vout(x);
    //dsu d(100);
}
