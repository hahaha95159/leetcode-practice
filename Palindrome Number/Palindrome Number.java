class Solution {
    public boolean isPalindrome(int x) {
        if(x < 0) return false;

        int res = 0;
        int tmp = x;
        while(tmp != 0){
            int carry = tmp % 10;
            tmp /= 10;
            res = res * 10 + carry;
        }

        return res == x;
    }
}