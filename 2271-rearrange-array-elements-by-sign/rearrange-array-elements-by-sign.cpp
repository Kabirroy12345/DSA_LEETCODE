class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>pos;
        vector<int>neg;
        vector<int>temp(n);
    
        for(int x:nums){
            if(x>0){
                pos.push_back(x);
            }
            if(x<0){
                neg.push_back(x);
            }
        }

        int j=0;
        int k=0;
        int a=pos.size();
        int b=neg.size();
        while(j<a&&k<b){
            temp[2*j]=pos[j];
            temp[2*k+1]=neg[k];
            j++;
            k++;
        }
        return temp;
    }
};