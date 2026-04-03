class Solution {
public:
    int search(vector<int>& nums, int tar) {

        int left=0;
        int right=nums.size()-1;
        while(left<=right){
            int mid = left + (right-left)/2;

            if(nums[mid]==tar) return mid;

            if(nums[mid]<tar){
                left=mid+1;
            }else{
                right=mid-1;
            }
        }
        return -1;
    }
};