class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int left = 0;
        int right = n-1;
        int first_occurence=-1 ;
        int last_occurence=-1;
        while(left<=right){
            int mid = (left+right)/2;
            if(nums[mid]==target){
                first_occurence=mid;
                right = mid-1;
            }
            else if(nums[mid]>target){
                right = mid-1;

            }
            else if (nums[mid]<target){
                left = mid +1;
            }
        }
        left=0;
        right = n-1;
        while(left<=right){
            int mid = (left+right)/2;
            if(nums[mid]==target){
                last_occurence=mid;
                left = mid+1;
            }
            else if(nums[mid]>target){
                right = mid-1;

            }
            else if (nums[mid]<target){
                left = mid +1;
            }
        }
        if(first_occurence ==-1 && last_occurence==-1){
            return {-1,-1};
        }
        return {first_occurence,last_occurence};
    }
};