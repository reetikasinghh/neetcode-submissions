class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int res = 0;
        int curSum =0;
        unordered_map<int,int>f;
        f[0] =1;

        for (int num : nums){
            curSum += num;
            int diff = curSum - k;
            res += f[diff];
            f[curSum]++;
        }
        return res;
    }
};