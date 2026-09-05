class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    sort(nums1.begin(),nums1.end());
    sort(nums2.begin(),nums2.end());
    int n=nums1.size();
    int m=nums2.size();
    int i=0;
    int j=0;
    vector<int>temp;
    while(i<n&&j<m){
        if(nums1[i]<nums2[j]){
            i++;
        }
        else if(nums1[i]>nums2[j]){
            j++;
        }
        else{
            temp.push_back(nums1[i]);
            i++;
            j++;
        }
    }
    set<int>s;
    for(int x:temp){
        s.insert(x);
    }
    vector<int>temp2;
    for(int x:s){
        temp2.push_back(x);
    }
    return temp2;
    }
};