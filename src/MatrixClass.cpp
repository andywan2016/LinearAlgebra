#include <iostream>
#include "MatrixClass.h"


using namespace std;

//assgin all zero to matrix
Matrix::Matrix()
{
   for(int i=0;i<this->size;i++)
   {
      for(int j=0;j<this->size;j++){
      
         this->M[i][j]=0;	      
      }
   }

}


Matrix::Matrix(int Mx[size][size])
{
   for(int i=0;i<this->size;i++)
   {
      for(int j=0;j<this->size;j++)
      {
         this->M[i][j]=Mx[i][j];
      }
   }
	
}



//print function for matrix       
void Matrix::print()
{
   for(int i=0;i<this->size;i++)
   {
      cout<<"|";
      for(int j=0;j<this->size-1;j++)
      {
         cout<<this->M[i][j]<<",";
      }
      cout<<M[i][size-1]<<"|"<<endl;
   }

}

//for matrix mutiplication, overload on *

Matrix Matrix::operator*(Matrix Mx){
   Matrix result_mx;  
   for(int i=0;i<this->size;i++){
      for(int j=0;j<this->size;j++){
         for(int k=0;k<this->size;k++){
	      result_mx.M[i][j]=result_mx.M[i][j]+(this->M[i][k])*(Mx.M[k][j]);     
         }
      }
   
   }
   
   return result_mx;
}


