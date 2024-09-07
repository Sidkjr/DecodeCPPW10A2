#include <iostream>
using namespace std;

int main() {
    int nums[] = {2, 5, 6, 0, 0, 1, 2}; 
    int n = sizeof(nums) / sizeof(nums[0]);  
    int target = 0;  
    int lo = 0;
    int hi = n - 1;
    bool found = false;

    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (nums[mid] == target) {
            found = true;
            break;
        }
        if (nums[lo] == nums[mid] && nums[mid] == nums[hi]) {
            lo++;
            hi--;
        }
        else if (nums[lo] <= nums[mid]) {
            if (nums[lo] <= target && target < nums[mid]) {
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }
        else {
            if (nums[mid] < target && target <= nums[hi]) {
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }
    }
    cout << (found ? "True" : "False") << endl;
}
