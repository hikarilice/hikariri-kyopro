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

// 回文判定
bool isPalindrome(string str){
    int low = 0, high = str.size()-1;
    while(low < high){
        if (str.at(low) != str.at(high))return false;
        low++; high--;
    }
    return true;
}

