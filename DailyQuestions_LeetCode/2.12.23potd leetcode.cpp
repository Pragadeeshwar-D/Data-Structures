/*1160. Find Words That Can Be Formed by Characters

You are given an array of strings words and a string chars.

A string is good if it can be formed by characters from chars (each character can only be used once).

Return the sum of lengths of all good strings in words.

 

Example 1:

Input: words = ["cat","bt","hat","tree"], chars = "atach"
Output: 6
Explanation: The strings that can be formed are "cat" and "hat" so the answer is 3 + 3 = 6.
Example 2:

Input: words = ["hello","world","leetcode"], chars = "welldonehoneyr"
Output: 10
Explanation: The strings that can be formed are "hello" and "world" so the answer is 5 + 5 = 10.*/


SOLUTION :

class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int>c(26,0);
        int ans = 0;
        for(char f  : chars)
        {
            c[f-'a']++;
        }
        for(string ff:words)
        {
            vector<int>count = c;
            int flag  = 0;
            for(char i : ff )
            {
                if(!count[i - 'a'])
                {
                    flag = 1;
                    break;
                }
                count[i-'a']--;
            }
            
            if(flag ==0)
            {
                 ans+=  ff.size();
            }

        }
        return ans;
    }
};