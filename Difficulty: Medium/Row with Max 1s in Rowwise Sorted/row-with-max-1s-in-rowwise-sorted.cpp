class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        int n = arr.size();
        int m = arr[0].size();

        int maxOnes = 0;
        int ans = -1;

        for (int i = 0; i < n; i++) {
            int firstOne = lower_bound(arr[i].begin(), arr[i].end(), 1) - arr[i].begin();
            int ones = m - firstOne;

            if (ones > maxOnes) {
                maxOnes = ones;
                ans = i;
            }
        }

        return ans;
    }
};