#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
const int N=1e6+10;
vector<bool>isPrime(N,1);

int main()
{
    isPrime[0]=isPrime[1]=false;
    for(int i=2;i<=N;i++){
        if(isPrime[i]){
            for(int j=2*i;j<=N;j+=i){
                isPrime[j]=false;
            }
        }
    }
    int n;
    cin>>n;
    long long int num;
    long long int sq;
    while(n--){
        cin>>num;
        sq=sqrt(num);
        if(num==1){cout<<"NO"<<endl;}
        else if(sq*sq==num && isPrime[sq]){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
