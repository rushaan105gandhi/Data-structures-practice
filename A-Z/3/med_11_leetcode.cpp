/*
    Rotate the matrix by 90 degree LeetCode: https://leetcode.com/problems/rotate-image/description/

    Brute Force Solution using extra matrix:

    1  2  3                7  4  1
    4  5  6     --->       8  5  2 
    7  8  9                9  6  9

    matrix[row][col]  ->  ans[row][col]

                [i][j]->[j][n-i-1]
                [0][0]->[0][3]
                [0][1]->[1][3]
                [0][2]->[2][3]

                [1][0]->[0][2]
                [1][1]->[1][2]
                [1][2]->[2][2]

    Complexity Analysis:
        Time Complexity: O(N^2)
        Space Complexity: O(N^2)

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
			int n = matrix.size();
        vector<vector<int>> ans(n, vector<int>(n,0));

				for(int i = 0; i < n; i++)
				{
					for(int j = 0; j<n; j++)
					{
						ans[j][n-i-1] = matrix[i][j];
					}
				}
				matrix = ans;
    }
};
*/

/*
    Optimal Solution:
        1. Transpose the matrix
        2. Reverse Every Row
*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
		int n = matrix.size();
        //Transposing Matrix
        for(int i = 0; i<n-1; i++)
		{
			for(int j = i+1; j<n; j++)
			{
				swap(matrix[i][j], matrix[j][i]);
			}
		}
        //Reversing Each Row
		for(int i = 0; i<n; i++)
		{
			reverse(matrix[i].begin(), matrix[i].end());
		}
    }
};