class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int loc=n;
        int i=0;
        while(i<n){
            if(target>nums[i]){
                i++;
            }
            else if(target<=nums[i]){
                return i;
            }

        }
        return loc;
    }
};