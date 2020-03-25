#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>
struct os
{
	char* student[20];
	int gifts;
}friend[10];

int comparator(const void* p, const void* q) 
{ 
    return (((struct os*)q)->gifts - ((struct os*)p)->gifts); 
}
int main()
{
	int i,n=10,pass,hold;
	printf("\n********** Enter The Number Of Gifts Purchased By Students ***********\n");
	printf("\n---------------------------------------------------------------------------------------\n");
	for(i=0;i<n;i++)
	
	{
		printf("Student Name: ");
		gets(friend[i].student);
		fflush(stdin);
		printf("No Of Gifts Purchased: ");
		scanf("%d",&friend[i].gifts);
		fflush(stdin);
	}
	printf("\n--------- Full Details ------------ \n");
	
	for(i=0;i<n;i++)
	
    {
    	printf("Student Name = %s,Gifts Purchased = %d \n",friend[i].student,friend[i].gifts);
    	
    	
    }    
    qsort(friend, n, sizeof(struct os),comparator);
    
    
	printf("\n********* Order Of The Students To Be Billed ***********\n");
	printf("----------------------------------------------------------------------------------------\n") ;
    for (i = 0; i < n; i++) 
	{ 
        printf("student = %s, gifts = %d \n", 
               friend[i].student, friend[i].gifts); 
    } 
    
	return 0;
	
}
