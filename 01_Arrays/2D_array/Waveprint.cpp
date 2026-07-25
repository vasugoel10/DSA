#include <iostream>
using namespace std;
void Waveprint(int arr[10][10], int rows, int columns) {
    for (int col = 0; col < columns; col++) {
        if (col % 2 == 0) {
            for (int row = 0; row < rows; row++) {
                cout << arr[row][col] << ", ";
            }
        } else {
            for (int row = rows - 1; row >= 0; row--) {
                cout << arr[row][col] << ", ";
            }
        }
    }
    cout << "END";
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
    int rows, columns ;
    cin >> rows >> columns;

    int arr[10][10];

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            cin >> arr[i][j];
        }
    }
    Waveprint(arr,rows,columns);
    print2D(arr,rows,columns);
}
