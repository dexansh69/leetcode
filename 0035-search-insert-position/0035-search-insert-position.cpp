class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int left = 0;
        int right = n - 1;
     
        while (left <= right) {
            int mid = (right + left) / 2;
            int sum = nums[mid];
            if (sum > target) {
                right = mid-1;
            } else if (sum < target) {
                left = mid + 1;

            } else if (sum == target) {
                return mid;
            }
            
           
        }
        return left;

        
    }
};