/* Menu driven program  */
#include<stdio.h>
int main()
{
   int a[50],i,n,ch,num;
   char cname[20],s[50][50];
   void insertion(int a[50],int n);
   void bubble(int a[50],int n);
   void selection(int a[50],int n);
   void linear_search(int a[50],int num,int n);
   void binary_search(char s[50][50],char cname[20]);
   
   printf("Enter array limit::");
   scanf("%d",&n);
   printf("enter array elements::");
   for(i=0; i<n; i++)
   {
   	scanf("%d",&a[i]);
   }
   do
   {
   	printf("\n 1.insertion \n 2.bubble \n 3.selection \n 4.linear_search \n Enter choice to search::");
   	scanf("%d",&ch);
   	switch(ch)
   	{
   	   	case 1:insertion(a,n);
   	   	       break;
   	   	case 2:bubble(a,n);
   	   	       break;
   	   	case 3:selection(a,n);
   	   	       break;
   	   	case 4:printf("Enter number to search:");
   	   	       scanf("%d",&num);
			   linear_search(a,num,n);
   	   	       break;
   	   	case 5:printf("Enter name to search::");
	           scanf("%s",&cname);
			   binary_search(s,cname);
   	   	       break;
   	   	default :printf("Invalid choice....");   	   	
	}
   }while(ch<6);
}
void insertion(int a[50],int n)
{
	int i,j,t,num;
	for(i=1; i<n; i++)
    {
	num=a[i];
	for(j=i-1; j>=0 && num<a[j]; j--)
	 { 
	   t=a[j+1];
	   a[j+1]=a[j];
	   a[j]=t;	
	 }
	}
    printf("\n insertion Sorted elements=");
    for(i=0; i<n; i++)
    {
    	printf("%d\t",a[i]);
	}
}
void bubble(int a[50],int n)
{
   int pass,i,t;
   for(pass=1; pass<n; pass++)
   {
   for(i=0; i<n-pass; i++)
     {
       	if(a[i]>a[i+1])
       	{
       	   t=a[i];
		   a[i]=a[i+1];
		   a[i+1]=t;
		}
     }
   }
   printf("\n bubble Sorted elements::");
    for(i=0; i<n; i++)
    {
    	printf("%d\t",a[i]);
	}
}
void selection(int a[50],int n)
{
	int i,j,index,min,t;
	for(i=0; i<n; i++)
	{
		min=a[i];
		index=i;
		for(j=i+1; j<n; j++)
		{
			if(a[j]<min)
			{
				min=a[j];
				index=j;
			}
		}
		t=a[i];
		a[i]=a[index];
		a[index]=t;
	}
	printf("\n selection sort elements::");
	for(i=0; i<n; i++)
    {
    	printf("%d\t",a[i]);
	}
}
void linear_search(int a[50],int num,int n)
{
	int i,flag=0;
	for(i=0; i<n; i++)
	{
		if(a[i]==num)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
		printf("\n Number is found...\n");
	else
	    printf("\n Number is not found...\n");
}
void binary_search(char s[50][50],char cname[20])
{
  //  char s[50][50],cname[20];
	int i,n1,top,mid,bottom,flag=0;
	
	printf("Enter limit::");
	scanf("%d",&n1);
	printf("Enter n city's name::");
	for(i=0; i<n1; i++)
	{
		scanf("%s",&s[i]);
	}
//	printf("Enter name to search::");
//	scanf("%s",&cname);
	top=0;
	bottom=n1-1;
	while(top<=bottom) 
	{
		mid=(top+bottom)/2;
		if((strcmp(s[mid],cname))==0)
		{
			flag=1;
			break;
		}
		if((strcmp(cname,s[mid]))>0)
		 top=mid+1;
		else
		bottom=mid-1;
	}
	if(flag==1)
	  printf("name is found...");
	else
	  printf("name is not found...");
}
