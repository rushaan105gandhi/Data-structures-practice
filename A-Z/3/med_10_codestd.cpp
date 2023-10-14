/*
    Set Matrix Zeroes:
    https://www.codingninjas.com/studio/problems/zero-matrix_1171153?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems
    
    Brute Force Solution:

     Original            zero found,          wherever found -1
      Matrix           marked row and col       marked as 0
                            as -1

    1  1  1  1         1  -1  -1   1           1  0  0  1
    1  0  0  1  ----> -1   0   0  -1 --------> 0  0  0  0
    1  0  1  1        -1   0  -1  -1           0  0  0  0
    1  1  1  1         1  -1  -1   1           1  0  0  1

    Set all nonZero elements as -1 in the row i

    markRow(int i)
    {
        for(int j = 0; j<m;j++)
        {
            if(arr[i][j] != 0)
            {
                arr[i][j] = -1;
            }
        }
    }

    Set all nonZero elements as -1 in the col j
    markCol(int j)
    {
        for(int i = 0; i<n;i++)
        {
            if(arr[i][j] != 0)
            {
                arr[i][j] = -1;
            }
        }
    }

    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m;j++)
        {
            if (arr[i][j] == 0)
            {
                markRow(i);
                markCol(j);
            }
        }
    }

    Finally set all the -1 elements as 0

    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m;j++)
        {
            if (arr[i][j] == -1)
            {
                arr[i][j] = 0;
            }
        }
    }

*/

/*
    Better Solution:

    col(size m)->  0  0  0  0
    row(size n)                 
        |       0  1  1  1  1
        |       0  1  0  1  1  -
        |       0  1  1  0  1
       \/       0  1  0  0  1
       
Approach (Using two extra arrays):

The steps are as follows:

1. First, we will declare two arrays: a row array of size N and a col array of size M and both are initialized with 0.
2. Then, we will use two loops(nested loops) to traverse all the cells of the matrix.
3. If any cell (i,j) contains the value 0, we will mark ith index of row array i.e. row[i] and jth index of col array col[j] as 1. It signifies that all the elements in the ith row and jth column will be 0 in the final matrix.
4. We will perform step 3 for every cell containing 0.
5. Finally, we will again traverse the entire matrix and we will put 0 into all the cells (i, j) for which either row[i] or col[j] is marked as 1.
Thus we will get our final matrix.
Intuition:
*/

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
	int row[n] = {0};
	int col[m] = {0};

	for(int i = 0; i<n; i++)
	{
		for(int j = 0; j<m; j++)
		{
			if(matrix[i][j] == 0)
			{
				row[i] = 1;
				col[j] = 1;
			}
		}
	}

	for(int i = 0; i<n; i++)
	{
		for(int j = 0; j<m; j++)
		{
			if(row[i] || col[j])
			{
				matrix[i][j] = 0;
			}
		}
	}
	return matrix;
}