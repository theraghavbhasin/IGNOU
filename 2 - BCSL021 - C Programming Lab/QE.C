#include<stdio.h>
#include<conio.h>
#include<math.h>
/*
Write a program to find all Armstrong number in the range of 0 and 999 
Hint:  An Armstrong number of three digits is an integer such that the 
sum of the cubes of its digits is equal to the number itself. 
For example, 371 is an Armstrong number since 3**3 + 7**3 + 1**3 = 371. 
*/
void main()
{
	int i,num,ones,tens,hundreds,arm;
	clrscr();
	for(i=0;i<1000;i++) {

		if(i>99) {


			num=i;
			ones = num%10;
			num=num/10;
			tens = num%10;
			num=num/10;
			hundreds = num%10;
			num=num/10;



			arm = pow(ones,3)+pow(tens,3)+pow(hundreds,3);


			if (arm==i) {
				printf("%d\t",i);
			}

		}
	}
	getch();
}




