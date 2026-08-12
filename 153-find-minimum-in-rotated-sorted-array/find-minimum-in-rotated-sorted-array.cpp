class Solution {
public:
    int findMin(vector<int>& arr) {
        int n=arr.size();
        int s=0;
        int e=n-1;

        while(s<e){
            int mid=(s+e)/2;
            if(arr[mid]>arr[e]){
                s=mid+1;  //right mai hi minimum hoga
            }
            else{
                e=mid;  //e shrink hua mid tak..mid can also be ans so..
            }
        }
        return arr[s];
    }
};