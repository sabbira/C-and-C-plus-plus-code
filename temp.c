#include<stdio.h>

int main()
{
    int a,b,temp;

    while(scanf("%d%d",&a,&b)!=EOF){

    temp=a;
    a=b;
    b=temp;

    printf("%d %d\n",a,b);
    }
    return 0;
}
