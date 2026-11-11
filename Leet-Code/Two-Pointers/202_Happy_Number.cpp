// Solution - 01
class Solution {
public:
    int getSum(int num)
    {
        int sum = 0;
        while (num)
        {
            int digit = num % 10;
            sum += digit * digit;
            num /= 10;
        }
        return sum;
    }
    
    bool isHappy(int n) 
    {
        int slow = n;
        int fast = n;
        while (true)
        {
            slow = getSum(slow);
            fast = getSum(getSum(fast));
            if (fast == 1) return true;
            if (slow == fast) return false;
        }
    }
};





// Solution - 01 - Modified
class Solution {
public:
    int getSum(int num)
    {
        int sum = 0;
        while (num)
        {
            int digit = num % 10;
            sum += digit * digit;
            num /= 10;
        }
        return sum;
    }
    
    bool isHappy(int n) 
    {
        int slow = n;
        int fast = n;
        do
        {
            slow = getSum(slow);
            fast = getSum(getSum(fast));
        }
        while (slow != fast && fast != 1);
        return fast == 1;
    }
};