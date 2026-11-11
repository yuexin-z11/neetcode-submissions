#include <unordered_map>
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> count;

        for (int i : nums){
            if (count.count(i) == 0)
            {
                count[i]++;
            }
            else
            {
                return true;
            }
        }

        return false;
    }
};