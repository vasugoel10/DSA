#include <iostream>
using namespace std;
void transpose(int a[10][10],int rows, int columns)
{
    for(int i=0;i<rows;i++){
        for(int j=i+1;j<columns;j++){
            swap(a[i][j],a[j][i]);
        }
    }
}
void print2D(int arr[][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
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
    transpose(arr,rows,columns);
    print2D(arr,rows,columns);
}