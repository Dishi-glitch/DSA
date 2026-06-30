class Solution {
public:

    bool possible(int capacity, vector<int>& weights, int days){
        int sum = 0;
        int cnt = 1;

        for(int i = 0; i < weights.size(); i++){
            
            if(sum + weights[i] <= capacity){
                sum += weights[i];
            }
            else{
                cnt++;
                sum = weights[i];
            }
        }

        return cnt <= days;
    }


    int shipWithinDays(vector<int>& weights, int days) {

        int n = weights.size();

        int low = *max_element(weights.begin(), weights.end());
        int high = 0;

        for(int i = 0; i < n; i++){
            high += weights[i];
        }

        while(low <= high){
            int mid = (low + high) / 2;

            if(possible(mid, weights, days)){
                high = mid - 1;  
            }
            else{
                low = mid + 1;    
            }
        }
        return low;
    }
};