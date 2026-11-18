class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        # need two pointers 
        low = 0
        high = 1
        max_diff = 0

        while high < len(prices):
            if prices[low] >= prices[high]:
                low = high
            
                
            curr_diff = prices[high] - prices[low]
            high += 1

            if curr_diff > max_diff:
                max_diff = curr_diff
            
        return max_diff