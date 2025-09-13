class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer, Integer> mp = new HashMap<>();
        ArrayList<Integer> l = new ArrayList<>();
        for(int i =0;i<nums.length;i++)
        {
            if(mp.containsKey(target-nums[i]))
            {
                int x = mp.get(target-nums[i]);
                return new int []{x, i};
            }
            else mp.put(nums[i],i);
        }
        return new int[]{};
    }
}