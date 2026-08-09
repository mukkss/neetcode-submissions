class Solution:
    def numRescueBoats(self, people: List[int], limit: int) -> int:
        n = len(people)
        l, r = 0, n - 1
        count = 0
        people.sort()
        while(l <= r):
            if l == r:
                count += 1
                break
            
            if people[l] + people[r] <= limit:
                l += 1
            
            r -= 1
            count += 1
        return count