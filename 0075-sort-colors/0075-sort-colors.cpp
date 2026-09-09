class Solution {
public:
    void sortColors(vector<int>& n) {
    int z = 0;
    int o = 0;
    int t = 0;
    vector<int> res;

    for(int i = 0 ; i<n.size();i++){
        if(n[i] == 0){
            z++;
        }
        if(n[i] == 1){
            o++;
        }
        if(n[i] == 2){
            t++;
        }
    }

    for(int i = 0; i<z;i++){
        n[i] = 0;
    }
    for(int i = z; i<(z+o);i++){
        n[i] = 1;
    }
    for(int i = (z+o); i<n.size();i++){
        n[i] = 2;
    }
}
};