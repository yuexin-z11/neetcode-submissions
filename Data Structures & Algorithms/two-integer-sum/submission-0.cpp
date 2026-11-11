#include <unordered_map>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> t;
        for (int i = 0; i < nums.size(); i++)
        {
            if ( t.count(target-nums[i]) == 1)
            {
                return {t[target-nums[i]], i};
            }
            t[nums[i]] = i;
        }

        return {};
    }
};
