#User function Template for python3

class Solution:
	def NthTerm(self, n):
		# Code here
        dp=[1]*(n+1)
        # print(dp)
        for i in range(1,n+1):
            dp[i]=(dp[i-1]*i+1)%1000000007
        return dp[n]

#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		n = int(input())
		ob = Solution()
		ans = ob.NthTerm(n)
		print(ans)

# } Driver Code Ends