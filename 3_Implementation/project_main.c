/**
 * @file project_main.c
 * @author Annapurna Bisanalli
 * @brief 
 * @version 0.1
 * @date 2021-09-06
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "airline_reservation.h"
#include<stdio.h>

int main(int argc, char **argv)
{
	int choice, status=0,canc=0, reg=0;
	start=NULL;
	rear=NULL;
	front=NULL;

    
	printf("\t\t\t***AIRLINE BOOKING***\t\t\t\t\n");
	int ch =0;
	while(ch!=4)
	{
	printf("\n\nDo you want to - \n 1. Reserve a ticket? \n 2. Cancel Booking \n 3. Display passenger details \n 4. exit\n\n");
	scanf("%d", &choice);
	switch(choice)
	{
		case 1 :  status=reserve(start);
	              if(status==0)
	                printf("\nBooking Full!! \nYou are added to waiting list. Waiting list number %d", count);
	              else
	                printf(" \nBooking Successful!!! Enjoy your journey! Your Reg No is %d\n\n", num);

	              break;

	    case 2:   printf(" \n Give the Registration number to be cancelled\n");
	              scanf(" %d", &reg);
	              if(reg>num)
	              printf("Invalid!!");
	              else
	              {
	              canc=cancel(reg);
	              if(canc==-1)
	              	printf("\nRegistration number invalid!!\n");
	              else
	              	printf("\nRegistration cancelled successfully\n");
	              	}
	              break;

	    case 3: display();
	    break;
	    case 4: exit(0);
	    break;
	    default: printf("\nWrong choice!\n");




	}

}

}
