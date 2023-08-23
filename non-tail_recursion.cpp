#include<iostream>
using namespace std;
int count=0;
void fun(int n)
{
    count++;
    if(n<1) return;
    fun(n-1);
    fun(n-3);
    cout<<n<<" ";
}
int main()
{
    fun(6);
    cout<<endl<<count;
    return 0;
}
