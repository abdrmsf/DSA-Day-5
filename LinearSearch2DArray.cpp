#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<limits.h>
using namespace std;
bool LinearSearch(int arr[][3],int rows,int cols,int key)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            if(arr[i][j]==key)
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
int arr[3][3];
int rows=3;
int cols=3;
int key;
cin>>key;
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
if(LinearSearch(arr,rows,cols,key))
{
    cout<<"Found"<<endl;
}
else
{
    cout<<"Not Found"<<endl;
}
return 0;
}


