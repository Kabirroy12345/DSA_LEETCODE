class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {

        sort(arr.begin(), arr.end());

        int n = arr.size();
        vector<vector<int>> ans;

        for (int i = 0; i < n - 2; i++) {

            // Skip duplicate first elements
            if (i > 0 && arr[i] == arr[i - 1])
                continue;

            int j = i + 1;
            int k = n - 1;

            while (j < k) {

                long long sum = 1LL * arr[i] + arr[j] + arr[k];

                if (sum < 0) {
                    j++;
                }
                else if (sum > 0) {
                    k--;
                }
                else {

                    ans.push_back({arr[i], arr[j], arr[k]});

                    j++;
                    k--;

                    // Skip duplicate second elements
                    while (j < k && arr[j] == arr[j - 1])
                        j++;

                    // Skip duplicate third elements
                    while (j < k && arr[k] == arr[k + 1])
                        k--;
                }
            }
        }

        return ans;
    }
};