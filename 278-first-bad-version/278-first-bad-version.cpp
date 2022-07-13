// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
       int low=1,high=n,mid;
        int ans=-1;
        while(low<=high)
        {
            mid = low + ((high - low)/2 );
            if(isBadVersion(mid))
            {
                high=mid-1;
                ans=mid;
            }
            else
                low=mid+1;
        }
        return ans; 
    }
};