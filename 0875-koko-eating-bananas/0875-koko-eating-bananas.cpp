class Solution {
public:
    long long totalhrs(vector<int>& piles, int speed) {
        long long hrs = 0;

        for (int i = 0; i < piles.size(); i++) {
            // Ceiling division
            hrs += (piles[i] + speed - 1) / speed;
        }

        return hrs;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        int ans = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            long long hrs = totalhrs(piles, mid);

            if (hrs <= h) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return ans;
    }
};