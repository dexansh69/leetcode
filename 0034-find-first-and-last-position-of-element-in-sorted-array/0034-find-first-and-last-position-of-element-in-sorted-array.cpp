class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int left = 0;
        int right = n - 1;
        int first = -1;
        int last = -1;
        vector<int> ans;
        if (nums.empty())
            return {-1, -1};
        while (left <= right) {
            int mid = (left + right) / 2;
            if (nums[mid] == target) {
                first = mid;
                right = mid - 1;
            } else if (nums[mid] > target) {

                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        left = 0;
        right = n - 1;
        int mid;
        while (left <= right) {
            mid = (left + right) / 2;
            if (nums[mid] == target) {
                last = mid;
                left = mid + 1;
            } else if (nums[mid] > target) {

                right = mid - 1;
            } else {

                left = mid + 1;
            }
        }

        return {first, last};
    }
};