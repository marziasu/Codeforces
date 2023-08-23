#include<iostream>
#include<vector>
using namespace std;
const int N=1e7+10;
vector<bool>isPrime(N,1);

int main()
{
    isPrime[0]=isPrime[1]=false;
    for(int i=2;i<N;i++){
        if(isPrime[i]){
            for(int j=2*i;j<N;j+=i){
                isPrime[j]=false;
            }
        }
    } /// time complexity O(log(log(N)))
    int query;
    cout<<"enter your test case:";
    cin>>query;
    while(query--){
        int num;
        cin>>num;
        if(isPrime[num]){
            cout<<"Prime"<<endl;
        }
        else{
            cout<<"Not Prime"<<endl;
        }
    } /// time complexity Q*O(1)
    return 0;
}
