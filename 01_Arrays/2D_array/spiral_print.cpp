#include <iostream>
using namespace std;
void Spiralprint(int arr[10][10],int rows, int columns){
    int sr=0,sc=0,ec=columns-1,er=rows-1;
    while(sr<=er and sc<=ec){
        for(int c=sc;c<=ec;c++){
            cout<<arr[sr][c]<<' ';
        }
        sr++;
        for(int r=sr;r<=er;r++){
            cout<<arr[r][ec]<<' ';
        }
        ec--;
        if(sr<er){
        for(int c=ec;c>=sc;c--){
            cout<<arr[er][c]<<' ';
        }
        er--;}
        if (sc<ec){
        for(int r=er;r>=sr;r--){
            cout<<arr[r][sc]<<' ';
        }
        sc++;}
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
    Spiralprint(arr,rows,columns);
    return 0;
}