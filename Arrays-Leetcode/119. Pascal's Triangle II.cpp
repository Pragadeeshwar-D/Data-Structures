/*119. Pascal's Triangle II

Given an integer rowIndex, return the rowIndexth (0-indexed) row of the Pascal's triangle.
In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:


Example 1:

Input: rowIndex = 3
Output: [1,3,3,1]
Example 2:

Input: rowIndex = 0
Output: [1]
Example 3:

Input: rowIndex = 1
Output: [1,1]*/


SOLUTION :



class Solution {
public:
    vector<int> getRow(int rowIndex) {
       vector<int>v(rowIndex+1,1);
       vector<int>result;
       for(int i=0;i<rowIndex;++i)
       {
           for(int j=i;j>0;--j)
           {
               v[j] += v[j-1];
           }
       }
       return v;

    }
};