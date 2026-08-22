#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void permute(string &s, int index, string original, vector<string> &ans) {
    if (index == s.size()) {
        if (s > original)
            ans.push_back(s);
        return;
    }

    for (int i = index; i < s.size(); i++) {
        swap(s[index], s[i]);
        permute(s, index + 1, original, ans);
        swap(s[index], s[i]);
    }
}

int main() {
    string s;
    cin >> s;
    string original = s;
    vector<string> ans;
    permute(s, 0, original, ans);
    sort(ans.begin(), ans.end());

    for (string x : ans)
        cout << x << endl;

    return 0;
}