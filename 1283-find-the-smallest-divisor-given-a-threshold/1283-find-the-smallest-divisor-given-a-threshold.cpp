class Solution {
public:
    
    int possible(int divisor, vector<int>& nums){
        int sum = 0;
        int n = nums.size(); 
        
        for(int i = 0; i < n; i++){
            sum += ceil((double)nums[i] / divisor);
        }
        
        return sum;
    }


    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int low = 1; 
        int high = *max_element(nums.begin(), nums.end());

        if(n > threshold) return -1;

        while(low <= high){
            int mid = (low + high) / 2;

            if(possible(mid, nums) <= threshold) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return low;
    }
};