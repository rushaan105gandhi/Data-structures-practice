#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {


        //variables initialization
        vector<int> ans;
        int row = matrix.size();
        int col = matrix[0].size();
        int total = row * col;
        int count = 0;

        //index initialization

        int start_row = 0;
        int start_col = 0;
        int end_row = row - 1;
        int end_col = col - 1;

        //start the loop

        while (count < total)
        {

            //print starting row

            for(int i = start_col; count < total && i <=end_col; i++)
            {
                ans.push_back(matrix[start_row][i]);
                count++;
            }

            start_row++;

            //printing ending column

            for(int i = start_row; count < total && i <=end_row; i++)
            {
                ans.push_back(matrix[i][end_col]);
                count++;
            }

            end_col--;

            //printing ending row

            for(int i = end_col; count < total && i >=start_col; i--)
            {
                ans.push_back(matrix[end_row][i]);
                count++;
            }

            end_row--;

            //printing starting column

            for(int i = end_row; count < total && i >= start_row; i--)
            {
                ans.push_back(matrix[i][start_col]);
                count++;
            }

            start_col++;
        }
        return ans;
    }
};