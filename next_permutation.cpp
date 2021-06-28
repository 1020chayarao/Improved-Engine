class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i;
        for(i=nums.size()-1; i>0;i--){
            if(nums[i]<=nums[i-1]) continue;
            else{
                int j=i;
                while(j<nums.size() && nums[j]>nums[i-1])  j++;
                j--;
                swap(nums[i-1],nums[j]);
                sort(nums.begin()+i, nums.end());
                break;
            }
        }
        if(!i) sort(nums.begin(), nums.end());
        
    }
};
