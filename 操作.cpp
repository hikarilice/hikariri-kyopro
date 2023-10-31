
// グリッドを時計回りに90°回転させる
// x = rotate(x); みたいに使う
// グリッドは正方形じゃないとダメ
vector<string> rotate(vector<string> x){
    auto y = x;
    ll n = x.size();
    rep(i,n)rep(j,n) y.at(i).at(j) = x.at(n-1-j).at(i);
    // ↓ 反時計回り
    // rep(i,n)rep(j,n) y.at(n-1-j).at(i) = x.at(i).at(j);
    return y;
}

// 座標圧縮
// 計算量はsortの部分で O(NlogN)
template<class T> T zaatsu(T v){
    T u = v;
    sort(all(u));
    u.erase(unique(u.begin(),u.end()),u.end());
    T res(v.size());
    rep(i,v.size()){
        res.at(i) = lower_bound(all(u),v.at(i))-u.begin();
    }
    return res;
}

// MEX (vectorを入れないとダメっぽい)
template<class T> ll mex(T v){
    vector<bool> x(v.size(),false);
    for(auto i:v) if(i<v.size()) x.at(i) = true;
    rep(i,v.size()) if(!x.at(i)) return i;
    return v.size();
}
