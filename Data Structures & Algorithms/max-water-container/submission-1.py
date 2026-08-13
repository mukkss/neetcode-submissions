class Solution:
    def maxArea(self, heights: List[int]) -> int:
        l, r = 0, len(heights) - 1

        MaxArea = 0
        while l < r:
            CurrArea = min(heights[l], heights[r]) * (r - l)
            MaxArea = max(MaxArea, CurrArea)
            if heights[l] < heights[r]:
                l += 1
            else:
                r -= 1
        return MaxArea