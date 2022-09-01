def is_valid(s):
    open_parenthesis = 0
    for p in s:
        if p == '(' or p == '*':
            open_parenthesis += 1
        else:
            open_parenthesis -= 1
            if open_parenthesis < 0:
                return False
    return True 

# Method to get reverse string
def get_rev_str(s):
    rev = []
    for i in range(len(s)-1, -1 ,-1):
        if s[i] == '(':
            rev.append(')')
        elif s[i] == ')':
            rev.append('(')
        else:
            rev.append('*')
    return "".join(rev) 

class Solution:
    def checkValidString(self, s: str) -> bool:
        rev_str = get_rev_str(s)
        return is_valid(s) and is_valid(rev_str)