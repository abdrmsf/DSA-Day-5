#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<limits.h>
using namespace std;
void transpose(int arr[][3],int rows,int cols,int transposearr[][3])
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            transposearr[j][i]=arr[i][j];
        }
    }
}
void printArray(int arr[][3],int rows,int cols)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cout<<arr[i][j]<<" ";
        }
    cout<<endl;
    }
}
int main()
{
int arr[3][3];
int rows=3;
int cols=3;
for(int i=0;i<rows;i++)
{
    for(int j=0;j<cols;j++)
    {
        cin>>arr[i][j];    //arr[j][i]-->Column wise
    }
}
printArray(arr,rows,cols);
int transposearr[3][3];
transpose(arr,rows,cols,transposearr);
printArray(transposearr,rows,cols);
return 0;
}