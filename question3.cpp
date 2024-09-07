#include <iostream>
using namespace std;

int main() {
    int matrix[3][4] = {{1, 3, 5, 7},{10, 11, 16, 20},{23, 30, 34, 60}};
    int m = 3;
    int n = 4;
    int targets[] = {3, 13};
    for (int target : targets) {
        int lo = 0;
        int hi = m * n - 1;
        bool found = false;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            int midValue = matrix[mid / n][mid % n];
            if (midValue == target) {
                found = true;
                break;
            }
            else if (midValue < target) {
                lo = mid + 1;
            }
            else {
                hi = mid - 1;
            }
        }
        cout << (found ? "True" : "False") << endl;
    }
}