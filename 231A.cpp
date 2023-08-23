#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int s[3],prb=0;

    for(int i=1;i<=n;i++){
        int count=0,j=0;
        while(j<3){
            cin>>s[j];
            if(s[j]==1){
                count++;
            }
            j++;
        }
        if(count>=2){prb++;}
    }
    cout<<prb;
}
