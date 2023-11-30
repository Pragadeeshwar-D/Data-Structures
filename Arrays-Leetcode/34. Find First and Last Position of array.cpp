/*34. Find First and Last Position of Element in Sorted Array

Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

If target is not found in the array, return [-1, -1].

You must write an algorithm with O(log n) runtime complexity.

 

Example 1:

Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]
Example 2:

Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]
Example 3:

Input: nums = [], target = 0
Output: [-1,-1]*/

SOLUTION :

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        return  {firstocc(nums,target) , lastocc(nums,target)};
    }
    int firstocc(vector<int>&nums , int target)
    {
        int n = nums.size();
        int low = 0 ;
        int high =  n-1;
        while(low<=high)
        {
            int mid = (low+high)/2;
            if(nums[mid]<target)
            {
                low = mid+1;
            }
            else if(nums[mid]>target)
            {
                high = mid-1;
            }
            else
            {
                if(mid == 0 || nums[mid-1]!=nums[mid])
                return mid;
                else
                high = mid - 1;
            }

        }
           return -1;
    } 
    int lastocc(vector<int>&nums , int target)
    {
        int n = nums.size();
        int low = 0 ;
        int high =  n-1;
        while(low<=high)
        {
            int mid = (low+high)/2;
            if(nums[mid]<target)
            {
                low = mid+1;
            }
            else if(nums[mid]>target)
            {
                high = mid-1;
            }
            else
            {
                if(mid == n-1 || nums[mid+1]!=nums[mid])
                return mid;
                else
                low = mid +1;
            }

        }
           return -1;
    } 
};
