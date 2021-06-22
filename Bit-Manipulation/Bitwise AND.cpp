class Solution {
public:
    int lm(long long int n){
        for(int i=0;i<5;i++){
            n|=n>>(1<<i);
        }
        n+=1;
        return n>>1;
    }
    int rangeBitwiseAnd(int left, int right) {
        int a = lm(left);
        int b = lm(right);
        int res=left;
        if(a==b){
            for(long long i=left; i<=right; i++){
                res=res&i;
            }
            return res;
        }
        return 0;
    }
};
