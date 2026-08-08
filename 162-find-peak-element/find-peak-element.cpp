class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        int n=arr.size();
        int s=0;
        int e=n-1;
        int ans=-1;

        while(s<=e){
            if(s==e){
                ans=s;
                break;
            }
            int mid=(s+e)/2;
            if(arr[mid]<arr[mid+1]){
                s=mid+1;
            }
            else{
                ans=mid;
                e=mid;
            }
        }
        return ans;
    }
};