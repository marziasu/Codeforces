#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,m,a;
    cin>>n>>m;
    vector<int>arr;

    for(int i=0;i<m;i++){
        cin>>a;
        arr.push_back(a);
    }
    long long int Count=arr[0]-1;

    for(int i=0;i<m-1;i++){
        if(arr[i]>arr[i+1]){
            Count+=n-(arr[i]-arr[i+1]);
        }
        else if(arr[i]<arr[i+1]){
            Count+=arr[i+1]-arr[i];
        }
    }
    cout<<Count;
}
