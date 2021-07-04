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

/*
another solution
bool comp(Interval i1, Interval i2)
{
    return (i1.start < i2.start);
}
 

vector<Interval> Solution::merge(vector<Interval> &A) {
    vector<Interval> ans;
    int i=1,f=0;
    sort(A.begin(),A.end(),comp);
    Interval s;
    s.start=A[0].start;
    s.end=A[0].end;
    while(i<A.size())
    {
        if(A[i].start>s.end)
        {
            ans.push_back(s);
            s.start=A[i].start;
            s.end=A[i].end;
        }
        else if(A[i].end>s.end)
            s.end=max(A[i].end,s.end);
        i++;
        
    }
    ans.push_back(s);
    return ans;
}*/
