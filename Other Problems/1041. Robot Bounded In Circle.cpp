class Solution {
public:
    bool isRobotBounded(string instructions) {
        unordered_map<char,pair<char,char>>dir{{'N',{'W','E'}},{'E',{'N','S'}},{'W',{'S','N'}},{'S',{'E','W'}}};
        unordered_map<char,pair<int,int>> mot {{'N',{0,1}},{'W',{-1,0}},{'E',{1,0}},{'S',{0,-1}}};
        char fac = 'N';
        int x = 0, y=0;
        for(char c : instructions){
            if(c=='G'){
                x+=mot[fac].first;
                y+=mot[fac].second;
            }
            else if(c=='L'){
                fac = dir[fac].first;
            }
            else if(c=='R'){
                
                fac = dir[fac].second;
            }
        }
        if(x==0 and y==0){
            return true;
        }
        return fac!='N';
    }
};
