
def isPalindrome(self, x: int) -> bool:
    if x < 0:
        return False
    else:
      reverse = 0
      t = x

      while t>0:
        digit = t % 10
        reverse = reverse*10 + digit
        t //= 10

    return reverse == x


        