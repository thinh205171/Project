#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Object {
    float quantity;//đơn giá
    int weight;//khối lượng
    int value;//giá trị
    char name;
};
Object a[100];
int soluong[100];
bool cmp(Object A, Object B)
{
    return A.quantity > B.quantity;
}
int main()
{
    freopen("BAG.inp","r",stdin);
    freopen("BAG.out","w",stdout);
    int n,W;
    int max=0;
    scanf("%d  %d",&n,&W);
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d  %d  %c",&a[i].weight,&a[i].value,&a[i].name);
        a[i].quantity=(float)a[i].value/a[i].weight;
    }
    sort(a, a+n, cmp);
    for(i=0;i<n;i++)
    {
        if(W>=a[i].weight)
        {
            soluong[i]=W/a[i].weight;
            max+=soluong[i]*a[i].value;
            W-=a[i].weight*soluong[i];
        }
    }
    printf("%d\n",max);
    for(i=0;i<n;i++)
    {
        if(soluong[i]!=0)
        {
            printf("%c%3d\n",a[i].name,soluong[i]);
        }
    }

}
