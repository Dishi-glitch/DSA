class Solution {
public:
    int majorityElement(vector<int>& arr) {

        int cnt = 0;
        int el = 0;

        // Finding candidate
        for(int i = 0; i < arr.size(); i++) {

            if(cnt == 0) {
                cnt = 1;
                el = arr[i];
            }
            else if(el == arr[i]) {
                cnt++;
            }
            else {
                cnt--;
            }
        }

        // Checking candidate
        int cnt1 = 0;
        for(int i = 0; i < arr.size(); i++) {
            if(el == arr[i]) {
                cnt1++;
            }
        }

        if(cnt1 > arr.size()/2) {
            return el;
        }

        return -1;
    }
};