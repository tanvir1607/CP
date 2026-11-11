// Solution - 01
class Solution {
public:
    int strStr(string haystack, string needle) {
        int h = haystack.size();
        int n = needle.size();
        for (int i = 0; i <= h - n; i++)        
        {
            int j = 0;
            while (j < n && haystack[i + j] == needle[j]) j++;
            if (j == n) return i;
        }
        return -1;
    }
};





// Solution - 02
class Solution {
public:
    int strStr(string haystack, string needle) {
        int h = haystack.size();
        int n = needle.size();
        for (int i = 0; i <= h - n; i++)        
        {
            if (haystack.substr(i, n) == needle) return i;
        }
        return -1;
    }
};





// Solution - 03
class Solution {
public:
    int strStr(string haystack, string needle) {
        int pos = haystack.find(needle);
        return pos == string::npos ? -1 : pos;
    }
};