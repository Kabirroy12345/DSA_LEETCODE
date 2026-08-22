class Solution {
public:
    bool checkDivisibility(int n) {
        if(n>=1&&n<10){
            return false;
        }
        int sum=0;
        int prod=1;
        int num1=n;
        int num2=n;
        
        while(num1>0){
            int digit1=num1%10;
            sum+=digit1;
            num1/=10;
        }
        while(num2>0){
            int digit2=num2%10;
            prod*=digit2;
            num2/=10;
        }
        int ans=sum+prod;
        if(ans>=n){
            if(ans%n==0){
                return true;
            }
            else{
                return false;
            }
        }
        if(ans<n){
            if(n%ans==0){
                return true;
            }
            else{
                return false;
            }
        }
        return false;
    }
};