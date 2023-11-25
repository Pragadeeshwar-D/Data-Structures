
/*1685. Sum of Absolute Differences in a Sorted Array

You are given an integer array nums sorted in non-decreasing order.

Build and return an integer array result with the same length as nums such that result[i] is equal to the summation of absolute differences between nums[i] and all the other elements in the array.

In other words, result[i] is equal to sum(|nums[i]-nums[j]|) where 0 <= j < nums.length and j != i (0-indexed).

 

Example 1:

Input: nums = [2,3,5]
Output: [4,3,5]
Explanation: Assuming the arrays are 0-indexed, then
result[0] = |2-2| + |2-3| + |2-5| = 0 + 1 + 3 = 4,
result[1] = |3-2| + |3-3| + |3-5| = 1 + 0 + 2 = 3,
result[2] = |5-2| + |5-3| + |5-5| = 3 + 2 + 0 = 5.
Example 2:

Input: nums = [1,4,6,8,10]
Output: [24,15,13,15,21]
*/


SOLUTION :

class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n = nums.size();

    // Calculate the prefix and suffix sums
    std::vector<int> prefixSum(n, 0);
    std::vector<int> suffixSum(n, 0);

    prefixSum[0] = nums[0];
    suffixSum[n - 1] = nums[n - 1];

    for (int i = 1; i < n; ++i) {
        prefixSum[i] = prefixSum[i - 1] + nums[i];
        suffixSum[n - 1 - i] = suffixSum[n - i] + nums[n - 1 - i];
    }

    // Calculate the result array
    std::vector<int> result(n, 0);

    for (int i = 0; i < n; ++i) {
        if (i == 0) {
            result[i] = suffixSum[1] - (n - 1) * nums[0];
        } else if (i == n - 1) {
            result[i] = (n - 1) * nums[n - 1] - prefixSum[n - 2];
        } else {
            result[i] = i * nums[i] - prefixSum[i - 1] + suffixSum[i + 1] - (n - 1 - i) * nums[i];
        }
    }

    return result;

    }
};