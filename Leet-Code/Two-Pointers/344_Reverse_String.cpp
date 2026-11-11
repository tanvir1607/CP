// Solution - 01
class Solution {
public:
    void reverseString(vector<char>& s) {
        int l = 0, r = s.size() - 1;
        while (l < r)
        {
            swap(s[l], s[r]);
            l++;
            r--;
        }
    }
};





// Solution - 02
class Solution {
public:
    void rev(vector<char> &s, int l, int r)
    {
        if (l < r)
        {
            swap(s[l], s[r]);
            rev(s, ++l, --r);
        }
    }
    void reverseString(vector<char>& s) {
        rev(s, 0, s.size() - 1);
    }
};





// Solution - 03
class Solution {
public:
    void reverseString(vector<char>& s) {
        stack<int> stk;
        for (char ch : s) stk.push(ch);
        int idx = 0;
        while (stk.size())
        {
            s[idx] = stk.top();
            stk.pop();
            idx++;
        }
    }
};