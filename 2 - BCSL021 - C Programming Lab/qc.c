#include<stdio.h>
#include<conio.h>

/*
Read integers until a 0 is entered. 

If it encounters 0 as input, then it should display: 
· the total number of even and odd integers
· average value of even integers
· Average value of odd integers. 

Note: Useswitch statement for selection
*/

void main()
{
	int oddsum=0, evensum=0, oddcount=0, evencount=0, num;

	printf("Please enter a number (program will stop when 0 is entered)");
	printf("Number : ");
	scanf("%d",&num);

	while(num!=0)
	{
		if(num%2==0) {
			evencount++;
			evensum=evensum+num;
		}
		else {
			oddcount++;
			oddsum=oddsum+num;
		}
		printf("Number (%d) : ",oddcount+evencount+1);
		scanf("%d",&num);
	}

printf("\n - - - - - - - - - \n\nResults\n\n");

printf("Count of Numbers : \n");
printf("Odd : %d\n",oddcount);
printf("Even : %d\n"evencount);
printf("Total : %d\n",total);

printf("Average : \n");
printf("Odd : %d\n",oddsum/oddcount);
printf("Even : %d\n"evensum/evencount);
}










