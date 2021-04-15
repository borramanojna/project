#include<stdio.h>
#include "declare.h"
#include<stdlib.h>
#include<string.h>
void book(int *point,int cost,int opt, int count, struct customers bookings[])
{          
		int i,j;
		printf("\n                                SCREEN\n\n\n");
		for (i=1;i<=100;i++)
		{
			if (point[i]==0)
				printf("%d\t",i);
			else 
				printf("*\t",i);	
			if(i%10==0)
				printf("\n\n");
		}
		printf("Please enter your name: ");
		scanf(" %19[^\n]%*[^\n]",bookings[count].name);
		

	
		printf("Please enter your phone number: ");
		scanf("%u",bookings[count].phone);
		
		
		printf("Which seat number you want? ");
		scanf("%d",&j);
		

		if (point[j]==1)
			{
				printf("Sorry, this ticket is already booked! Please choose another seat.\n");
				scanf("%d",&j);
			}
		else			
			point[j]=1;
		bookings[count].seat=j;
		
		if (opt==1)
			movie1(j,bookings[count].name,cost);
		else  	
			movie2(j,bookings[count].name,cost);
			

			
			
}
int option(void)
{
	int choice;
	printf("                  **WELCOME TO IMAX CINEMAS** \n");
	printf("||================================================================||\n");
	printf("||             1- BOOK TICKETS                                    ||\n");
	printf("||             2- VIEW ALL BOOKINGS(Admin)                        ||\n");
	printf("||             3- EXIT                                            ||\n");
	printf("||================================================================||\n");
	printf("  Enter your choice: ");
	scanf("%d",&choice);
	return choice;
}
void logs(int count,struct customers bookings[])
{
	int i;
	char pass[10],pwd[10]="2000";
	printf("Enter the password to see details: ");
	scanf("%s",&pass);
	if (strcmp(pass,pwd)==0)
	{
		for (i=0;i<count;i++)
		{
			printf("seat no: %d\t\t-- %s \n",bookings[i].seat,bookings[i].name);
		}
	}
	else                                                 
		printf("Entered password is wrong \n");
		system("PAUSE");
		system("CLS");
	
}             
int choose(void)
{
	int i;
	system("cls");
	printf("\t\t\tCHOOSE THE MOVIE FOR BOOKING\n");
	printf("\t\t\t----------------------------\n\n");
	printf("\t\t\tpress 1 DESPICABLE ME \n\n");
	printf("\t\t\tpress 2 SMURFS\n\n");
	scanf("%d",&i);
	system("cls");
	return i;
}
void movie1(int choice,char name[10],int cost)
{
		system("cls");
		printf("\n\n");
         printf("\t------------------------ TICKET-----------------------\n");
        printf("\t============================================================\n");
        printf("\t  \t\t\tMOVIE:DESPICABLE ME\n");
        printf("\t Customer  : %s\n",name);
        printf("\t\t\t                              Date      : 13-04-2021\n");
        printf("\t                                              Time      : 08:30am\n");
        printf("\t                                              seat      : %d  \n",choice);
        printf("\t                                              price     : %d  \n\n",cost);
	    printf("\t============================================================\n");
        return;
}
void movie2(int choice,char name[10],int cost)
{
		system("cls");
		printf("\n\n");
        printf("\t------------------------ TICKET-----------------------\n");
        printf("\t============================================================\n");
        printf("\t  \t\t\tMOVIE:SMURFS\n");
        printf("\t Customer  : %s\n",name);
        printf("\t\t\t                                          Date      : 13-04-2021\n");
        printf("\t                                              Time      : 8:30am\n");
        printf("\t                                              seat      : %d  \n",choice);
        printf("\t                                              price     : %d  \n\n",cost);
        
        printf("\t============================================================\n");
        return;
}