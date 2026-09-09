class Solution {
public:
    vector<int> sortedSquares(vector<int>& n) {
    vector<int> pos;
    vector<int> neg;
    vector<int> ans;
    int i = 0;
    while(i<n.size()){
        if(n[i]<0){
            neg.push_back(n[i]);
        }
        else{
            pos.push_back(n[i]);
        }
        i++;
    }

    int pp = 0;
    int np = neg.size() - 1; 

    while(np >= 0 && pp < pos.size()){ 
        int sqn = neg[np] * neg[np];
        int sqp = pos[pp] * pos[pp];

        if(sqp < sqn){
            ans.push_back(sqp);
            pp++;
        }
        else{
            ans.push_back(sqn);
            np--;
        }
    }

    while(pp < pos.size()){
        int x = pos[pp] * pos[pp];
        pp++;
        ans.push_back(x);
    }
    while(np >= 0){
        int x = neg[np] * neg[np];
        np--;
        ans.push_back(x);
    }

    return ans;
}
};