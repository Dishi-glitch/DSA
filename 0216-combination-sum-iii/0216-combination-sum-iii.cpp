class Solution {
public:
    void solve(int num, int k, int n, vector<int>& temp, vector<vector<int>>& ans) {
        if (k == 0 && n == 0) {
            ans.push_back(temp);
            return;
        }

        if (num > 9 || k < 0 || n < 0) {
            return;
        }

        temp.push_back(num);
        solve(num + 1, k - 1, n - num, temp, ans);
        temp.pop_back();

        solve(num + 1, k, n, temp, ans);
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> temp;

        solve(1, k, n, temp, ans);

        return ans;
    }
};