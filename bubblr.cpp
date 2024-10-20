#include<iostream>
using namespace std;
int main()
{
    int a[20],n,i,j,temp;
    //cout<< "enter the array limit:"<<endl;
    n=4;
    for(i=0;i<n;i++)
    {
        cout<<"enter the array element:"<<endl;
        cin>>a[i];
        
    }
    for(i=0;i<=n-1;i++)
    {
    
        for (int j = 0; j <n-i-1; j++)
        {
         if (a[j]>a[j+1])
         {
           temp=a[j];
           a[j]=a[j+1];
           a[j+1]=temp;
         }
        }
        
    }
    for ( i = 0; i <n; i++)
    {
        cout<<"sort array"<<a[i]<<endl;
    }
    return 0;
}