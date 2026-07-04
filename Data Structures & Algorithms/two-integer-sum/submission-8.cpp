class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> f;

        for (int i = 0; i < n; i++) {
            int diff = target - nums[i];
           if (f.find(diff) != f.end()){
            return {f[diff], i};
           }
           f.insert({nums[i], i});
           
        }
    }
};