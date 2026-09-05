class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string>ans;
        int i=0;
        int n=nums.size();
        while(i<n){
            int start=nums[i];
            //if we find consecutive 
            while(i+1<n&&nums[i+1]==nums[i]+1){
                i++;
            }
            //matlab i update hi nahi hua and same jagah raha
            if(start==nums[i]){
                ans.push_back(to_string(start));
            }
            else{
                ans.push_back(to_string(start)+"->"+to_string(nums[i]));
            }
            i++;
        }
        return ans;
    }
};