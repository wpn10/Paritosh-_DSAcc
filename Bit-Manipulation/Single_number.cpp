class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x=nums[0];
        for(auto it=nums.begin()+1;it<nums.end();it++){
            x^=*it;
        }
        return x;
    }
};
