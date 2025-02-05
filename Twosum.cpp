//Two Sum
//CPP//

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> Hmap;

        for (int i = 0; i < nums.size(); i++) {
            int diff = target - nums[i];
            if (Hmap.find(diff) != Hmap.end()) {
                return {i, Hmap[diff]};
            }
            Hmap[nums[i]] = i;
        }
        return {};
    }
};


