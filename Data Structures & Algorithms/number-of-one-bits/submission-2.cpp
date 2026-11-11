#include <math.h>

class Solution {
public:
    int hammingWeight(uint32_t n) {        
        int result = n;
        int count = 0;

        while (result != 0)
        {
            result = result & (result - 1);
            count ++;
        }

        return count;
    }
};
