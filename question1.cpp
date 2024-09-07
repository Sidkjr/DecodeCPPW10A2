#include <iostream>
using namespace std;
int main() {
    int arr[] = {9, 7, 5, 3, 1};  
    int result = -1;
    int x = 5;  
    int n = 5; 
    int lo = 0;
    int hi = n - 1;
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (arr[mid] == x) {
            result = mid;
            break;  
        }
        else if (arr[mid] > x) {
            lo = mid + 1;
        }
        else {
            hi = mid - 1;
        }
    }
    if (result != -1) {
        cout << "The element is found at position: " << result << endl;
    } else {
        cout << "The element is not found in the array." << endl;
    }
}
