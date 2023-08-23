#include<iostream>
using namespace std;
int main()
{
    int t,a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if(a%b!=0){
            cout<<(a/b+1)*b-a<<endl;
        }
        else{cout<<"0"<<endl;}
    }
}
