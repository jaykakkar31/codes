class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        st=[]
        s=0
        nums1=0
        nums2=0
        if len(tokens)==1:
            return int(tokens[0])
        for i in range(len(tokens)):
            if tokens[i]=="+":
                nums2=st.pop()
                nums1=st.pop()
                s=nums1+nums2
                st.append(s)
            elif tokens[i]=="*":
                nums2=st.pop()
                nums1=st.pop()
                s=nums2*nums1
                st.append(s)
            elif tokens[i]=='/':
                nums2=st.pop()
                nums1=st.pop()
                s=int(float(nums1/nums2))
                st.append(s)
            elif(tokens[i]=='-'):
                nums2=st.pop()
                nums1=st.pop()
                s=nums1-nums2
                st.append(s)
            else:
                st.append(int(tokens[i]))
            print(st[-1])
        # print(st)
        return st[0]
            
        # def evalRPN(self, tokens):
        # stack = []
        # for t in tokens:
        #     if t not in "+-*/":
        #         stack.append(int(t))
        #     else:
        #         r, l = stack.pop(), stack.pop()
        #         if t == "+":
        #             stack.append(l+r)
        #         elif t == "-":
        #             stack.append(l-r)
        #         elif t == "*":
        #             stack.append(l*r)
        #         else:
        #             stack.append(int(float(l)/r))
        # return stack.pop()
