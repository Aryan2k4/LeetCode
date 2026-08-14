class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt = 0;
        int cntmax = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                cnt++;
                cntmax = max(cntmax, cnt);
            } else {
                cnt = 0;
            }
        }

        return cntmax;
    }
};