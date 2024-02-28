/*
Rotate Matrix: Given an image represented by an NxN matrix, where each pixel in the image is 4
bytes, write a method to rotate the image by 90 degrees. Can you do this in place?

LC - 48. Rotate Image
*/

//O(n^2), O(1)
class Solution {
public:

    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i=0; i<n; i++) {
            for(int j=0; j<=i; j++) {
                int t = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = t;
            }
        }

        for(int i=0; i<n; i++)
            reverse(matrix[i].begin(), matrix[i].end());
    }
};