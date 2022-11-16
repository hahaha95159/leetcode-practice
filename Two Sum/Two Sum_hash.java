class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer, Integer> res = new HashMap<Integer, Integer>();
        int[] ress = new int[2];
        for(int i = 0; i < nums.length; i++){
            if(res.containsKey(nums[i])){
                ress[0] = res.get(nums[i]);
                ress[1] = i;
            }else{
                res.put(target-nums[i], i);
            }
        }
        return ress;
    }
}