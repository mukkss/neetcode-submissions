class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        uni_sorted = sorted(set(nums))

        nums[:len(uni_sorted)] = uni_sorted

        return len(uni_sorted)