class Solution {
public:
    string defangIPaddr(string address) {
        string op="";
        vector<char>ans;
        for(int i=0;i<address.length();i++){
            ans.push_back(address[i]);
        }
        for(int i=0;i<ans.size();i++){
            if(ans[i]=='.'){    //agar . aata fir op mai add karo yeh
                op+="[.]";
            }
            else{
                op.push_back(ans[i]);  //seedha koi aur bhi kuch aae toh push kardo
            }
        }
        return op;
    }
};