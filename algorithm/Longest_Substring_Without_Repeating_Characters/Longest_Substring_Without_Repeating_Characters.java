class Solution {
    public int lengthOfLongestSubstring(String s) {
        int length = s.length();
        if(length<=1)
            return length;
        Map<Character,Integer> char_current_index = new HashMap<Character,Integer>();
        int result = 1;
        int current_length = 1;
        char_current_index.put(s.charAt(0),0);
        for(int i=1;i<length;i++){
            char c = s.charAt(i);
            if(char_current_index.containsKey(c)&&i-current_length<=char_current_index.get(c))
                current_length=i-char_current_index.get(c);
            else
                current_length+=1;
            char_current_index.put(c,i);
            if(result<current_length)
                result=current_length;
        }
        return result;
    }
}