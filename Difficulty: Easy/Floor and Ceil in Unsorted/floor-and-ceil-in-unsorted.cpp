class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        int floor = -1;
        int ceil = -1;

        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] <= x) {
                if (floor == -1 || arr[i] > floor) {
                    floor = arr[i];
                }
            }

            if (arr[i] >= x) {
                if (ceil == -1 || arr[i] < ceil) {
                    ceil = arr[i];
                }
            }
        }

        return {floor, ceil};
    }
};
