#include<iostream>
using namespace std;
int bubblesort(int arr[],int n){
    for (int i = 0; i <n-1; i++)
    {
        for (int j = 0; j <n-i-1; j++)
      {
        if(arr[j]>arr[j+i]){
            swap(arr[j],arr[j+1]);
        }
      }
    }
}
    void printArray(int arr[],int n){
        for (int i = 0; i <n; i++)
        {
         cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
int main(){
    int n = 5;
    int arr[] ={5,2,6,1,9};
    bubblesort(arr,n);
    printArray(arr,n);
    return 0;
}