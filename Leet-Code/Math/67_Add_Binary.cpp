class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.size() - 1;
        int j = b.size() - 1;
        int carry = 0;
        string ans = "";
        while (i >= 0 || j >= 0 || carry) {
            int result = carry;
            if (i >= 0) result += a[i--] - '0';
            if (j >= 0) result += b[j--] - '0';
            ans.push_back((result % 2) + '0');
            carry = result / 2;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};