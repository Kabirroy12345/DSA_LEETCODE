class Solution {
public:
    int majorityElement(vector<int>& nums) {
           int n=nums.size();
    int count=0;
    int candidate=0;
    for(int num:nums){
        if(count==0){
           candidate=num;
           count++; 
        }
        else if(num==candidate){
            count++;
        }
        else{
            count--;
        }
    }
    int majoritycount=0;
    for(int num:nums){
        if(candidate==num){
            majoritycount++;
        }
    }
    if(majoritycount>n/2){
        return candidate;
    }
    return -1; 
    }
};