// Matrix.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Matrix{
private:   
    float matrix[2][2];
public:
    Matrix() {

        for (int x = 0; x < 2; x++) {
            for (int y = 0; y < 2; y++) {
                this->matrix[x][y] = 0;
            }
        }
    }
    void displayMatrix() {
        for (int x = 0; x < 2; x++) {
            for (int y = 0; y < 2; y++) {
                std::cout << "[" << this->matrix[x][y] << "]" << "   ";
            }
            std::cout << std::endl;
        }
    }
    void operator = (const Matrix& m) {
        
        for (int x = 0; x < 2; x++) {
            for (int y = 0; y < 2; y++) {
                this->matrix[x][y] = m.matrix[x][y];
            }
        }
    }
    void set(int x,int y,float a) {
        this->matrix[x][y] = a;
    }
    // not completed yet
    void reverse() {
        float temp = 0;
        for (int x = 0; x < 2; x++) {
            for (int y = 1; y >= 0; y--) {
            }
        }
    }
};

int main()
{  
    Matrix matrix, matrix2;
    matrix.displayMatrix();
    std::cout << "           "<<std::endl;
    for (int x = 0; x < 2; x++) {
        for (int y = 0; y < 2; y++) {
            matrix.set(x, y, 5);
        }
    }
    matrix.displayMatrix();
    std::cout << "           " << std::endl;
    matrix.set(0, 0, 1);
    matrix.set(0, 1, 2);
    matrix.set(1, 0, 3);
    matrix.set(1, 1, 4);
    matrix.displayMatrix();
    std::cout << "           " << std::endl;
    matrix2 = matrix;
    matrix2.displayMatrix();
    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
