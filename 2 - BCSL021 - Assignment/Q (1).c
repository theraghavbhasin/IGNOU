/*
Q1. Convert decimal to hexadecimal

*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int decNum;
	int list[16];
	int i=0;
	printf("Please enter a decimal number");
	scanf("%d",&decNum);

	int flag=decNum;
	while(flag!=1) {
		list[i]=flag%16;
		flag=flag/16;
		i++;
	}

	for(j=i;j<=0;j--) {
		key=list[j];
		if(list[j]>9)
		{
			switch(key)	{
				case 10:		printf("A");break;
				case 11:		printf("B");break;
				case 12:		printf("C");break;
				case 13:		printf("D");break;
				case 14:		printf("E");break;
				case 15:		printf("F");break;
			}
		}
		else {
			printf("%d",list[j]);
		}
	}
	getch();
}