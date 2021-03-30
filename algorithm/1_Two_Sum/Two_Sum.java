class Solution {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer,Integer> hash_map = new HashMap<Integer,Integer>();
        int complement;
        for(int i=0;i<nums.length;i++){
            complement = target - nums[i];
            if(hash_map.containsKey(complement)){
                return new int[]{hash_map.get(complement),i};
            }
            hash_map.put(nums[i],i);
        }
        return null;
    }
}