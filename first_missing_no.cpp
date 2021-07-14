 /*Given an unsorted integer array, find the first missing positive integer.

Example:

Given [1,2,0] return 3,

[3,4,-1,1] return 2,

[-8, -7, -6] returns 1

Your algorithm should run in O(n) time and use constant space.*/

sort(A.begin(), A.end());
    int c = 1;
    for (auto const& a : A)
    {
        if (a<1)
            continue;
        else if (a==c)
        {
            ++c;
            continue;
        }
        else
            break;
    }
    return c;
