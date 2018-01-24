#include<stdio.h>
void main()
{
    int N,K,p;
    printf("ENTER TWO VALUE\n");
    scanf("\t%d",&N);
    scanf("\t%d",&K);
    p=N*K;
    if(p%2==0)
    printf("\tPRODUCT VALUE\t%d\tIS EVEN",p);
    else
    printf("\tPRODUCT VALUE\t%d\tIS ODD",p);
}
