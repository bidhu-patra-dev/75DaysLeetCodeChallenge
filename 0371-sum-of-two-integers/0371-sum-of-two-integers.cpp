class Solution {
public:
    int getSum(int a, int b) {
        int sum = a ^ b, carry = (a & b) << 1;
        if (carry)
            return getSum(sum, carry);
        return sum;
    }
};