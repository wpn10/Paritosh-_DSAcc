class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> arr;
        for(int i=0; i<nums.size(); i++){
            arr[nums[i]]++;
        }
        auto it=arr.begin();
        while(1){
            if(it->second==1){
                return it->first;
            }
            else{
                it++;
            }
        }
    }
};
