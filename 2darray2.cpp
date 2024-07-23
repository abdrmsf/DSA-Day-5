#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<limits.h>
using namespace std;
int main()
{
int arr[3][3];
int rows=3;
int columns=3;
for(int i=0;i<rows;i++)
{
    for(int j=0;j<columns;j++)
    {
        cin>>arr[i][j];    //arr[j][i]-->Column wise
    }
}
for(int i=0;i<rows;i++)
{
    for(int j=0;j<columns;j++)
    {
        cout<<arr[i][j]<<" "; 
    }
    cout<<endl;
}
return 0;
}