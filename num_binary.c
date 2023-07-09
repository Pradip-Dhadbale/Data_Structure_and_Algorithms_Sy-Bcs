#include<stdio.h>
int main()
{
    char s[50][50],cname[20];
	int i,n1,top,mid,bottom,flag=0;
	
	printf("Enter limit::");
	scanf("%d",&n1);
	printf("Enter n city's name::");
	for(i=0; i<n1; i++)
	{
		scanf("%s",&s[i]);
	}
	printf("Enter name to search::");
	scanf("%s",&cname);
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