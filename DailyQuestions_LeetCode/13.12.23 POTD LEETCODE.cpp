/*1582. Special Positions in a Binary Matrix

Given an m x n binary matrix mat, return the number of special positions in mat.

A position (i, j) is called special if mat[i][j] == 1 and all other elements in row i and column j are 0 (rows and columns are 0-indexed).

 

Example 1:


Input: mat = [[1,0,0],[0,0,1],[1,0,0]]
Output: 1
Explanation: (1, 2) is a special position because mat[1][2] == 1 and all other elements in row 1 and column 2 are 0.
Example 2:


Input: mat = [[1,0,0],[0,1,0],[0,0,1]]
Output: 3
Explanation: (0, 0), (1, 1) and (2, 2) are special positions.*/



OUTPUT :


class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int m  = mat.size();
        int n = mat[0].size();
        vector<int>rs(m);
        vector<int>cs(n);
        for(int i=0;i<m;i++)
        {
            for(int j = 0;j<n;j++)
            {
                rs[i] += mat[i][j];
            }
        }
        for(int j=0;j<n;j++)
        {
            for(int i= 0;i<m;i++)
            {
                cs[j] += mat[i][j];
            }
        }
        int ans = 0;
        for(int i=0;i<m;i++)
        {
            for(int j = 0;j<n;j++)
            {
                if(mat[i][j] == 1 && rs[i]==1 && cs[j]==1)
                {
                    ans++;
                }
            }
        }
        return ans;
    }
};