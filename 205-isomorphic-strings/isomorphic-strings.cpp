class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int Smap[256]={0}; //Hash map 1
        int Tmap[256]={0}; //Hash map 2

        for(int i=0;i<s.length();i++){
            //what if mapping dindt occur and both are new
            if(Smap[s[i]]==0&&Tmap[t[i]]==0){
                Smap[s[i]]=t[i]+1; 
                //mark kardenge just taking care 0 na ho s isiliye +1
                Tmap[t[i]]=s[i]+1; 
            }
            //already mapped 
            else{
                if(Smap[s[i]]!=t[i]+1||Tmap[t[i]]!=s[i]+1){
                    return false;
                } 
            }
        }  
        return true;
    }
};