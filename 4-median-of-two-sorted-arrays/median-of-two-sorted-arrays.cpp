class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>final;
        int n=nums1.size();
        int m=nums2.size();
        int i=0;
        int j=0;
        double median=0;

        while(i<n&&j<m){
            if(nums1[i]<=nums2[j]){
                final.push_back(nums1[i]);
                i++;
            }
            else{
                final.push_back(nums2[j]);
                j++;
            }
        }
        while(i<n){
            final.push_back(nums1[i]);
            i++;
        }
        while(j<m){
            final.push_back(nums2[j]);
            j++;
        }
        int idx=final.size();

        if(final.size()%2!=0){
            median = final[idx / 2];
        }
        else{
            median = (final[idx / 2] + final[idx / 2 - 1]) / 2.0;
    }
        return median;
}

};