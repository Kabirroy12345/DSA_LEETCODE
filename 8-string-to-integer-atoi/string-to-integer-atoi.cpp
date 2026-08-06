class Solution {
public:
    int myAtoi(string s) {
        int n=s.length();
        int sign=1;

        int i=0;

        while(i<n&&s[i]==' '){
            i++;
        }
        if(i<n&&(s[i]=='+'||s[i]=='-')){
            if(s[i]=='-'){
                sign=-1;
            }
            i++;
        }
        long long num=0;

        while(i<n&&isdigit(s[i])){
            int digit=s[i]-'0';   //58-48=5  so char 5 gets converted to int 5
            num=num*10+digit;

            if(sign*num>INT_MAX){
                return INT_MAX;
            }
            if(sign*num<INT_MIN){
                return INT_MIN;
            }
            i++;
        }
        return sign*num;
    }
};