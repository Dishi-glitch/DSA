class Solution {
public:
    bool rotateString(string s, string goal) {
        sort( s.begin(), s.end());
        sort( goal.begin(), goal.end());

        return s== goal;
        
    }
};