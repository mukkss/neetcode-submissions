class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0, r = heights.size() - 1;
        int MaxArea = 0;

        while(l < r){
            int CurArea = min(heights[l], heights[r]) * (r - l);
            MaxArea = max(MaxArea, CurArea);
            if(heights[l] < heights[r]){
                l++;
            } else {
                r--;
            }
        }
        return MaxArea;
    }
};
