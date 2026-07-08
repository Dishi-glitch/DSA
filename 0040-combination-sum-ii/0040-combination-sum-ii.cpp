class Solution {
public:
    void solve(int index, vector<int>& candidates, int target,
               vector<int>& temp, vector<vector<int>>& ans) {

        if (target == 0) { // target achieved
            ans.push_back(temp);
            return;
        }

        if (index == candidates.size() || target < 0) { //fully traversed still didn't achieve target
            return;
        }

        temp.push_back(candidates[index]); //take
        solve(index + 1, candidates, target - candidates[index], temp, ans); //shifts to next number
        temp.pop_back(); //for backtracking where we didn't pick

        while (index + 1 < candidates.size() &&      
        // index+1 can not exceed n and it should not be equal to index if it is its a dulpicate so skip
               candidates[index] == candidates[index + 1]) {
                index++;
        }

        solve(index + 1, candidates, target, temp, ans); //not pick so just the index increases
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {

        sort(candidates.begin(), candidates.end());

        vector<vector<int>> ans;
        vector<int> temp;

        solve(0, candidates, target, temp, ans);

        return ans;
    }
};