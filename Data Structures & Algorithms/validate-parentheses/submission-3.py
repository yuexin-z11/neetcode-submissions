class Solution:
    def isValid(self, s: str) -> bool:
        hashmap = {}

        hashmap['('] = ')'
        hashmap['{'] = '}'
        hashmap['['] = ']'

        stack = []

        for i in s:
            if i in hashmap:
                stack.append(hashmap[i])
            
            else:
                if (not stack) or (stack.pop() != i):
                    return False

        return not stack

        