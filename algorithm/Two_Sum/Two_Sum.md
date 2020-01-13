# [Two Sum](https://leetcode.com/problems/two-sum/)

思路:遍历数组判断当前值所对应的目标值的补是否存在于数组中。若使用遍历数组的方法判断则时间复杂度为O(n^2)，空间复杂度为O(1)。若使用hash表的方法判断则时间复杂度为O(n)，空间复杂度为O(n)。