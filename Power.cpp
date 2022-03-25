#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    long long a,n,res = 1;
    cin>>a>>n;

    for(long long i = 1; i <= n; i++)
    {
        res *= a;

    }
    cout<<res;
}
