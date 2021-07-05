/*Given a sorted array of integers A(0 based index) of size N, find the starting and ending position of a given integar B in array A.

Your algorithm’s runtime complexity must be in the order of O(log n).

Return an array of size 2, such that first element = starting position of B in A and second element = ending position of B in A, if B is not found in A return [-1, -1].*/
vector<int> Solution::searchRange(const vector<int> &A, int B) {
    int first = -1, last = -1;
    vector<int> arr(2,-1);
    for (int i = 0; i < A.size(); i++) {
        if (B != A.at(i))
            continue;
        if (first == -1)
            first = i;
        last = i;
    }
    if(first!=-1)
       {arr.at(0)=first;
       arr.at(1)=last;
       return arr;}
    else 
     return arr;   
       
}


