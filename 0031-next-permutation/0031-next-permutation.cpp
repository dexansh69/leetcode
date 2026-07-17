class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();

        // Step 1: Find breakpoint
        int breakp = -1;

        for(int i = n - 2; i >= 0; i--) {
            if(nums[i] < nums[i + 1]) {
                breakp = i;
                break;
            }
        }

        // If no breakpoint exists, array is in descending order
        if(breakp == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }

        // Step 2: Find the first element greater than nums[breakp]
        // from the right side
        for(int i = n - 1; i > breakp; i--) {
            if(nums[i] > nums[breakp]) {
                swap(nums[i], nums[breakp]);
                break;
            }
        }

        // Step 3: Reverse the suffix
        reverse(nums.begin() + breakp + 1, nums.end());
    }
};