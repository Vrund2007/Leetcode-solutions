class Solution {
public:
int removeDuplicates(vector<int>& n) {
    int i = 0;
    int j = 1;
    int ans =1 ;
    
    while(j<n.size()){
        if(n[i]==n[j]){
            j++;
        }
        else{
            n[i+1] = n[j];
            ans++;
            j++;
            i++;
        }
    }
    return ans;
}
};