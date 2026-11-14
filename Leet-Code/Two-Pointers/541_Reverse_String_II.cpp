// Solution - 01
class Solution {
public:
    string reverseStr(string s, int k) 
    {
        int size = s.size();
        int l = 0;
        int r = min(k, size);
        while (l < size)
        {
            int i = l;
            int j = r - 1;
            while (i < j)
            {
                swap(s[i], s[j]);
                i++;
                j--;
            }
            l += 2 * k;
            r = min(l + k, size);
        }
        return s;
    }
};





// Solution - 01 - Modified
class Solution {
public:
    string reverseStr(string s, int k) 
    {
        int size = s.size();
        int l = 0;
        int r = min(k, size);
        while (l < size)
        {
            reverse(s.begin() + l, s.begin() + r);
            l += 2 * k;
            r = min(l + k, size);
        }
        return s;
    }
};