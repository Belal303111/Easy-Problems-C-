class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i=0;
        while(i<nums.size())
        {
            if(nums[i]==target) return i;
            i++;
        }
        i=0;
        while(i<nums.size() && nums[i]<target)
         i++;
         return i;
           }
};