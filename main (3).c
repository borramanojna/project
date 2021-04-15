#include "declare.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
 * @brief 
 * initializing structure variables
 */
struct customers bookings[200];
int count=0;

/**
 * @brief 
 * 
 * @return int 
 */

int main()
{/**
 * @brief initializing parameters 
 @param seat
 @param choice
 @param cost
 @param opt
 @param i
 * 
 */

	int **seat,choice,cost=150,opt,i;
	
	seat=(int **)calloc(101,sizeof(int *));
	for (i=0;i<2;i++)
		*(seat+i)=(int *)calloc(101,sizeof(int ));
	int x;
	while(x!=3)
	 
	{
		choice=option();
		switch(choice)
		{
			
			
			case 1:	
				opt=choose();
				book(seat[opt-1],cost,opt,count,bookings);	
				count++;
				break;
		    case 2:
				logs(count,bookings);
				break;	
			case 3:
				x=3;
				break;
		}
	}
}

 

				

			
			
