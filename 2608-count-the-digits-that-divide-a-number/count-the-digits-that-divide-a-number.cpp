class Solution {
public:
    vector<int>digit(int n){
        vector<int>digits;
        while(n>0){
            int digit=n%10;
            digits.push_back(digit);
            n=n/10;
        }
        return digits;

    }
    int countDigits(int num) {
        vector<int>ans=digit(num);
        int count=0;
        for(int &x:ans){
            if(num%x==0){
                count++;
            }
        }
        return count;
    }
};