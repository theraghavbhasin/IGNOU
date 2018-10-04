#include<stdio.h>
#include<conio.h>

/*
Q : Design algo, flowchart, interactive program
- Calculate Simple Interest
- Calculate Compound Interest

SI = PRT/100

CI = (PR/n)^nT

P = Principal
R = Rate
T = Time (years)
n = Number of times per year (default=1)

*/

void main()
{
	int p,r,t,n;
	int simpleI;
	int compoundI;

	clrscr();
	printf("Please enter the details when prompted :\n");
	printf("Principal : ");
	scanf("%d",&p);

	printf("Rate : ");
	scanf("%d",&r);

	printf("Time : ");
	scanf("%d",&t);

	printf("Number of times (compound only) : ");
	scanf("%d",&n);

	simpleI=p*r*t;
	compoundI=pow(((p*r)/n),n*t);

	printf("\n- - - - -\n- - - - -\n");
	printf("\nSimple Interest = %d \n",simpleI);
	printf("\nCoumpund Interest = %d \n",compoundI);
	getch();
}