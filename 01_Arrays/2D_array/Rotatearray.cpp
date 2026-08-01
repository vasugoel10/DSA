#include <iostream>
using namespace std;

void Rotatearray(int arr[10][10],int rows,int columns){
    for(int i=0;i<rows;i++){
        for(int j=i+1;j<columns;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    for(int r=0;r<rows;r++){
        int i=0,j=columns-1;
        while(i<j){
            swap(arr[r][i],arr[r][j]);
            i++;
            j--;
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
    Rotatearray(arr,rows,columns);
    print2D(arr,rows,columns);
}