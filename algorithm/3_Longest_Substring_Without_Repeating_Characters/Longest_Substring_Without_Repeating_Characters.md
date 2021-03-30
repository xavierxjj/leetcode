# [Longest_Substring_Without_Repeating_Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/)

Idea:  
f(n):The length of the longest substring without repeated characters and ends with the nth character   
g(n):The largest index of the nth character in the substring from index 0 to index n-1   
Use hash table to record g(n), the time complexity is O (n) and the space complexity is O (n).  

思路：
f(n):以第n个字符结尾且无重复字符的最长子字符串的长度  
g(n):从索引0到n-1的子字符串中第n个字符出现的最大索引  
使用hash表记录g(n)，时间复杂度为O(n)，空间复杂度为O(n)。  

<img src="http://latex.codecogs.com/svg.latex?f(n)= \left\{\begin{matrix}1&n=1\\f(n-1)+1&n>1\&g(n)<n-f(n-1)\\n-g(n)&n>1\&g(n)>=n-f(n-1)\end{matrix}\right.">
