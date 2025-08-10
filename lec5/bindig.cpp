
    class Solution {
public:
    int hammingWeight( UINT32_t n) {
        int count = 0;
        while (n != 0) {
            // Checking the last bit
            if (n & 1) {
                count++;
            }
            // Right shift the bits of n
            n = n >> 1;
        }
        return count;
    }
};

