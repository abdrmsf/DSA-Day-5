#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<limits.h>
using namespace std;
int main()
{
int arr[3][3];
int brr[3][3]={{1,2,3},
{4,5,6},
{2,4,8}};
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        cout<<brr[j][i]<<" ";
    }
    cout<<endl;
}
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
        cout<<brr[i][j]<<" ";
    }
    cout<<endl;
}
return 0;
}