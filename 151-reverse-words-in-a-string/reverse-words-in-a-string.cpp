class Solution {
public:
    string reverseWords(string s) {
        vector<string>words;
        string word;
        for(char ch:s){
            if(ch!=' '){ 
                //iterate for each word
                word+=ch;
            }
            else{ //jaise hi space aaya
                if(!word.empty()){
                    words.push_back(word);
                    word.clear();  
                }
            }
        }
        if(!word.empty()){
            words.push_back(word);
        }
        reverse(words.begin(),words.end());

        string ans;
        //array traversal
        for(int i=0;i<words.size();i++){
            ans+=words[i];
            if (i != words.size() - 1) {
                ans += " ";
            }       
        }
        return ans;
    }
};