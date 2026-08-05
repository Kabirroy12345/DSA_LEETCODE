class Solution {
public:
    vector<int> frequencySort(vector<int>& arr) {
    int n =arr.size();
    unordered_map<int,int>mp;
    for(int x:arr){
        mp[x]++;
    }
    //custom comparator for sorting frequencies
    auto cmp=[&](int a,int b){
        if(mp[a]!=mp[b]){
            return mp[a]>mp[b];
        }
        return a<b;
    };
    sort(arr.begin(),arr.end(),cmp);
    reverse(arr.begin(),arr.end());
    return arr;
    }
};