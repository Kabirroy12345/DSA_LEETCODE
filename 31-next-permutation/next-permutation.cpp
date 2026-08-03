class Solution {
public:
    void nextPermutation(vector<int>& nums) {
           int n=nums.size();
    //find the break point usually if u see from behind there will be an ascending order like 4 3 2 1 but say if we have 1 4 3 2 1 then breakpoint is btw 1 and 4
    //so point is where nums[i]<nums[i+1]
    int index=-1;

    for(int i=n-2;i>=0;i--){
        if(nums[i]<nums[i+1]){
            index=i;
            break;
        }
    }
    //if index==-1 this means that already we are at the last permutation
    if(index==-1){
        reverse(nums.begin(),nums.end());
        return;
    }
    //if not find the smallest element from behind and swap it with the greatest which is destroying the permutation
    for(int i=n-1;i>index;i--){
        if(nums[i]>nums[index]){
            swap(nums[i],nums[index]); 
            break;
        }

    }
    reverse(nums.begin()+index+1,nums.end()); 
    }
};