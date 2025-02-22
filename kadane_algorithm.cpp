#include <bits/stdc++.h>
using namespace std;

int maxSubarraySum(vector<int> nums) {
int n = nums.size();
        int sum=0;
        int maxi = INT_MIN;
        for(auto it:nums)
        {
            sum +=it;
            maxi = max(sum,maxi);
            if(sum<0) sum=0;
        }
        return maxi;
    }
}

int main()
{
    vector<int> arr[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4};
    long long maxSum = maxSubarraySum(arr);
    cout << "The maximum subarray sum is: " << maxSum << endl;
    return 0;
}
