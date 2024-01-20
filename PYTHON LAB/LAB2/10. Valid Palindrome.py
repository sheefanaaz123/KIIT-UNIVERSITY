class Solution(object):
    def isPalindrome(self, s):
        start = 0
        end = len(s) - 1
        
        while start < end:
            while start < end and not s[start].isalnum():
                start += 1
            while start < end and not s[end].isalnum():
                end -= 1
            
            if s[start].lower() != s[end].lower():
                return False
            
            start = start + 1
            end = end - 1

        return True
