class Solution {
public:
    int mySqrt(int x) {
        int target=x;
        int s=0;
        int e=target;

        int ans=-1;

        while(s<=e){
            long long mid=(s+e)/2;
            if(mid*mid==target){
                return mid;
            }
            if(mid*mid>target){
                e=mid-1;
            }
            if(mid*mid<target){
                ans=mid;
                s=mid+1;
            }
        }
        return ans;
    }
};