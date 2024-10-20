#include<iostream>
#include<vector>
using namespace std;
bool isValid(vector<int>&arr, int n, int m, int maxallotepages){
    int students =1,pages=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>maxallotepages)
        return false;
        if(arr[i]+pages<=maxallotepages){
            pages+=arr[i];
        }
        else{
            students++;
            pages=arr[i];
        }
    }
     return students > m ? false:true;
}
int allotepages(vector<int>&arr,int n,int m){
    if (m>n)
    {
        return -1;
    }
    
    int sum =0;
    for (int i = 0; i <n; i++)
    {
       sum+=arr[i];
    }
    int st =0,end=sum;
    int ans =-1;
    while (st<=end)
    {
        int mid = st + ( end - st)/2;
        if(isValid(arr,n,m,mid)){
            ans = mid;
            end = mid +1;
        }
        else 
        {
            st = mid -1;
        }
    }
    return ans;
}
int main(){
    vector<int>arr={15,17,20};
    int n=3,m=2;
    cout << allotepages(arr,n,m)<<endl;
    return 0;
}