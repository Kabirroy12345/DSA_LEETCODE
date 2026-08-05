class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
    int original_rowsize=matrix.size();   
    int original_colsize=matrix[0].size();

    //Just Swap the sizes
    int transpose_rowsize=original_colsize;
    int transpose_colsize=original_rowsize;

    //Create a new empty matrix with 0 filled
    vector<vector<int>>transpose(transpose_rowsize,vector<int>(transpose_colsize,0));

    //Just switch [i][j]--->[j][i]
    for(int i=0;i<transpose_rowsize;i++){
        for(int j=0;j<transpose_colsize;j++){
            transpose[i][j]=matrix[j][i];
        }
    }
    return transpose;
    }
};