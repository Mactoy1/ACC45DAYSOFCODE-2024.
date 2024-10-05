#include <stdio.h>


int main() 
{
	int T;
    scanf("%d",&T);
    for(int i =0;i<T;i++)
    {
        int P,Q,R,S;
        scanf("%d %d %d %d",&P, &Q, &R, &S);
        if (P>Q+R+S)
        {
            printf("YES\n");
        }
        else if (Q>P+R+S)
        {
            printf("yes\n");
        }
        else if (R>P+Q+S)
        {
            printf ("YES\n");
        }
        else if(S>P+Q+R)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;

}

