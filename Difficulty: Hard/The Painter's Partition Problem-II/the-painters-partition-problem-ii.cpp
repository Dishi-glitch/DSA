class Solution {
public:
    bool isPossible(vector<int>& boards, int k, int mid) {
        int painters = 1;
        int currSum = 0;

        for (int i = 0; i < boards.size(); i++) {
            if (currSum + boards[i] <= mid) {
                currSum += boards[i];
            } else {
                painters++;
                currSum = boards[i];

                if (painters > k)
                    return false;
            }
        }

        return true;
    }

    int minTime(vector<int>& boards, int k) {
        int low = *max_element(boards.begin(), boards.end());
        int high = 0;

        for (int board : boards)
            high += board;

        int ans = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (isPossible(boards, k, mid)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return ans;
    }
};