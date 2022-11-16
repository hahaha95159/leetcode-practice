class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer, Integer> res = new HashMap<Integer, Integer>();
        for(int i = 0; i < nums.length; i++){
            int[] ress = new int[2];
            if(res.containsKey(nums[i])){
                int left = res.get(nums[i]);
                ress[0] = left;
                ress[1] = i;
                return ress;
            }else{
                res.put(target-nums[i], i);
            }
        }
        return new int[2];
    }
}