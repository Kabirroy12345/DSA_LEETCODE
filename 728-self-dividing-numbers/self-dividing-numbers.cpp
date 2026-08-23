class Solution {
public:
    vector<int>digit(int n){
        vector<int>dig;
        while(n>0){
            int digit=n%10;
            dig.push_back(digit);
            n=n/10;
        }
        return dig;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>final;
        while(left<=right){
            vector<int>ans=digit(left);
            int s=ans.size();
            bool valid=true;
            for(int i=0;i<s;i++){
                if(ans[i]==0){
                    valid=false;
                    break;
                }
                if(left%ans[i]!=0){
                    valid=false;
                    break;
                }
            }
            if(valid){
                final.push_back(left);
            }
            left++;
       }
       return final;
    }
};