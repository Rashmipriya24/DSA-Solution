#include <bits/stdc++.h>
using namespace std;

int minimumDeletions(vector<int>& nums) {
    int n = nums.size();
    int minIndex = 0;
    int maxIndex = 0;

    // find indices of minimum and maximum elements
    for (int i = 0; i < n; i++) {
        if (nums[i] > nums[maxIndex]) maxIndex = i;
        if (nums[i] < nums[minIndex]) minIndex = i;
    }

    // ensure minIndex < maxIndex
    if (minIndex > maxIndex) swap(minIndex, maxIndex);

    // three strategies
    int deleteFront = maxIndex + 1;
    int deleteBack = n - minIndex;
    int deleteBoth = (minIndex + 1) + (n - maxIndex);

    return min({deleteFront, deleteBack, deleteBoth});
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> nums[i];

    int ans = minimumDeletions(nums);
    cout << "Minimum deletions required: " << ans << endl;

    return 0;
}
