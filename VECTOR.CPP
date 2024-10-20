#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec;
    cout<<"size of the vector = "<<vec.size()<<endl;
    vec.push_back(12);
    vec.push_back(14);
    vec.push_back(16);
    vec.push_back(18);
    cout<<"after the push_back size of vector = "<<vec.size()<<endl;
    cout<<vec.front()<<endl;
    return 0;
}