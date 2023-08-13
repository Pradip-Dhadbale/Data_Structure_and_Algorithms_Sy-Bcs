#include<stdio.h>

int linear(int a[],int n,int key)
{
    int flag=0,i;
    for( i=0; i<n; i++)
    {
        if(a[i]==key)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("\nkey not found");
    else
        printf("\nkey is found:=%d",i);
}

int sentinel(int a[],int n,int key)
{
    a[n]=key;
    int i=0;
    while(a[i]!=key)
    {
        i++;
    }
    if(i==n)
        printf("\nkey not found...");
    else
        printf("\nkey is found at position=%d",i);
}

int binary(int a[],int n,int key)
{
    int top=0,mid,bottom=n-1,i;
    while(top<=bottom)
    {
        mid=(top+bottom)/2;
        if(a[mid]==key)
        {
            return mid;
            break;
        }
        if(key>a[mid])
            top=mid+1;
        else
            bottom=mid-1;
    }
    return -1;
}

int main()
{
    int i,n,a[100],top=0,mid,flag=0;
    int bottom=n-1,key,ch,pos=0;
    
    printf("\n enter limit: ");
    scanf("%d",&n);
    printf("\n enter n number:");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    do {
        printf("\nenter search key:");
        scanf("%d",&key);

        printf("\n1=linear:\n2=sentinel:\n3=binary:\n");
        printf("\nEnter choice::");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            linear(a,n,key);
            break;
        case 2:
            sentinel(a,n,key);
            break;
        case 3:
            pos=binary(a,n,key);
            if(pos != -1)
                printf("\nkey is found at position = %d",pos);
            else
                printf("\nkey is not found..");
            break;
        default:
            printf("\ninvalid choice...");
            break;
        }
    } while(ch<4);
}