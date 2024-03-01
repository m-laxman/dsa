/*
    Zero Matrix: Write an algorithm such that if an element in an MxN matrix is 0, its entire row and
    column are set to 0. 

    LC - 73. Set Matrix Zeroes
*/

//O(n^2), O(1)
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        bool col=false;
        int n=matrix.size(), m=matrix[0].size();
        for(int i=0; i<n; i++) {
            if(matrix[i][0] == 0)
                col=true;
            for(int j=1; j<m; j++) {
                if(matrix[i][j]==0) {
                    matrix[0][j]=0;
                    matrix[i][0]=0;
                }
            }
        }

        for(int i=n-1; i>=0; i--) {
            for(int j=m-1; j>=1; j--) {
                    if(matrix[i][0]==0 || matrix[0][j]==0) {
                        matrix[i][j]=0;
                    }
            }
            if(col==true) {
                matrix[i][0] = 0;
            }
        }
    }
};