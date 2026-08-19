class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        long long num = x;
        long long revNum = 0;
        while (num) {
            revNum = revNum * 10 + num % 10;
            num /= 10; 
        }
        return revNum == x;
    }
};