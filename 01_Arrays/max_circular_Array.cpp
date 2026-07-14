#include <iostream>
#include <climits>
using namespace std;
int main() {
    int test;
    cin >> test;
    while (test--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int currMax = arr[0];
        int Maxnormal = arr[0];
        for (int i = 1; i < n; i++) {
            currMax = max(arr[i], currMax + arr[i]);
            Maxnormal = max(Maxnormal, currMax);
        }
        if (Maxnormal < 0) {
            cout << Maxnormal << endl;
            continue;
        }
        int currMin = arr[0];
        int minSum = arr[0];
        for (int i = 1; i < n; i++) {
            currMin = min(arr[i], currMin + arr[i]);
            minSum = min(minSum, currMin);
        }
        int totalSum = 0;
        for (int i = 0; i < n; i++) {
            totalSum += arr[i];
        }
        int circularSum = totalSum - minSum;
        cout << max(Maxnormal, circularSum) << endl;
    }
    return 0;
}