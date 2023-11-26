// ABC330_Eのように、配列が事前にあって、それを変更していくようなもの
// 提出例 https://atcoder.jp/contests/abc330/submissions/47969946
class Mex{
    public:
    ll size;
    vl vect,counts;
    set<ll> unused;

    void init(vl a){
        size = a.size();
        vect = a; // vectは配列(集合)そのもの。空集合も可
        counts.assign(size+1,0);
        rep(i,size) counts.at(min(a.at(i),size))++;
        rep(i,size+1) if(counts.at(i)==0) unused.insert(i);
    }

    void update(ll pos, ll x){
        // xがバカでかい数字だった場合に備えて、minをとる
        ll now = min(vect.at(pos),size);
        counts.at(now)--;
        if(counts.at(now)==0) unused.insert(now);

        ll nex = min(x,size);
        vect.at(pos) = x; // 集合に追加されるのはx自身
        counts.at(nex)++;
        if(counts.at(nex)==1) unused.erase(nex);
    }

    void add(ll x){
        size++;
        vect.push_back(x); // 集合に追加されるのはx自身
        counts.push_back(0);
        update(size-1,x);
    }

    // mexの最大値はsize
    ll query(){
        return *begin(unused);
    }
};
