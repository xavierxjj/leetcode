class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        length = len(s)
        if length <= 1:
            return length
        char_current_index = {}
        result = 1
        current_length = 1
        char_current_index[s[0]] = 0
        for i in range(1,length):
            if char_current_index.get(s[i])!=None and i-current_length<=char_current_index[s[i]]:
                current_length=i-char_current_index[s[i]]
            else:
                current_length+=1
            char_current_index[s[i]]=i
            if result<current_length:
                result=current_length
        return result