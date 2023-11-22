/*
coding ninjas - problem of the day
Problem Statement

You are given an array 'ARR' consisting of 'N' positive numbers and sorted in non-decreasing order, and your task is to find the smallest positive integer value that cannot be represented as a sum of elements of any proper subset of the given array.

An array 'B' is a subset of another array 'A' if each element of 'B' is present in 'A.

For Example:

For the given input array [1, 1, 3],

1 can be represented as the sum of elements of the subset [1],

2 can be represented as the sum of elements of a subset [1, 1],

3 can be represented as the sum of elements of a subset [3],

4 can be represented as the sum of elements of a subset [1, 3],

5 can be represented as the sum of elements of a subset [1, 1, 3]

So, the smallest positive integer value that cannot be represented as a sum of elements of any subset of a given array is 6.

Sample Input 1:
2
4
1 2 3 4
2
1 3
Sample Output 1:
11
2

Sample Input 2:
2
4
1 1 1 1
6
1 2 6 10 11 15
Sample Output 2:
5
4*/

Solution :
#include <bits/stdc++.h> 
int findSmallestInteger(vector<int> arr)
{
    int smallest_sum = 1;

    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] <= smallest_sum) {
            smallest_sum += arr[i];
        } else {
            break;
        }
    }

    return smallest_sum;
}