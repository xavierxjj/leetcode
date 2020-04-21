# [Longest_Substring_Without_Repeating_Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/)

Idea:  
f(n):the length of the longest substring without repeating characters ends with nth character  
g(n):The maximum index of the nth character in the substring from index 0 to index n-1  
<script id="MathJax-script" async src="https://cdn.jsdelivr.net/npm/mathjax@3/es5/tex-mml-chtml.js">
f(x) =\begin{cases}1 &n=1\\f(n-1)+1 &n>1,g(n)<n-f(n-1)\\n-g(n)&n>1,g(n)>=n-f(n-1) )\end{cases}
</script>
1 if n=1  
f(n-1)+1 if n>1 and g(n)<n-f(n-1)  
n-g(n) if n>1 and g(n)>=n-f(n-1) )
 

思路：