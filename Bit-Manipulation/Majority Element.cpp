class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int temp = 0, maxvalue = 0, ans = nums[0];
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i - 1] == nums[i]) {
                temp++;
                if(temp > maxvalue) {
                    maxvalue = temp;
                    ans = nums[i];
                }
            } else {
                temp = 0;
            }
        }
        return ans;
    }
};
