#include <iostream>
using namespace std;

bool LinearSearch(int arr[], int n, int target) {
    if (n == 0)
        return false;

    if (arr[0] == target)
        return true;

    return LinearSearch(arr + 1, n - 1, target);
}

int main() {
    int arr[] = {2, 5, 7, 9, 12, 18};
    int n = sizeof(arr) / sizeof(arr[0]);

    int target;
    cin >> target;

    if (LinearSearch(arr, n, target))
        cout << "Found";
    else
        cout << "Not Found";

    return 0;
}