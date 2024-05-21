//DSA C++
//Linear Data Structure - 2D Array
//time complexity generally O(n) ; depends on the operation
//space complexity 
#include<iostream>
using namespace std;
int main()
{
    //declaring rows and columns for 2 matrices
    int r1,r2,c1,c2;
    cout<<"Enter the size of rows for the first matrix: ";
        cin>>r1;
    cout<<"Enter the size of columns for the first matrix: ";
        cin>>c1;
    cout<<"Enter the size of rows for the second matrix: ";
        cin>>r2;
    cout<<"Enter the size of rows for the second matrix: ";
        cin>>c2;
    if(r2!=c1)
      {
          cout<<"ERROR: Matrices can not be multiplied!";
      }
    //declaring the 2 matrices via size taken
    int matrix1[r1][c1],matrix2[r2][c2];
    //entering the first matrix
    for(int i=0 ; i<r1 ; i++)
       {
           for(int j=0 ; j<c1 ; j++)
              {
                  cin>>matrix1[i][j];
              }
       }
    //entering the second matrix
    for(int i=0 ; i<r2 ; i++)
       {
           for(int j=0 ; j<c2 ; j++)
              {
                  cin>>matrix2[i][j];
              }
       }
    //declaring the elements for the final matrix
    int r=r1;
    int c=c1;
    int product[r][c];
    return 0;
}   