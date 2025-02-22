#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreaterPermutation(vector<int> &nums) {
    int n = nums.size(); 
        int index1 = -1;
        for (int i = n - 2; i >= 0; i--) { //traversing from back
            if (nums[i] < nums[i + 1]) {
            index1 = i;
            break;
        }
    }
    if (index1 == -1) { // if no element if found as nums[i]<nums[i+1] then reverse complete array and return it.
        reverse(nums.begin(), nums.end());
        return nums;
    }
    // Find index2 and swap it with arr[ind]:

    for (int i = n - 1; i > index1; i--) {
        if (nums[i] > nums[index1]) {
            swap(nums[i], nums[index1]);
            break;
        }
    }
  //reverse the right half:
    reverse(nums.begin() + index1 + 1, nums.end()); 
  return nums;
    }


int main()
{
    vector<int> A = {2, 1, 5, 4, 3, 0, 0};
    vector<int> ans = nextGreaterPermutation(A);

    cout << "The next permutation is: [";
    for (auto it : ans) {
        cout << it << " ";
    }
    cout << "]n";
    return 0;
}
