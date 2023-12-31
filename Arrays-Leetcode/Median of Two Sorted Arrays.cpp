/*4. Median of Two Sorted Arrays

Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

The overall run time complexity should be O(log (m+n)).

 

Example 1:

Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.
Example 2:

Input: nums1 = [1,2], nums2 = [3,4]
Output: 2.50000
Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.
 
*/
Solution :

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double fn;
         for(int i=0;i<nums2.size();i++)
         {
             nums1.push_back(nums2[i]);
         }
       
         sort(nums1.begin(),nums1.end());
         int z = nums1.size();
         int y = (z/2);
         if(z%2==0)
         {
             fn = (nums1[y]+nums1[y-1])/2.0;
         }
         else
         {
            fn = nums1[z/2];
         }
         return fn;
    }
};