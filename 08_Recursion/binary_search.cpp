#include <iostream>
using namespace std;

bool BinarySearch(int arr[], int low, int high, int target) {
    if (low > high)
        return false;

    int mid = low + (high - low) / 2;

    if (arr[mid] == target)
        return true;

    if (target > arr[mid])
        return BinarySearch(arr, mid + 1, high, target);

    return BinarySearch(arr, low, mid - 1, target);
}

int main() {
    int arr[] = {2, 5, 8, 11, 17, 25, 31};
    int n = sizeof(arr) / sizeof(arr[0]);

    int target;
    cin >> target;

    if (BinarySearch(arr, 0, n - 1, target))
        cout << "Found";
    else
        cout << "Not Found";

    return 0;
}