#include <iostream>
using namespace std;

const int MAX = 10; // Maximum size of the matrix

void inputMatrix(int matrix[MAX][MAX], int rows, int cols) {
    cout << "Enter elements of the matrix:" << endl;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> matrix[i][j];
}

void multiplyMatrices(int first[MAX][MAX], int second[MAX][MAX], int result[MAX][MAX], int r1, int c1, int c2) {
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < c1; k++)
                result[i][j] += first[i][k] * second[k][j];
        }
    }
}

void displayMatrix(int matrix[MAX][MAX], int rows, int cols) {
    cout << "Resultant matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
}

int main() {
    int firstMatrix[MAX][MAX], secondMatrix[MAX][MAX], resultMatrix[MAX][MAX];
    int r1, c1, r2, c2;

    cout << "Enter rows and columns for first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for second matrix: ";
    cin >> r2 >> c2;

    if (c1 != r2) {
        cout << "Matrix multiplication not possible!" << endl;
        return 0;
    }

    inputMatrix(firstMatrix, r1, c1);
    inputMatrix(secondMatrix, r2, c2);

    multiplyMatrices(firstMatrix, secondMatrix, resultMatrix, r1, c1, c2);

    displayMatrix(resultMatrix, r1, c2);

    return 0;
}
