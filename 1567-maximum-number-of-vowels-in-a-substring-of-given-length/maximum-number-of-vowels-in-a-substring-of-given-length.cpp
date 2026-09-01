class Solution {
public:
    int maxVowels(string s, int k) {
        int vowel_count=0;
        for(int i=0;i<k;i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                vowel_count++;
            }
        }
        int max_vowel=vowel_count;
        for(int i=k;i<s.length();i++){
            if(s[i-k]=='a'||s[i-k]=='e'||s[i-k]=='i'||s[i-k]=='o'||s[i-k]=='u'){
                vowel_count--;
            }
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                vowel_count++;
            }
            max_vowel=max(max_vowel,vowel_count);
        }
        return max_vowel;
    }
};