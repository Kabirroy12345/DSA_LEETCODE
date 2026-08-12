class Solution {
public:
    //Total Hours
    long long total_hours(vector<int>&piles,int hourly){
        long long hours=0;
        for(int pile:piles){
            hours+=ceil((double)pile/(double)hourly);
        }
        return hours;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int s=1;   //minimum speed 
        int e=*max_element(piles.begin(), piles.end());

        while(s<=e){
            int mid=(s+e)/2;
            long long hours = total_hours(piles, mid);

        if (hours <= h) {
            e = mid - 1;
        }
        else {

            s = mid + 1;
        }
        }
            return s;

    }
};