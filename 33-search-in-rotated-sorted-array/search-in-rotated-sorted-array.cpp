class Solution {
public:
    int search(vector<int>& arr, int target) {
    int n=arr.size();
    int s=0;
    int e=n-1;

    while(s<=e){
        int mid=(s+e)/2;

        if(arr[mid]==target){
            return mid;
        }
        //if left is sorted
        if(arr[s]<=arr[mid]){
            if(arr[s]<=target && target<arr[mid]){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        //if right side is sorted
        else{                                                         //basically if(arr[mid]<=arr[e])
            if(arr[mid]<target && target<=arr[e]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
    }
    return -1;
}
};