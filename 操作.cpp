
// グリッドを時計回りに90°回転させる
void rotate(vector<string> x){
    auto y = x;
    rep(i,4) rep(j,4) y.at(3-j).at(i) = x.at(i).at(j);
    x = y;
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
