#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
private:
    bool isFrequencySame(const vector<int>& freq1, const vector<int>& freq2) {
        for (int i = 0; i < 26; i++) {
            if (freq1[i] != freq2[i]) {
                return false;
            }
        }
        return true;
    }

public:
    bool checkInclusion(string s1, string s2) {
        vector<int> frequency(26, 0);
        for (int i = 0; i < s1.length(); i++) {
            frequency[s1[i] - 'a']++;
        }

        int windowSize = s1.length();

        for (int i = 0; i < s2.length(); i++) {
            int windowIndex = 0;
            int idx = i;
            vector<int> windowFrequency(26, 0);

            while (windowIndex < windowSize && idx < s2.length()) {
                windowFrequency[s2[idx] - 'a']++;
                windowIndex++;
                idx++;
            }

            if (isFrequencySame(frequency, windowFrequency)) {
                return true;
            }
        }

        return false;
    }
};