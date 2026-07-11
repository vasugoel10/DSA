#include <iostream>
using namespace std;

void ReverseArray(int arr[], int n, int i = 0) {
    int j = n - i - 1;

    if (i >= j)
        return;

    swap(arr[i], arr[j]);

    ReverseArray(arr, n, i + 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    ReverseArray(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}