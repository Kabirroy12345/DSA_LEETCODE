class Solution {
public:
    bool isUgly(int n) {
        if(n==1){
            return true;
        }
        if(n==0){
            return false;
        }
        while(n%2==0){
            n=n/2; //baar baar 2 se devide karna
        }
        while(n%3==0){
            n=n/3; //baar baar 3 se karna
        }
        while(n%5==0){
            n=n/5; //baar baar 5 se karna 
        }
        return n==1;
    }
};