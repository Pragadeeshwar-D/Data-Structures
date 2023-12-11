/*1287. Element Appearing More Than 25% In Sorted Array

Given an integer array sorted in non-decreasing order, there is exactly one integer in the array that occurs more than 25% of the time, return that integer.

 

Example 1:

Input: arr = [1,2,2,6,6,6,6,7,10]
Output: 6
Example 2:

Input: arr = [1,1]
Output: 1
 */


SOLUTION :

class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        if(arr.size()==1)
        {
            return arr[0];
        }
        int n = arr.size();
        int m = n/4;
        int ans;
        for(int i=0;i<n-m;i++)
        {  
           if(arr[i]==arr[i+m])
           {
               ans = arr[i];
           } 
        }
        return ans;
    }
};