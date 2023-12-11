/*164. Maximum Gap

Given an integer array nums, return the maximum difference between two successive elements in its sorted form. If the array contains less than two elements, return 0.

You must write an algorithm that runs in linear time and uses linear extra space.

 

Example 1:

Input: nums = [3,6,9,1]
Output: 3
Explanation: The sorted form of the array is [1,3,6,9], either (3,6) or (6,9) has the maximum difference 3.
Example 2:

Input: nums = [10]
Output: 0
Explanation: The array contains less than 2 elements, therefore return 0*/


SOLUTION :



class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size()==1){
        return 0;
        }
        int f;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++)
        {
               
               int maxx=0;
               maxx = nums[i+1] - nums[i];
               if(maxx>f)
               {
                  f = maxx;
               }
        }
        return f;
    }
};