#include <stdio.h>
#define max 20
int main()
{
    int BT[max],WT[max],TAT[max];
    int i, j, k, S;
    printf("Enter The Number of Process --> ");
    scanf("%d\n",&S);
    for(i=0;i<S;i++)
    {
        scanf("%d",&BT[i]);
    }
    printf("\nBurst Time\n");
    for(i=0;i<S;i++)
    {
        printf("%d\t",BT[i]);
    }
    printf("\nWaiting Time\n");
    WT[0] = 0;
    for(i=1;i<S;i++)
    {
        WT[i]=BT[i-1]+WT[i-1];
    }
    for(i=0;i<S;i++)
    {
        printf("%d\t",WT[i]);
    }
    printf("\nTurn Around Time\n");
    for(i=0;i<S;i++)
    {
        TAT[i] = WT[i]+BT[i];
    }
    for(i=0;i<S;i++)
    {
        printf("%d\t",TAT[i]);
    }
    return 0;
}
