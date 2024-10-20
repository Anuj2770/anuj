#include<iostream>
using namespace std;
int main(){
    int n =4;
    for (int i = 1; i < n+1; i++)
    {
        char ch = 'A';
        for (int j = 1; j < n+1; j++)
        {
            cout<< ch <<" ";     
            // cout << j<<" ";
            // cout<<" * ";
            ch = ch+1;
        }
        cout<<endl;
    }
    return 0;
}