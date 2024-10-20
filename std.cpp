#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector<int>vec;    //0
    vector<int>vec ={1,2,3,4,5,6,7};
    vec.erase(vec.begin());   //size change but capacity does not change.
    vec.erase(vec.begin()+2);
    vec.insert(vec.begin()+2,100);
    // vec.clear();
    // vec.push_back(1);
    // vec.push_back(2);
    // vec.push_back(3);
    // vec.push_back(4);
    // vec.push_back(5);
    // vec.pop_back();
    // vec.emplace_back(6);  // it works as push_back.
    cout<<vec.size()<<endl;   // it is size of the vector.
    cout<<vec.empty()<<endl;   // it is the chack the vector is empty or not.
    cout<<*(vec.begin())<<endl;   // it is the chack the vector begin element.
    cout<<*(vec.end())<<endl;   // it is the show  space after  the last element.
    cout<<vec.capacity()<<endl;  // it is the capacity of the vector.
    // cout<<"val at index 2. "<<vec[2] <<" or "<< vec.at(2) <<endl;
    // vector<int>::iterator it;
    // for (it = vec.begin(); it != vec.end(); it++)
    // {
    //   cout<<*it<<" ";
    // }
    // cout<<endl;
      for (auto it = vec.rbegin(); it != vec.rend(); it++)
    {
      cout<<*it<<" ";
    }
    cout<<endl;
    // for (int val:vec)
    // {
    //     cout<<val<<" ";
    // }
    // cout<<endl;
    return 0;
}