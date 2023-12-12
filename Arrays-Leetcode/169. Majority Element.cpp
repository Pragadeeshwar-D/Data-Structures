/*169. Majority Element

Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

 

Example 1:

Input: nums = [3,2,3]
Output: 3
Example 2:

Input: nums = [2,2,1,1,1,2,2]
Output: 2*/


SOLUTION :


class Solution {
public:
    int majorityElement(vector<int>& arr) {
        map<int,int>mp;
        int ans = 0;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        for(auto x : mp)
        {
            if(x.second > arr.size()/2)
            {
                ans = x.first;
            }
        }
        return ans;
    }
};