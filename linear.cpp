#include<iostream>
using namespace std;
int linearsearch(int arr[],int sz, int item){
    for (int i = 0; i < sz; i++)
    {
        if (item == arr[i])
        {
            return i;
        }
        
    }
    return -1;
}
// revese of the array
void reverse_array( int arr[], int sz){
    int start =0;
    int end = sz-1;
    while (start<end)
    {
         swap(arr[start],arr[end]);
         start++;
         end--;
    }
    
}
int main(){
    int arr[]={2,4,9,10,35,45,6};
    int sz= 7;
      reverse_array(arr,sz);
      for (int i = 0; i < sz; i++)
      {
        cout<<arr[i]<<" ";
      }
      cout<<endl;
      
    // int item =35;
    // cout<<linearsearch(arr,sz,item);
    return 0;
}