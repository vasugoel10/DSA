#include <iostream>
#include <algorithm>
using namespace std;

int MaxElement(int arr[], int n) {
    if (n == 1)
        return arr[0];

    int ans = MaxElement(arr + 1, n - 1);

    return max(arr[0], ans);
}

int main() {
    int arr[] = {4, 9, 2, 17, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << MaxElement(arr, n);

    return 0;
}