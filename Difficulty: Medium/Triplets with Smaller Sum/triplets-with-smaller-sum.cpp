class Solution {
  public:
    int countTriplets(int sum, vector<int>& arr) {
        // code here
        int n = arr.size();

        // Sort the array to use two-pointer technique
        sort(arr.begin(), arr.end());

        int count = 0;

        // Fix the first element and use two-pointer for the rest
        for (int i = 0; i < n - 2; i++) {
            int left = i + 1;
            int right = n - 1;

            while (left < right) {
                int current_sum = arr[i] + arr[left] + arr[right];

                // If sum is less than target, all elements between left and right
                // with arr[left] will also give sum less than target
                if (current_sum < sum) {
                    count += (right - left);
                    left++;
                } else {
                    right--;
                }
            }
        }

        return count;
    }
};