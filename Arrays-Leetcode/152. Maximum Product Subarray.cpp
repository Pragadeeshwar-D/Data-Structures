/*152. Maximum Product Subarray

Given an integer array nums, find a 
subarray
 that has the largest product, and return the product.

The test cases are generated so that the answer will fit in a 32-bit integer.

 

Example 1:

Input: nums = [2,3,-2,4]
Output: 6
Explanation: [2,3] has the largest product 6.

Example 2:
Input: nums = [-2,0,-1]
Output: 0
Explanation: The result cannot be 2, because [-2,-1] is not a subarray*/



SOLUTION :

class Solution {
    public int maxProduct(int[] arr) {
        int min =arr[0];
        int max=arr[0];
        int res = arr[0];

        for(int i =1;i<arr.length;i++){
            int temp = max;
            max=Math.max(Math.max(max*arr[i],min*arr[i]),arr[i]);
            min=Math.min(Math.min(temp*arr[i],min*arr[i]),arr[i]);

            if(max>res){
                res=max;

            }
        }
        return res;
    }
}