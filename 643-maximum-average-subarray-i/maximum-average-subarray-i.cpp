class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        //calculate the first sum
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        int max_sum=sum;
        //ab window slide karo
        for(int i=k;i<nums.size();i++){
            sum-=nums[i-k];  //pehla element
            sum+=nums[i];
            max_sum=max(max_sum,sum);
        }
        //max sum ka hi max average hoga
        return (double)max_sum / k;
    }
};