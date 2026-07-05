class Solution {
public:
    void reverseString(vector<char>& num) {
        int n=num.size();
        int s=0;
        int e=n-1;
        while(s<e){
            swap(num[s++],num[e--]);
        }
    }
};