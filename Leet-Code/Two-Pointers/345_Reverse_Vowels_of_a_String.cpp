// Solution - 01
class Solution {
public:
    string reverseVowels(string s) 
    {
        string vowels = "aeiouAEIOU";
        int l = 0;
        int r = s.size() - 1;
        while (l < r)
        {
            if (vowels.find(s[l]) == string::npos) l++;
            else if (vowels.find(s[r]) == string::npos) r--;
            else 
            {
                swap(s[l], s[r]);
                l++;
                r--;
            }
        }
        return s;
    }
};





// Solution - 01 - Modified
class Solution {
public:
    string reverseVowels(string s) 
    {
        string vowels = "aeiouAEIOU";
        int l = 0;
        int r = s.size() - 1;
        while (l < r)
        {
            while (l < r && vowels.find(s[l]) == string::npos) l++;
            while (l < r && vowels.find(s[r]) == string::npos) r--;
            if (l < r)
            {
                swap(s[l], s[r]);
                l++;
                r--;
            }
        }
        return s;
    }
};