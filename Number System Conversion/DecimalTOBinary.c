#include<stdio.h>
int main()
{
    int dec,bin,r,rev=1,b;
    printf("\nEnter no. in Decimal : ");
    scanf("%d",&dec);
    while (dec>0)
    {
        r=dec%2;
        dec=dec/2;
        bin=r;
        printf("%d",bin);
    }
    // while (bin>0)
    // {
    //     b=bin%10;
    //     rev=rev*10+b;
    //     bin=bin/10;

    // }
    // printf("%d",rev);  
    
    return 0;
}