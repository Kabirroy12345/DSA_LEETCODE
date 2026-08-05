class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size(); //number of rows
    int m=matrix[0].size(); //number of columns
    int left=0;
    int top=0;
    int right=m-1;   //last column
    int bottom=n-1;  //last row

    vector<int>ans;  //store the spiral array

    while(left<=right&&top<=bottom){
        //Iteration 1
        for(int i=left;i<=right;i++){
            ans.push_back(matrix[top][i]);
        }
        top++;

        //Iteration 2
        for(int i=top;i<=bottom;i++){
            ans.push_back(matrix[i][right]);
        }
        right--;

        //Iteration 3
        if(top <= bottom){
        for(int i=right;i>=left;i--){
            ans.push_back(matrix[bottom][i]);
        }
        bottom--;
        }
        //Iteration 4
        if(left<=right){
        for(int i=bottom;i>=top;i--){
            ans.push_back(matrix[i][left]);
        }
        left++;
    }
    }
    return ans;
    }
};