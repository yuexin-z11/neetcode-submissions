#include <stdint.h>

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        // the 4 bits is reversed 
        /* create a loop where
            mask the last bit 
            place it in a new reg
            shift the old reg
            until the old reg is through
            
            since its always 32 bit signed
            its 32 passes in total
        */

        uint32_t r = 0, tmp;
        // convert into unsigned
        uint32_t x = (uint32_t)n;

        for (int i = 0; i < 32; i++)
        {
            tmp = x & 1u;

            r = (r << 1) | tmp;

            x = x >> 1;
        }

        return r;
    }
};
