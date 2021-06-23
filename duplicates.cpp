/*Given an array nums containing n + 1 integers where each integer 
is between 1 and n (inclusive), prove that at least one duplicate number must exist.
Assume that there is only one duplicate number, find the duplicate one.*/
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        int presize;
        for(int i=0;i<nums.size();i++)
        {
            presize = s.size();
            s.insert(nums[i]);
            if(s.size() == presize)
            {
                return nums[i];
            }
        }
        return -1;
    }
};
