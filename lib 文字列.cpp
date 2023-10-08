
// 回文判定
bool isPalindrome(string str){
    int low = 0, high = str.size()-1;
    while(low < high){
        if (str.at(low) != str.at(high))return false;
        low++; high--;
    }
    return true;
}

