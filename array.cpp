#include<iostream>
using namespace std;
int main(){
    int size = 5;
    int array[size]={2,12,45,-9,87};
    // TO FIND THE SMALLEST NUMBER IN THE GIVEN ARRAY
    int smallest = INT8_MAX;
    // int largest = INT8_MIN;
    for (int i = 0; i < size; i++)
    {
        if (array[i]<smallest)
    {
        smallest = i; 
    }    
    }
    cout<<"smallest number is = "<<smallest<<endl;
    // cout<<"largest number is = "<< large <<endl;
    return 0;

}