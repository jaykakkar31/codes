class Solution:
    def isNStraightHand(self, hand: List[int], k: int) -> bool:
        n=len(hand)
        if n%k!=0:
            return False
        n=n//k
        for i in range(n):
            minval=min(hand)
            hand.remove(minval)
            for j in range(1,k):
                val=minval+j
                if val in hand:
                    hand.remove(val)
                else:
                    return False
        return True