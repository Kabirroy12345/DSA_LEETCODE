class Solution {
public:
    bool isalphanum(char ch) {
        // function that check each character is alphanumeric or not
        if ((ch >= '0' && ch <= '9') ||
            (tolower(ch) >= 'a' && tolower(ch) <= 'z')) {
            return true;
        } else {
            return false;
        }
    }
    bool isPalindrome(string s) {
        int st=0; //pointer start
        int end=s.length()-1; //end pointer
        while(st<end){
            if(!isalphanum(s[st])){
                st++;
                continue;
            }
            if(!isalphanum(s[end])){
                end--;
                continue;
            }
            if(tolower(s[st])!=tolower(s[end])){
                return false;
            }
            st++;
            end--;
        }           
        return true;
    }
};