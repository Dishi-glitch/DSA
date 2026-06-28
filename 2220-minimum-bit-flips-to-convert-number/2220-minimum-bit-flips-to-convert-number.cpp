class Solution {
public:
    int minBitFlips(int start, int goal) {
        int ans= start ^ goal;
        int cnt = 0;

        for( int i=0; i< 31; i++){ 
            //31 cuz it is mentioned integer and integer has 32 bits
            if( ans& (1 << i)){
                cnt++;
            }
        }
        return cnt;
    }
};