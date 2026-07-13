#include <iostream>
#include <map>
using namespace std;
int main() {
    string s;
    cin >> s;
    map<char, int> freq;
    char ans;
    int maxi = 0;
    for (char ch : s) {
        freq[ch]++;
        if (freq[ch] > maxi) {
            maxi = freq[ch];
            ans = ch;
        }
    }
    cout << ans;
    return 0;
}