
// Question 8
// Given two sparse matrices mat1 of size m x k and mat2 of size k x n, return the result of mat1 x mat2. You may assume that multiplication is always possible.
// Example 1:


// Input: mat1 = [[1,0,0],[-1,0,3]], mat2 = [[7,0,0],[0,0,0],[0,0,1]]
// Output:
// [[7,0,0],[-7,0,3]]


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r1,c1;
    cout<<"Enter the number of rows and columns for first matrix: ";
    cout<<"ENter matrix a details";
    cin>>r1>>c1;
    int a[r1][c1];
    cout<<"\nEnter elements of Matrix A : \n";
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            cin>>a[i][j];
        }
    }
      int r2,c2;
    cout<<"Enter the number of rows and columns for second matrix: "<<endl;
    cout<<"ENter matrix a details"<<endl;
    cin>>r2>>c2;
    int b[r2][c2];
    cout<<"\nEnter elements of Matrix B : \n";
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cin>>b[i][j];
        }
    }
    if(c1!=r2)
    {
        cout<<"Matrix multiplication not possible"<<endl;
    }
    else{
        int c[r1][c2];
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c2;j++)
            {
              int  ans=0;
                for(int k=0;k<r2;k++)
                {
                 ans+=  a[i][k]*b[k][j] ;
                }
                c[i][j]=ans;
                cout<<c[i][j]<<" ";
            }
            cout<<endl;
        }
    }

}
