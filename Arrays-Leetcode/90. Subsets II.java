/*90. Subsets II

Given an integer array nums that may contain duplicates, return all possible 
subsets
 (the power set).
The solution set must not contain duplicate subsets. Return the solution in any order.

 

Example 1:

Input: nums = [1,2,2]
Output: [[],[1],[1,2],[1,2,2],[2],[2,2]]
Example 2:

Input: nums = [0]
Output: [[],[0]]*/


SOLUTION :

class Solution {
    public List<List<Integer>> subsetsWithDup(int[] nums) {
        List<List<Integer>> results = new ArrayList<>();
        Arrays.sort(nums);
        backtracking(results,new ArrayList<>(),nums,0);
        return results;
    }
    private void backtracking(List<List<Integer>>results,List<Integer>tempset,int []nums,int start)
   {    
       if(results.contains(tempset))
       {
           return;
       }
        results.add(new ArrayList<>(tempset));
        for(int i=start;i<nums.length;i++)
        {
            tempset.add(nums[i]);
            backtracking(results,tempset,nums,i+1);
            tempset.remove(tempset.size()-1);
        }

    }
}