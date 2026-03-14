
#include "ChessBoard.h"
#include <iostream>


int main() {
    ChessBoard c1(8,8);
    ChessBoard c4 = std::move(c1);
    std::cout << c4 << "\n";

    ChessBoard c5(8, 8);
    std::cout <<  c5 << "\n";

    c5 = std::move(c4);
    std::cout <<  c5 << "\n";

    return 0;
}