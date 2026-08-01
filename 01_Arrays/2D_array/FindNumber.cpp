#include <iostream>
using namespace std;

bool Numberfind(int arr[10][10], int rows, int columns,int target){
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            if (arr[i][j]==target){
                return true;
            }
        }
    }
    return false;
}
int main() {
    int rows, columns,key ;
    cin >> rows >> columns;

    int arr[10][10];

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            cin >> arr[i][j];
        }
    }
    cin>>key;
    cout<<endl;
    cout<<Numberfind(arr,rows,columns,key);
    return 0;
}