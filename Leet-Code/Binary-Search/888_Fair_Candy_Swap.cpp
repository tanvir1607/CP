class Solution {
private:
    bool binary(vector<int> &vec, int target) {
        int l = 0;
        int r = vec.size() - 1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (vec[mid] < target) l = mid + 1;
            else if (vec[mid] > target) r = mid - 1;
            else return true;
        }
        return false;
    }

public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int sumA = accumulate(aliceSizes.begin(), aliceSizes.end(), 0);
        int sumB = accumulate(bobSizes.begin(), bobSizes.end(), 0);
        int diff = sumB - sumA;
        sort(bobSizes.begin(), bobSizes.end());
        for (int x : aliceSizes) {
            int y = x + diff / 2;
            if (binary(bobSizes, y)) return {x, y};
        }
        return {};
    }
};