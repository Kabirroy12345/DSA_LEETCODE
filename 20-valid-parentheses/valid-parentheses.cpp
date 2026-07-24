class Solution {
public:
    bool isValid(string s) {
            stack<char>st;
    for(int i=0;i<s.length();i++){
        if(s[i]=='('||s[i]=='['||s[i]=='{'){
            st.push(s[i]);  //preserve openeing brackets
        }  
        else{   //if we get closing
            if(st.empty()){
                return false;
            }
            char ch=st.top();
            st.pop();

            if(ch=='('&&s[i]==')'||ch=='['&&s[i]==']'||ch=='{'&&s[i]=='}'){
                continue; //skip no operations
            }
            else{
                return false;
            }
        }
    }
    return st.empty();
    }
};