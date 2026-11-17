class Solution {
public:
    bool isPerfectSquare(int num) 
    {
        int l = 1, r = num;
        while (l <= r)
        {
            long long mid = l + (r - l) / 2;
            if (mid * mid < num) l = mid + 1;
            else if (mid * mid > num) r = mid - 1;
            else return true;
        }
        return false;
    }
};





// Modified
class Solution {
public:
    bool isPerfectSquare(int num) 
    {
        if (num == 1) return true;
        int l = 2, r = num / 2;
        while (l <= r)
        {
                long long mid = l + (r - l) / 2;
                if (mid * mid < num) l = mid + 1;
                else if (mid * mid > num) r = mid - 1;
                else return true;
        }
        return false;
    }
};