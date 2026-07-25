class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int>map;
        for(int x:nums){
            map[x]++;
        } 
        for(int i:nums){
            if(map[i]>1){
                ans.push_back(i);
                map[i]=0;
            }
        }
        return ans;
    }
};