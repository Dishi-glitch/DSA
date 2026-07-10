class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        long long n = arr.size();

        long long SN = (n * (n + 1)) / 2;
        long long S2N = (n * (n + 1) * (2 * n + 1)) / 6;

        long long S = 0, S2 = 0;

        for (int i = 0; i < n; i++) {
            S += arr[i];
            S2 += 1LL * arr[i] * arr[i];
        }

        long long val1 = S - SN;                 // x - y
        long long val2 = (S2 - S2N) / val1;      // x + y

        long long repeating = (val1 + val2) / 2;
        long long missing = val2 - repeating;

        return {(int)repeating, (int)missing};
    }
};