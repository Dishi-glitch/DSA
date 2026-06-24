class Solution {
public:
    double myPow(double x, int n) {
        long long N = n;   // handle INT_MIN
        if (N < 0) {
            x = 1 / x;
            N = -N;
        }

        double ans = 1;

        while (N > 0) {
            if (N % 2 == 1) { //odd
                ans = ans * x;
                N -=1;
            }
            else{
            x = x * x;
            N = N / 2;
            }
        }

        return ans;
    }
};