class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        string ans=strs[0];
        for(int i=1;i<n;i++){
            while(strs[i].find(ans)!=0){  //find() only returns 0 the first index if the string is there 
            //so jab tak woh string find nahi karleta 
            ans.pop_back();
            }
        }
        return ans;
    }
};