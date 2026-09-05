class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n=candyType.size();
        int candies=n/2; //number of candies to eat;
        set<int>s;
        for(int x:candyType){
            s.insert(x);
        }
        if(s.size()<candies){
            return s.size();
        }
        else{
            return candies;
        }
    }
};