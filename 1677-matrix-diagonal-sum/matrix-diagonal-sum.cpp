class Solution {
public:
int diagonalSum(vector<vector<int>>&mat){
    int rowsize=mat.size();
    int colsize=mat[0].size();
    
    //Sum of primary digonal
    int sum=0;
    for(int row=0;row<rowsize;row++){
        sum+=mat[row][row];
    }
    //Secondary diagonal
    for(int row=0;row<rowsize;row++){
        sum+=mat[row][rowsize-row-1];
    }
    //If odd remove 
    if(rowsize%2!=0){
        sum-=mat[rowsize/2][rowsize/2];
    }
    return sum;
}
};