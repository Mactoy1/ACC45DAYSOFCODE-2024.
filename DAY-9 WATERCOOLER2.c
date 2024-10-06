#include <stdio.h>

int main() 
{
    int T;
    scanf("%d",&T);
    for(int i =0;i<T;i++)
    {
        int X,Y;
        scanf("%d %d",&X,&Y);
        int M= (Y-1)/X;
        if (M<1)
        {
        printf ("0\n");
        }
        else
        {
            printf("%d\n",M);
        }
    }
    return 0;
}

