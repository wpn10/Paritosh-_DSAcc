class Solution {
public:
    vector<int> decode(vector<int>& encoded) {
        vector<int> ans;
        int m = encoded.size()+1;
        int d = 0;
        if(m%4==0){
            d = m;
        }
        if(m%4==1){
            d =1;
        }
        if(m%4==2){
            d = m+1;
        }
        if(m%4==3){
            d = 0;
        }
        for(int i=1;i<m-1;i=i+2){
            d^=encoded[i];
        }
        ans.push_back(d);
        for(int i=0; i<m-1;i++){
            ans.push_back(encoded[i]^ans[i]);
        }
        return ans;
    }
};
