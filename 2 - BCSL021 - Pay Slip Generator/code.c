/* 

Payslip Generator Program 
IGNOU 2nd Semester 
BCSL-021 : C Language Programming  

Version : v0.1
Writers : Akhilesh, Raghav, Ramprakash, Siddharth, Utkarsh
Link : https://github.com/raghavb95/IGNOU


*/
#include<stdio.h>
#include<conio.h>

// Categories broken down into different functions for simpler understanding. 
void faculty();
void nonAcademicStaff();
void consultants();
void skilledWorkers();
void securityPersonnel();

//START of Code Execution
void main()
{
	// Declaration and Initalisation of Variables
	int choice=0; // Choice/Key for the Main Menu

	// Start the Do ... While Loop
	// This means the code will run first, then checked.
	do {
		// Display the Menu
		printf("Please select an option from below : \n");
		printf("(1) - Faculty (Professors)\n");
		printf("(2) - Non-Academic Staff\n");
		printf("(3) - Consultants\n");
		printf("(4) - Daily Wage and Skilled Workers\n");
		printf("(5) - Security Peronals\n");
		printf("(6) - Quit\n");

		// Ask user to choose an item
		scanf("%d",&choice);

		// Show different screens based on user's response
		switch(choice) {
			case 1 : 	faculty();
						break;

			case 2 : 	nonAcademicStaff();
						break;

			case 3 : 	consultants();
						break;

			case 4 : 	skilledWorkers();
						break;

			case 5 : 	securityPersonnel();
						break;

			case 6 : 	choice=6; //Breakout key for the loop = 0
						break;

			default : 	clrscr();
						printf("Please enter a valid response : \n\n");
						choice=0;
		}
	}
	while(choice!=6); //Condition of the loop, will break when 6 is entered.

	//Exit Screen - Message
	clrscr();
	printf("Thank You for using PaySlip Generator v0.1\n");
	getch();
	//END of Code Exection
}





void faculty() {
	int flag=0;
	while(flag==TRUE) {
		flag=FALSE;
		switch(flag) { //To Step down deeper into each category.
			case 1:		
						
						break;

			case 2:		
						
						break;

			case 3:		
						
						break;

			default:	printf("Please enter a valid response :\n");
						flag=TRUE;
		}
	}
}

void nonAcademicStaff() {

}

void consultants() {

}

void skilledWorkers() {

}

void securityPersonnel() {

}