class Solution {
public:
    int search(vector<int>& arr, int target) {
        int n= arr.size();
        int low=0; int high= n-1;
        int mid;

        while(low <= high){
            int mid = (low + high) / 2;

            if(target< arr[mid]){
                high = mid-1;
            }
            else if(target> arr[mid]){
                low = mid+1;
            }
            else{
                return mid;
            }
            
            
        }
        return -1;
    }
};