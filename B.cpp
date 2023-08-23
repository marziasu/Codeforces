#include<bits/stdc++.h>
using namespace std;
int main()
{
    int vp,vd,t,f,c;
    cin>>vp>>vd>>t>>f>>c;

    int bijous=0;
    int dp=vp*t,dd=0;
    int back_t;
    int co=0;

    while(dp<c){
        dp+=vp;
        dd+=vd;
        if(dp>=c){
            break;
        }
        if(dp<=dd){
            co++;
            cout<<"dp="<<dp<<" dd="<<dd<<" "<<co<<endl;
            back_t=(dd/vd)+f;
            dp+=vp*back_t;
            dd=0;
            bijous++;

        }


    }
    cout<<bijous<<endl;
}
