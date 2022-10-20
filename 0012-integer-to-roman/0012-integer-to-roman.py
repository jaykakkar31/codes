class Solution:
    def intToRoman(self, num: int) -> str:
        total=0
        d={ 1000: "M",
            900: "CM",
            500: "D",
            400: "CD",
            100: "C",
            90: "XC",
            50: "L",
            40: "XL",
            10: "X",
            9: "IX",
            5: "V",
            4: "IV",
            1: "I"}
        s=""
        while num:
            for i in d:
                if i>num:
                    continue
                else:
                    # s+=d[i]
                    if num%i==0:
                        for j in range(num//i):
                            s+=d[i]
                    else:
                        for j in range(num//i):
                            s+=d[i]
                        # s+=d[i]
                    num=num%i
        return s