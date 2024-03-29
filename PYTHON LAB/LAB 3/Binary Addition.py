class Solution:
    def addBinary(self, a: str, b: str) -> str:
        result = ""
        i, j = len(a) - 1, len(b) - 1
        carry = 0

        while i >= 0 or j >= 0:
            _sum = carry

            if i >= 0:
                _sum += int(a[i])
                i -= 1

            if j >= 0:
                _sum += int(b[j])
                j -= 1

            carry = 1 if _sum > 1 else 0
            result = str(_sum % 2) + result

        if carry:
            result = "1" + result

        return result

ob1 = Solution()
print(ob1.addBinary("1010", "1011"))
