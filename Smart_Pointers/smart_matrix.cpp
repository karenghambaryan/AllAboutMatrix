#include <iostream>
#include <memory>

class Matrix {
private:
    int rows;
    int cols;
    std::unique_ptr<std::unique_ptr<int[]>[]> data;

public:
    Matrix(int r, int c) : rows(r), cols(c) 
    {
        data = std::make_unique<std::unique_ptr<int[]>[]>(rows);

        for (int i = 0; i < rows; ++i) 
        {
            data[i] = std::make_unique<int[]>(cols);
        }
    }

    void set(int r, int c, int value) 
    {
        data[r][c] = value;
    }

    int get(int r, int c) const 
    {
        return data[r][c];
    }

    void print() const 
    {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) 
            {
                std::cout << data[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    Matrix m(3,3);
    m.set(0,0,1);
    m.set(0,1,2);
    m.set(0,2,3);

    m.set(1,0,4);
    m.set(1,1,5);
    m.set(1,2,6);

    m.set(2,0,7);
    m.set(2,1,8);
    m.set(2,2,9);

    m.print();
    return 0;
}