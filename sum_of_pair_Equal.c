#include<stdio.h>
#define Max 100
main()
{


int i,j,n,arr[Max];
int sum;

printf("sum number:");
scanf("%d",&sum);

printf("\n enter the size of array");
scanf("%d",&n);

for(i=0;i<n;i++)
{
printf("\nenter the element:");
scanf("%d",&arr[i]);
}

printf("\n");

for(i=0;i<n;i++)
	for(j=i+1;j<n;j++)
		if(arr[i]+arr[j]==sum)
			printf("%d-%d\n",arr[i],arr[j]);
}
