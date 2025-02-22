#include <iostream>
using namespace std;

class Matrix {
private:
    static const int MAX_SIZE = 10;
    int mat[MAX_SIZE][MAX_SIZE];
    int rows, cols;

public:
    Matrix(int r, int c) : rows(r), cols(c) {
        if (r > MAX_SIZE || c > MAX_SIZE) {
            cout << "Matrix dimensions exceed maximum size of " << MAX_SIZE << "x" << MAX_SIZE << endl;
            exit(1);
        }
    }

    void putel(int row, int col, int value) {
        if (row < 0 || row >= rows || col < 0 || col >= cols) {
            cout << "Index out of bounds" << endl;
            return;
        }
        mat[row][col] = value;
    }

    int getel(int row, int col) const {
        if (row < 0 || row >= rows || col < 0 || col >= cols) {
            cout << "Index out of bounds" << endl;
            return -1; // Return an invalid value to indicate error
        }
        return mat[row][col];
    }

    void display() const {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Matrix m(2, 2);
    m.putel(0, 0, 1);
    m.putel(0, 1, 2);
    m.putel(1, 0, 3);
    m.putel(1, 1, 4);

    cout << "Matrix elements:" << endl;
    m.display();

    cout << "Element at (1, 1): " << m.getel(1, 1) << endl;

    return 0;
}