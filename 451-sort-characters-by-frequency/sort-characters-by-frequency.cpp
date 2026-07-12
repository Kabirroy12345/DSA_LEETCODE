class Solution {
private:
    // Comparator function
    // Sort by frequency in descending order.
    // If frequencies are equal, sort by ASCII value.
    static bool comparator(pair<int, char> p1, pair<int, char> p2) {

        if (p1.first > p2.first)
            return true;

        if (p1.first < p2.first)
            return false;

        return p1.second < p2.second;
    }

public:
    string frequencySort(string s) {

        // Store frequency for all ASCII characters
        pair<int, char> freq[128];

        // Initialize frequency = 0 and character
        for (int i = 0; i < 128; i++) {
            freq[i] = {0, char(i)};
        }

        // Count frequency
        for (char ch : s) {
            freq[(int)ch].first++;
        }

        // Sort according to frequency
        sort(freq, freq + 128, comparator);

        // Store answer
        string ans = "";

        // Add each character frequency number of times
        for (int i = 0; i < 128; i++) {

            while (freq[i].first > 0) {
                ans += freq[i].second;
                freq[i].first--;
            }
        }

        return ans;
    }
};