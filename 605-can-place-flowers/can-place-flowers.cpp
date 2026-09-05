class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int size=flowerbed.size();
        int i=0;
        int count=0;
        while(i<size){
            if(flowerbed[i]==0&&(i==0||flowerbed[i-1]==0)&&(i==size-1||flowerbed[i+1]==0)){
                flowerbed[i]=1;
                count++;
            }
            i++;
        }
        if(count>=n){
            return true;
        }
        return false;
    }
};