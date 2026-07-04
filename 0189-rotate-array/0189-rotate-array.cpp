class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        int n = nums.size();

       k = k % n; // Handle cases where k is greater than array size

        // reverse whole array
        reverse(nums.begin(), nums.end());

        // reverse first k elements
        reverse(nums.begin(), nums.begin() + k);

        // reverse remaining elements
        reverse(nums.begin() + k, nums.end());
    }
};
