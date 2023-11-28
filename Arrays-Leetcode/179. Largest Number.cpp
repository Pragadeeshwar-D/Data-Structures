/*179. Largest Number

Given a list of non-negative integers nums, arrange them such that they form the largest number and return it.

Since the result may be very large, so you need to return a string instead of an integer.

 

Example 1:

Input: nums = [10,2]
Output: "210"
Example 2:

Input: nums = [3,30,34,5,9]
Output: "9534330"*/
 

SOLUTION :

class Solution {
public:
    static bool compare(string a,string b)
    {
        return a+b>b+a;
    }
    string largestNumber(vector<int>& nums) {
        vector<string>v;
        for(int i=0;i<nums.size();i++)
        {
            string y = to_string(nums[i]);
            v.push_back(y);
        }
        sort(v.begin(),v.end(),compare);
        if(v[0]=="0")
        {
            return "0";
        }
        string ax= "";
        for(string x : v)
        { 
             ax+=x;
        }
        return ax;
    }
};
