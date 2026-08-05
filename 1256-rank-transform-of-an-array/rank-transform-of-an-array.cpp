class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        map<int,int>mp;

        for(int x:arr){
            mp[x];   //store the elements in map and they automatically gets sorted
        }
        int rank=1;
        for(auto &it:mp){
            it.second=rank;
            rank++;
        }
        //lastly
        for(int &x:arr){
            x=mp[x];
        }
        return arr;
    }
};