class Solution {
public:
    int maximumProduct(vector<int>& arr) {
        int n=arr.size();
        sort(arr.begin(),arr.end(),greater<>());

        int option1=arr[0]*arr[1]*arr[2];
        int option2=arr[0]*arr[n-1]*arr[n-2];
        return max(option1,option2);
    }
};