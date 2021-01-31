#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
int C(int k,int n)
{
    if(k==0 || k==n)
        return 1;
    return C(k-1,n-1)+C(k,n-1);
}
int main()
{
    freopen("TOHOP.inp","r",stdin);
    freopen("TOHOP.out","w",stdout);
    int k,n;
    while(cin>>k>>n)
    {
        printf("%d\n",C(k,n));
    }
}
