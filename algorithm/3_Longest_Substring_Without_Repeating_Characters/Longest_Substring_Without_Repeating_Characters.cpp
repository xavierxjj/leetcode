class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int length = s.length();
        if(length<=1)
            return length;
        unordered_map<char,int> char_current_index;
        int result = 1;
        int current_length = 1;
        char_current_index[s[0]]=0;
        for(int i=1;i<length;i++){
            if(char_current_index.find(s[i])!=char_current_index.end()&&i-current_length<=char_current_index[s[i]])
                current_length=i-char_current_index[s[i]];
            else
                current_length+=1;
            char_current_index[s[i]]=i;
            if(result<current_length)
                result=current_length;
        }
        return result;
    }
};