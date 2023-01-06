class Solution:
    def maxIceCream(self, costs: List[int], coins: int) -> int:
        costs.sort()
        num_ice_cream_bars = 0
        for cost in costs:
            if coins - cost >= 0:
                coins -= cost
                num_ice_cream_bars += 1
            else:
                break
        return num_ice_cream_bars