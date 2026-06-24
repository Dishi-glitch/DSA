class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        unordered_set<int> hash;

        for(int i = 0; i < nums.size(); i++) {

            if(hash.find(nums[i]) != hash.end()) { //transverse through the hash array
                return nums[i];   // duplicate found
            }

            hash.insert(nums[i]);
        }

        return -1;
    }
};