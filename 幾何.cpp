// 線分の交差判定 (二次元)
// 直線の方程式を変形していくと、こう
bool Intersect(ld ax,ld ay,ld bx,ld by,ld cx,ld cy,ld dx,ld dy){
    ld s,t;
    // 直線ABに対して点C,Dが別領域にあるか
    s = (ax-bx)*(cy-ay)-(ay-by)*(cx-ax);
    t = (ax-bx)*(dy-ay)-(ay-by)*(dx-ax);
    if(s*t>0) return false;
    // 直線CDに対して点A,Bが別領域にあるか
    s = (cx-dx)*(ay-cy)-(cy-dy)*(ax-cx);
    t = (cx-dx)*(by-cy)-(cy-dy)*(bx-cx);
    if(s*t>0) return false;
    return true;
}
