#include<iostream>
using namespace std;
int main(){
    int arr1[5]={1,2,3,4,5};
    int sz=5;
    int sum=0;
    int multiplies =1;
    for (int  i = 0; i < sz; i++)
    {
        sum = sum +arr1[i];
        multiplies = multiplies*arr1[i];
    }
     
    cout<< "sum of array = "<<sum<<endl;
    cout<< "sum of array = "<<multiplies<<endl;
    return 0;
}