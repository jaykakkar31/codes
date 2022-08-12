class Solution:
    def numRescueBoats(self, people: List[int], limit: int) -> int:
        people.sort()
        count=0
        start=0
        end=len(people)-1
        
        s=people[start]+people[end]
        
        while start<end:
            if s<=limit:
                count+=1
                end-=1
                start+=1
            else :
                end-=1
                count+=1
            s=people[start]+people[end]
        if start==end:
            count+=1
        return count