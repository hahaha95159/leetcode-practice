class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        long res = 0;
        int tmp = x;
        while(tmp){
            int carry = tmp % 10;
            tmp /= 10;
            res = res * 10 + carry;
        }
        return res == x;
    }
};