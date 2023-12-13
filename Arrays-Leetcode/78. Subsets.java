/*78. Subsets

Given an integer array nums of unique elements, return all possible 
subsets
 (the power set).
The solution set must not contain duplicate subsets. Return the solution in any order.

 

Example 1:

Input: nums = [1,2,3]
Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]
Example 2:

Input: nums = [0]
Output: [[],[0]]*/


SOLUTION :


class Solution {
    public List<List<Integer>> subsets(int[] nums) {
        List<List<Integer>> result = new ArrayList<>();
        backtrack(result,new ArrayList<>(),nums,0);
        return result;
    }
    private void backtrack(List<List<Integer>> results,List<Integer>tempset,int []nums,int start)
    {
        results.add(new ArrayList<>(tempset));
        for(int i=start;i<nums.length;i++)
        {
            tempset.add(nums[i]);
            backtrack(results,tempset,nums,i+1);
            tempset.remove(tempset.size()-1);
        }

    }
}