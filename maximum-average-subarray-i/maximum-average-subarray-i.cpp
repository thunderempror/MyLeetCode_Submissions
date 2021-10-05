class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        long long sum = 0;
        long long mxsum = 0;
        for(int i=0;i<k;i++)
        {
            sum += nums[i];
        }
        mxsum = sum;
        
        int j=k;
        while(j<nums.size())
        {
            sum += (nums[j] - nums[j-k]);
            mxsum = max(mxsum , sum);
            j++;
        }
        
        double ans = (double)mxsum/k;
        return ans;
    }
};