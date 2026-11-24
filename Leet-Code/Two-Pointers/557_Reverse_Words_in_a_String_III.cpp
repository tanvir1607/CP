// Solution - 01
class Solution {
public:
    string reverseWords(string s) 
    {
        int l = 0, r = 0;
        while (r < s.size())
        {
            if (s[r] != ' ') r++;
            else
            {
                reverse(s.begin() + l, s.begin() + r);
                l = ++r;
            }
        }   
        reverse(s.begin() + l, s.begin() + r);
        return s;
    }
};





// Solution - 02
class Solution {
public:
    string reverseWords(string s) 
    {
        int l = 0, r = 0;
        int size = s.size();
        while (r < size)
        {
            while (r < size && s[r] != ' ') r++;
            int end = r - 1;
            while (l < end)
            {
                swap(s[l], s[end]);
                l++, end--;
            }
            l = ++r;
        }   
        return s;
    }
};