// Solution - 01
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size = digits.size();
        vector<int> ans(size);
        int carry = 1;
        for (int i = size - 1; i >= 0; i--) {
            int sum = digits[i] + carry;
            int digit = sum % 10;
            carry = sum / 10;
            ans[i] = digit;
        }
        if (carry) ans.insert(ans.begin(), carry);
        return ans;
    }
};





// Solution - 02
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size = digits.size();
        for (int i = size - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
};