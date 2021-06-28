/*Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input.

Example 1:
Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
Output: [[1,6],[8,10],[15,18]]
Explanation: Since intervals [1,3] and [2,6] overlaps, merge them into [1,6].*/

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> res;
        int n = intervals.size();
        sort(intervals.begin(), intervals.end());
        int i;
        for(i = 1; i < n; ++i) {
            if(intervals[i-1][1] >= intervals[i][0] ) {
                intervals[i][0] = intervals[i-1][0];
                intervals[i][1] = max(intervals[i][1], intervals[i-1][1]);
            } else {
                res.push_back(intervals[i-1]);
            }
        }
        res.push_back(intervals[i-1]);
        return res;
        
    }
};
