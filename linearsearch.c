
#include<stdio.h>
#include<conio.h>
int linearsearch(int arr[],int n,int key);
int arr[10],n,key;
int main()
{
	int i,pos;
	printf("Enter the number of elements in the list\n");
	scanf("%d",&n);
	printf("Enter the element to be searched\n");
	scanf("%d",&key);
	printf("Enter the values one by one\n");
	for(i=0;i<n;i++)
	{
		printf("Enter element %d \t",i);
		scanf("%d",&arr[i]);
		
	}
	pos=-1;
	pos=linearsearch(arr,n,key);
	if(pos!=-1)
	{
		printf("The element %d is found at postion %d",key,pos+1);
	}
	else
	{
		printf("invalid choice");
	}
}
	int linearsearch(int arr[],int n,int key)
	{
		int i,j,temp;
		for(i=0;i<n;i++)
		{
			if(key==arr[i])
			return i;
			
		}
	}


