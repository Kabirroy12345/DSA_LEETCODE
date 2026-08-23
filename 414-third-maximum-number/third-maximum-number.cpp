class Solution {
public:
    int thirdMax(vector<int>& nums) {

        int max = nums[0];

        for(int x : nums){
            if(x > max){
                max = x;
            }
        }

        vector<int> ans;

        for(int x : nums){
            if(x != max){
                ans.push_back(x);
            }
        }

        if(ans.empty()){
            return max;
        }

        int max2 = ans[0];

        for(int x : ans){
            if(x > max2){
                max2 = x;
            }
        }

        vector<int> ans2;

        for(int x : ans){
            if(x != max2){
                ans2.push_back(x);
            }
        }

        if(ans2.empty()){
            return max;
        }

        int max3 = ans2[0];

        for(int x : ans2){
            if(x > max3){
                max3 = x;
            }
        }

        return max3;
    }
};