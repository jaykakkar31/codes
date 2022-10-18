class Solution:
    def countAndSay(self, n: int) -> str:
        if (n == 1):
            return "1"
        if (n == 2):
            return "11"

     
        s = "11"
        for i in range(3, n + 1):

         
            s += '$'
            l = len(s)

            cnt = 1 # Initialize count
                    # of matching chars
            tmp = "" # Initialize i'th
                     # term in series

            # Process previous term to
            # find the next term
            for j in range(1 , l):

                # If current character
                # does't match
                if (s[j] != s[j - 1]):

                    # Append count of
                    # str[j-1] to temp
                    tmp += str(cnt )

                    # Append str[j-1]
                    tmp += s[j - 1]

                    # Reset count
                    cnt = 1

                # If matches, then increment
                # count of matching characters
                else:
                    cnt += 1

            # Update str
            s = tmp
        return s;