class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        unordered_map<int, int> mp;

        int xr = 0;
        long cnt = 0;

        mp[0] = 1;

        for (int i = 0; i < arr.size(); i++) {
            xr ^= arr[i];

            int x = xr ^ k;

            if (mp.find(x) != mp.end()) {
                cnt += mp[x];
            }

            mp[xr]++;
        }

        return cnt;
    }
};
