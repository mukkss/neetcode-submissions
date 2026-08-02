class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> HashMap;
        for(int i = 0; i < nums.size(); i++){
            int difference = target - nums[i];
            if(HashMap.count(difference)){
                return{HashMap[difference],i};
            }
            HashMap[nums[i]] = i;
        }
        return {};
    }
};
