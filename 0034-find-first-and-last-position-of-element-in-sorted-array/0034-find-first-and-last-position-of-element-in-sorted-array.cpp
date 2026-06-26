class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target) {
        int n = arr.size();

        int first = -1, last = -1;

        // find first
        int low = 0, high = n-1;

        while(low <= high){
            int mid = low + (high-low)/2;

            if(arr[mid] == target){
                first = mid;
                high = mid - 1;   
            }
            else if(arr[mid] < target){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }


        // find last
        low = 0;
        high = n-1;

        while(low <= high){
            int mid = low + (high-low)/2;

            if(arr[mid] == target){
                last = mid;
                low = mid + 1;    
            }
            else if(arr[mid] < target){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }

        return {first, last};
    }
};