#include <stdio.h>
#include <iostream>
#include "MatrixClass.h"


using namespace std;

int main(int argc, char **argv)
{
        int Mx[3][3]={1,2,3,4,5,6,7,8,9};
	Matrix test_matrix(Mx);
        int Mx1[3][3]={1,0,0,0,1,0,0,0,1};
	Matrix test_matrix1(Mx1);
	//cout<<test_matrix.M[0][0]<<endl;
        //test_matrix.print();
       // test_matrix1.print();  
        Matrix final_mx=test_matrix*test_matrix;
	final_mx.print();
       //printf("Hello\n");
        return 0;
}
