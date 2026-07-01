class Solution:
    def maxTotalValue(self, nums: List[int], k: int) -> int:
        mx = max(nums)
        mn = min(nums)

        val= k* (mx - mn)

        return val