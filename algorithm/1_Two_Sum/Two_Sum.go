func twoSum(nums []int, target int) []int {
    mapComplement := make(map[int]int)
    for index,key := range nums{
        if _,ok := mapComplement[target-key]; ok{
            return []int{mapComplement[target-key],index}
        }
        mapComplement[key] = index
    }
    return []int{}
}