class Solution {
private:
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int l = 0;
        int r = letters.size() - 1;
        int ans = 0;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (letters[mid] > target) r = mid - 1, ans = mid;
            else l = mid + 1;
        }
        return letters[ans];
    }
};