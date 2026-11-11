class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int unique = 0;
        // loop through the array
        for (int i = 0; i < nums.size(); i++)
        {
            unique ^= nums[i];
        }

        return unique;
    }
};
