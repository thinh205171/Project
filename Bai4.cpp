#include <bits/stdc++.h>

using namespace std;
bool c[13][4];
int dem[4][13];
int main()
{
    srand(time(NULL));
    int i,x, nguoi;
    int hang,cot;
    for(nguoi=1;nguoi<=4;nguoi++)
    {
        printf("%d: \n",nguoi);
        for(i=0;i<13;i++)
        {
            x=rand() %52;
            while(true)
            {
                hang=x/4;
                cot=x%4;
                if(c[hang][cot]==false)
                {
                    // 1 la bai thoa man
                    dem[nguoi][hang]++;
                    c[hang][cot]=true;
                    if(hang==0)
                        printf("At ");
                    if(hang==10)
                        printf("J ");
                    if(hang==11)
                        printf("Q ");
                    if(hang==12)
                        printf("K ");
                    if(hang>0 && hang<10)
                        printf("%d ",hang+1);
                    if(cot==0)
                        printf("co");
                    if(cot==1)
                        printf("ro");
                    if(cot==2)
                        printf("bich");
                    if(cot==3)
                        printf("tep");
                    printf("  ");
                    break;
                }
                else
                {
                    if(x==51)
                        x=0;
                    else
                        x++;
                }
            }
        }
        for(hang=0;hang<13;hang++)
        {
            if(dem[nguoi][hang]==4)
            {
                if(hang==0)
                    printf("Tu quy At");
                if(hang==10)
                    printf("Tu quy J");
                if(hang==11)
                    printf("Tu quy Q");
                if(hang==12)
                    printf("Tu quy K");
                if(hang>0 && hang<10)
                    printf("Tu quy %d",hang+1);
                printf("\n");
            }
        }
        printf("\n");
    }

}
