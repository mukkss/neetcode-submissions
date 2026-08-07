class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> Count;
        vector<int> result;
        for(int num : nums){
            Count[num]++;
        }
        vector<pair<int,int>> array;
        for(const auto&p : Count){
            array.push_back({p.second, p.first});
        }
        sort(array.rbegin(), array.rend());

        for(int i = 0; i < k; i++){
            result.push_back(array[i].second);
        }
        return result;
    }
};
