#include "matrix.h"
#include <fstream>

int main() {

    Matrix A("input.txt");
    std::ofstream out("output.txt");
    out << A;
    out.close();
    
    return 0;
}