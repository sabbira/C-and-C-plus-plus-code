#include<stdio.h>
int main()
{
    int a[6]={3,9,10,21,33,55};
    int end,start,mid,key,i;
    start=0;
    end=5;
    printf("key:");
    scanf("%d",&key);
    do{
        mid=((start+end)/2);
        printf("start:%d\tend:%d\tmid:%d\tkey:%d\ta[mid]:%d\t\n",start,end,mid,key,a[mid]);
        if(a[mid]==key){
            printf("found at :%d\n",mid);
            break;
        }
        else if( a[mid]>key){
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
        while( start<=end);
        if( start>end){
            printf("not found");

    }
    return 0;
}

