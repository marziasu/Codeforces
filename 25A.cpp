#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n,num;
    cin>>n;
    vector<int>a;
    int even=0,odd=0;
    for(int i=0;i<n;i++){
        cin>>num;
        a.push_back(num);
        if(a[i]%2==0){
          even++;
        }
        else odd++;
    }
    if(even>odd){
        for(int i=0;i<n;i++){
            if(a[i]%2!=0){
                cout<<i+1;
                break;
            }
        }
    }
    else{
        for(int i=0;i<n;i++){
            if(a[i]%2==0){
                cout<<i+1;
                break;
            }
        }
    }
    return 0;
}
