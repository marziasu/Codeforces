#include<iostream>
#include<string>
#include<map>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string name;
    map<string,int>reg;

    for(int i=0;i<n;i++){
        cin>>name;
        if(reg[name]==0){
            reg[name]=1;
            cout<<"OK"<<endl;
        }
        else{
            cout<<name<<reg[name]<<endl;
            reg[name]++;
        }
    }
}
