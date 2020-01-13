class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hash_map;
        int nums_size = nums.size();
        int complement;
        for(int i = 0; i < nums_size; i++){
            complement = target - nums[i];
            if(hash_map.find(complement)!=hash_map.end()){
                return vector<int>({hash_map[complement],i});
            }
            hash_map[nums[i]]=i;
        }
        return vector<int>();
    }
};