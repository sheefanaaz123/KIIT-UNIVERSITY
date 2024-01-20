class Solution:
    def isValid(self, s: str) -> bool:
        bracket_stack = [] 

        for char in s:
            if char in ['(', '{', '[']:
                bracket_stack.append(char)
            else:
                if not bracket_stack or (bracket_stack[-1] == '(' and char != ')') or (bracket_stack[-1] == '{' and char != '}') or (bracket_stack[-1] == '[' and char != ']'):
                    return False
                else:
                    bracket_stack.pop()

        return not bracket_stack
