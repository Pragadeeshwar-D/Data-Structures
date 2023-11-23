/*Problem Statement

Ninja is shifting to a new place named NinjaGram. To take admission to the new school, the teacher gives him a sentence

and asks him to check whether the sentence is a pangram. A word or a sentence is called a pangram if it contains all the English alphabet letters.

Since Ninja is new to programming, he doesn't have much experience; he asks you to solve the problem. Can you help Ninja figure out whether the sentence is a pangram?

Sample Input 1:

2

12

toosmallword

35

TheQuickBrownFoxJumps OverTheLadyDog

Sample Output 1:

NO

YES


Sample Input 2:

2

16

CodingNinjas

10

CodeStudio

Sample Output 2:

NO

NO
*/


SOLUTION :


#include <bits/stdc++.h> 
bool ninjaGram(string str)
{
   bool alphabetPresent[26] = {false};
    for (char ch : str) {
        ch = tolower(ch);
        if ('a' <= ch && ch <= 'z') {
            alphabetPresent[ch - 'a'] = true;
        }
    }
    for (bool present : alphabetPresent) {
        if (!present) {
            return false;
        }
    }

    return true;

}