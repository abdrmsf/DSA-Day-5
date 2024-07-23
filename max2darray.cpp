#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<limits.h>
using namespace std;
int getmaximum(int arr[][3],int rows,int cols)
{
  int maxi=INT_MIN;
  for(int i=0;i<rows;i++)
{
    for(int j=0;j<cols;j++)
    { 
        if(arr[i][j]>maxi)
        {
            maxi=arr[i][j];
        }
    }
}
 return maxi; 
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
/* for(int i=0;i<rows;i++)
{
    for(int j=0;j<cols;j++)
    {
        cout<<arr[i][j]<<" ";    //arr[j][i]-->Column wise
    }
cout<<endl;
} */
cout<<getmaximum(arr,rows,cols)<<endl;
return 0;
}