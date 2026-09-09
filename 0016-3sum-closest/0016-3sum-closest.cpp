class Solution {
public:
    int threeSumClosest(vector<int>& n, int t) {
    sort(n.begin(), n.end());
    int s = n.size() - 2;
    
    int result = n[0] + n[1] + n[2];  
    int minDiff = INT_MAX;
    
    for(int i = 0; i < s; i++) {
        int left = i + 1;
        int right = n.size() - 1;
        
        while(left < right) {
            int sum = n[i] + n[left] + n[right];  

            int diff = abs(sum - t);
            
            if(diff < minDiff) {  
                minDiff = diff;
                result = sum;
            }
            
            if(sum < t) {            
                left++;
            } else if(sum > t) {  
                right--;
            } else {
                return sum;      
            }
        }
    }
    return result;
}
};