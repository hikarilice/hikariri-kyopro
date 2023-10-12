
// g,q,dを定義する必要あり
void BFS (vvl &g, queue<ll> &q, vl &d, ll start){
    q.push(start);
    d.at(start) = 0;
    while(!q.empty()){
        ll pos = q.front();
        q.pop();
        for(auto i:g.at(pos)){
            if(d.at(i)!=-1) continue;
            q.push(i);
            d.at(i) = d.at(pos)+1;
        }
    }
    return;
}

// ラムダ式版
// g,q,dを定義する必要あり
auto BFS = [&](vvl &g, queue<ll> &q, vl &d, ll start){
        q.push(start);
        d.at(start) = 0;
        while(!q.empty()){
            ll pos = q.front();
            q.pop();
            for(auto i:g.at(pos)){
                if(d.at(i)!=-1) continue;
                q.push(i);
                d.at(i) = d.at(pos)+1;
            }
        }
        return;
    };
