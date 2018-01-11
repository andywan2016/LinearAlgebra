#ifndef MATRIXCLASS_H
#define MATRIXCLASS_H


#include <iostream>
using namespace std;

class Matrix
{
   public:
      static const int size=3; //size of matrix
      int M[size][size];
      Matrix();//default constructor
      Matrix(int Mx[size][size]);
      Matrix operator*(Matrix Mx);

  // private:
     void print();//printout the matrix
     void RowExchange(int row1,int row2);

};















#endif
