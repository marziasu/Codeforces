#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,sum1=0,sum2=0;
        cin>>n;
        vector<int>vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];

        }

        sort(vec.begin(),vec.end());
        if(n==2){
            sum1=vec[0];
            sum2=vec[1];
        }
        else{
            for(int i=0;i<n;i++){
                if(i<=n/2)sum1+=vec[i];
                else sum2+=vec[i];

            }
        }
        int e=0,od=0;
        while(sum1>0 || sum2>0){
            if(sum1%2) e++;
            sum1/=2;
            if(sum2%2) od++;
            sum2/=2;
        }

        bool eflag=0,odflag=0;
        if(e%2==0) eflag=1;
        if(od%2==0) odflag=1;
        if(eflag==odflag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
