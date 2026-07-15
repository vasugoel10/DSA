#include <bits/stdc++.h>
using namespace std;

bool canPaint(vector<int> &boards, int painters, int maxTime) {
    int painterCount = 1;
    int currentTime = 0;

    for (int board : boards) {

        if (currentTime + board <= maxTime) {
            currentTime += board;
        }
        else {
            painterCount++;
            currentTime = board;

            if (painterCount > painters)
                return false;
        }
    }

    return true;
}

int painterPartition(vector<int> &boards, int painters) {

    int low = *max_element(boards.begin(), boards.end());

    int high = accumulate(boards.begin(), boards.end(), 0);

    int ans = high;

    while (low <= high) {

        int mid = low + (high - low) / 2;

        if (canPaint(boards, painters, mid)) {
            ans = mid;
            high = mid - 1;      // Try smaller answer
        }
        else {
            low = mid + 1;       // Need more time
        }
    }

    return ans;
}

int main() {

    int n, k;
    cin >> n >> k;

    vector<int> boards(n);

    for (int i = 0; i < n; i++)
        cin >> boards[i];

    cout << painterPartition(boards, k);

    return 0;
}