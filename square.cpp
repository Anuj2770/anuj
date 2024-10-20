#include<iostream>
using namespace std ;
int main (){ 
    int count = 5;
    char ch = 'A';
    // int num = 1;
    for (int i = 1; i <=count; i++)
    {
        for (int j = 1; j <=count; j++)
        {
            cout<< ch << " ";
            // cout<< num<< " ";
            // num = num+1;
            ch = ch +1;        }
        cout<< endl;
    }
    return 0;
}