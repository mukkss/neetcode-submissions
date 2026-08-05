class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0;
        int r = numbers.size() - 1;
        while(l < r){
            int CurrentSum = numbers[l] + numbers[r];

            if(CurrentSum > target){
                r--;
            } else if(CurrentSum < target){
                l++;
            } else {
                return{l + 1, r + 1};
            }
        }
        return {};
    }
};
