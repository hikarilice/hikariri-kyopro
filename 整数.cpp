
// a^b%m (巨大数の累乗のmod)
ll modpow(ll a, ll b, ll m){
    ll ans = 1, p = a;
    // 繰り返し二乗法
    rep(i,63){
        ll wari = (1LL<<i);
        if((b/wari)%2==1) ans = ans * p % m;
        p = p * p % m;
    }
    return ans % m;
}

// 分数a/b のmod (modpowとセット)
// フェルマーの小定理
ll moddiv(ll a, ll b, ll m){
    return a % m * modpow(b,m-2,m) % m;
}

// combination (modpow,moddivとセット)
// 計算量は O(NlogN)?
// r=0 の時、ret=1 に注意
ll combi(ll n, ll r, ll m){
    ll ret = 1;
    rep1(i,n) ret = ret*i%m;
    rep1(i,r) ret = moddiv(ret,i,m);
    rep1(i,n-r) ret = moddiv(ret,i,m);
    return ret%m;
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

// 拡張ユークリッド互除法
// 返り値は、gcd(a,b)
// ax + by = gcd(a,b) を満たす (x,y) が格納される
// 出典:けんちょんの記事(https://qiita.com/drken/items/b97ff231e43bce50199a)
// ll x,y; // と宣言してから使う
ll extGCD(ll a,ll b, ll &x,ll &y){
    // いちばん下まで行ってから、x,yを再帰的に構成する
    if(b==0){
        x = 1;
        y = 0;
        return a;
    }
    ll d = extGCD(b,a%b, y,x);
    y -= a/b * x;
    return d;
}
