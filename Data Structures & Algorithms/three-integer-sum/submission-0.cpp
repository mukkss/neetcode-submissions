class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > 0) break;
            if(i > 0 && nums[i] == nums[i - 1]) continue;

            int l = i + 1, r = nums.size() - 1;
            while(l < r){
                int ThreeSum = nums[i] + nums[l] + nums[r];
                if(ThreeSum > 0){
                    r--;
                } else if(ThreeSum < 0){
                    l++;
                } else {
                    result.push_back({nums[i],nums[l],nums[r]});
                    l++;
                    r--;
                    while(nums[l] == nums[l - 1] && l < r){
                        l++;
                    }
                }
            }

        }
        return result;
    }
};
