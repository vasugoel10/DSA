#include <iostream>
using namespace std;

// int main() {
//     char ch;
//     ch=cin.get();
//     int x = 0, y = 0;
//     while(ch!='\n') {
//         if (ch == 'N')
//             y++;
//         else if (ch == 'S')
//             y--;
//         else if (ch == 'E')
//             x++;
//         else if (ch == 'W')
//             x--;
//         ch-cin.get();
//     }

//     while (x < 0) {
//         cout << 'W';
//         x++;
//     }

//     while (y > 0) {
//         cout << 'N';
//         y--;
//     }

//     while (y < 0) {
//         cout << 'S';
//         y++;
//     }

//     while (x > 0) {
//         cout << 'E';
//         x--;
//     }

//     cout << endl;

//     return 0;
// }
int main() {
    int a[100];
    int n;
    cout<<"Enter n(Max: 100):"<<endl;
    cin>>n;
    for (int i=0;i<n;i++) {
        cout<<"Enter"<<i+1<<"number"<<endl;
        cin>>a[i];

    }
    for (int i=0;i<n;i++) {
        cout<<a[i] <<" ";

    }
}