class Solution {
public:
    int firstUniqChar(string st) {

        // Store the length of the string
        int n = st.length();

        // Frequency array to store count of each character
        int freq[26] = {0};

        // -----------------------------
        // Step 1: Count frequency
        // -----------------------------
        for (int i = 0; i < n; i++) {
            freq[st[i] - 'a']++;
        }

        // -----------------------------
        // Step 2: Find first unique character
        // -----------------------------
        for (int i = 0; i < n; i++) {

            // If frequency is 1, return its index
            if (freq[st[i] - 'a'] == 1) {
                return i;
            }
        }

        // No unique character found
        return -1;
    }
};