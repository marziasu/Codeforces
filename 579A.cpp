#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int sum=0;
    while(x!=0){
        if(x%2==1){
            sum++;
        }
        x=x/2;
    }
    cout<<sum<<endl;

    return 0;
}
