#include <iostream>
using namespace std;
void toh(int n, char src, char helper, char destination) {
    if (n == 0) {
        return;
    }
    toh(n-1, src, destination, helper);   // move n-1 disks: src -> helper (using destination as aux)
    cout << "Take disk " << n << " from " << src << " to " << destination << endl;
    toh(n-1, helper, src, destination);   // move n-1 disks: helper -> destination (using src as aux)
}

int main() {
    int n = 50;
    toh(n, 'A', 'B', 'C');
}