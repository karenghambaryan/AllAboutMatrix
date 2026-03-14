#ifndef CHESSBOARD_H
#define CHESSBOARD_H
#include <iostream>


class Matrix
{
    protected:
        std::string** m_matrix;
        int m_cols;
        int m_rows;
    public:
        Matrix();
        Matrix(int rows,int cols);
        virtual ~Matrix();
        Matrix(const Matrix& other);
        Matrix(Matrix && other);
        Matrix& operator= (const Matrix& other);
        Matrix& operator= (Matrix&& other);
        friend std::ostream& operator<<(std::ostream& os,const Matrix& other);
};

class ChessBoard : public Matrix
{
    public:
        ChessBoard() = delete;
        ~ChessBoard() override;
        ChessBoard(int rows,int cols);
        ChessBoard(const ChessBoard& other);
        ChessBoard& operator=(const ChessBoard& other);
        ChessBoard(ChessBoard&& other);
        ChessBoard& operator=(ChessBoard&& other);
        friend std::ostream& operator<<(std::ostream& os,const ChessBoard& other);
};
#endif