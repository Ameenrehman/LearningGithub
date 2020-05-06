#include<stdio.h>
#define n 5
int main()
{
	//PROGRAM TO PRINT THE POSITION OF THE SMALLEST NUMBER FROM ARRAY  
	
	
	int a[10],i,small_pos,pos;
	
	printf("enter the array element :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	small_pos=a[0];
	pos=0;
for(i=1;i<n;i++)
{
	if(a[i]<small_pos)
	{
		small_pos=a[i];
		 pos=i+1;
	}
}


printf("the smallst no is\n");
printf("%d\n",small_pos);
	
printf("the position of the smallest no is %d", pos);	
}
