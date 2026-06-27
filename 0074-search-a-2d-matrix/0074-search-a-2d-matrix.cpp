class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        // ARRAY SOLUTION
        /*int m = mat.size();
        int n = mat[0].size();

        int i = 0;
        int j = n - 1;

        while(i < m && j >= 0) {

            if(mat[i][j] == target) {
                return true;
            }
            else if(mat[i][j] > target) {
                j--;
            }
            else {
                i++;
            }
        } */


        //BINARY SOLUTION (2d to 1d)
        int n= mat.size();
        int m= mat[0].size();
        int low=0; int high= n*m-1;
        while(low <= high) {
            int mid= (low+high)/2;
            int row= mid/m;
            int col= mid%m;

            if(mat[row][col] == target) return true;
            else if (mat[row][col] < target) low=mid+1;
            else high= mid-1;
        }
        return false;
    }
};