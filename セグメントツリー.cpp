
// 鉄則本のセグメントツリー RMQ (Range Minimum Query)
class Segtree{
    public:
    vector<ll> dat;
    ll size;

    void init(ll n){
        size = 1;
        while(size<n) size *= 2;
        dat.assign(size*2,0);
    }

    void update(ll pos, ll x){
        pos = pos+size-1;
        dat.at(pos) = x;
        while(pos>1){
            pos /= 2;
            dat.at(pos) = max(dat.at(pos*2),dat.at(pos*2+1));
        }
    }

    // z.query(l,r, 1,z.size+1, 1);
    // [l,r)がターゲットの範囲、　[a,b)はメソッド呼び出し時の範囲、posはメソッド呼び出し時のdatの位置
    // 半開区間
    ll query(ll l,ll r,ll a,ll b,ll pos){
        if(b<=l || r<=a) return -LINF;
        if(l<=a && b<=r) return dat.at(pos);
        ll mid = (a+b)/2;
        ll ansL = query(l,r, a,mid, pos*2); //// [a,b)の左半分の区間
        ll ansR = query(l,r, mid,b, pos*2+1); // [a,b)の右半分の区間
        return max(ansL,ansR);
    }
};

// 鉄則本セグメントツリー　RSQ (Range Sum Query)
class Segtree2{
    public:
    vector<ll> dat;
    ll size;

    void init(ll n){
        size = 1;
        while(size<n) size *= 2;
        dat.assign(size*2,0);
    }

    void update(ll pos, ll x){
        pos = pos+size-1;
        dat.at(pos) = x;
        while(pos>1){
            pos /= 2;
            dat.at(pos) = dat.at(pos*2)+dat.at(pos*2+1);
        }
    }

    // z.query(l,r,1,z.size+1,1);
    // [l,r)がターゲットの範囲、　[a,b)はメソッド呼び出し時の範囲、posはメソッド呼び出し時のdatの位置
    // 半開区間
    ll query(ll l,ll r,ll a,ll b,ll pos){
        if(b<=l || r<=a) return 0;
        if(l<=a && b<=r) return dat.at(pos);
        ll mid = (a+b)/2;
        ll ansL = query(l,r, a,mid, pos*2); //// [a,b)の左半分の区間
        ll ansR = query(l,r, mid,b, pos*2+1); // [a,b)の右半分の区間
        return ansL+ansR;
    }
};
