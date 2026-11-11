#include <math.h>
class Solution {
public:
    int getSum(int a, int b) {
        unsigned int result = a ^ b;
        unsigned int carry = a & b;
        // unsigned int tmp = a & b;

        while (carry != 0)
        {
            carry = carry << 1;
            a = carry ^ result;
            carry = carry & result;
            result = a;
        }
        return result;
    }
};
