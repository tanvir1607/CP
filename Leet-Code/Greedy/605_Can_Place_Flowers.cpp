class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0;
        int size = flowerbed.size();
        for (int i = 0; i < size; i++) {
            if (flowerbed[i] == 0) {
                bool leftZero = (i == 0 || flowerbed[i - 1] == 0);
                bool rightZero = (i == size - 1 || flowerbed[i + 1] == 0);
                if (leftZero && rightZero) {
                    count++;
                    flowerbed[i] = 1;
                }
            }
        }
        return count >= n;
    }
};