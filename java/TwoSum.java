public class Solution {
    public int[] twoSum(int[] numbers, int target) {
      int[] res=new int[2];
      HashMap<Integer,Integer> nums=new HashMap<Integer,Integer>();
      for(int i=0;i<numbers.length;i++){
          nums.put(numbers[i],i);
      }
      for(int i=0;i<numbers.length;i++){
          if(nums.containsKey(target - numbers[i]) && i != nums.get(target - numbers[i])){
              res[0]=i;
              res[1]=nums.get(target - numbers[i]);
          }
      }
      return res;
    }
}
