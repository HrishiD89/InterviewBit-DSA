#include<bits/stdc++.h>
using namespace std;

int maxSubarraySum(vector<int>& nums, int k){
    int maxSum = INT_MIN;
    int windowSum = 0;

    for(int i = 0 ; i < k ; i++){
        windowSum += nums[i];
    }

    for(int i = k ; i < nums.size() ; i++){
        windowSum += nums[i] - nums[i-k];
        maxSum = max(maxSum,windowSum);
    }

    return maxSum;

}
int main(){
    vector<int> nums = {2,1,5,1,3,2};
    int windowSize = 3;
    int result = maxSubarraySum(nums,windowSize);
    cout << "Maximum subarray sum: " << result << endl;
    return 0;
}