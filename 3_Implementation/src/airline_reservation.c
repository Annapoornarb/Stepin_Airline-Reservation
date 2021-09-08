/**
 * @file airline_reservation.c
 * @author Annapurna Bisanalli
 * @brief 
 * @version 0.1
 * @date 2021-09-06
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "airline_reservation.h"
#define size 5
#include "assert.h"
void create( )
{
	node *new;
	new=(node *)malloc(sizeof(node));
	new->reg_no=1;
	printf("Passport Number : ");
	scanf("%d", &new->passport_no);
	printf("Name: ");
	scanf("%s", new->name);
	printf("Age : ");
	scanf("%d", &new->age);
	printf("Destination : ");
	scanf("%s", new->destination);
	start=new;
	new->next=NULL;
	num++;
}

int reserve(node *start)
{

	if(start==NULL)
	{
   		 create(start);
		 return 1;
	}
	else
	{

	node *temp, *new_node;
	temp=start;
	while(temp->next!=NULL)
	{
	  temp=temp->next;
	}

	new_node=(node *)malloc(sizeof(node));
    printf("Passport Number : ");
	scanf("%d", &new_node->passport_no);
	printf("Name: ");
	scanf("%s", new_node->name);
	printf("Age : ");
	scanf("%d", &new_node->age);
	new_node->next=NULL;
	printf("Destination : ");
	scanf("%s",new_node->destination);
	if(num<=size)
	{
		num++;
		new_node->reg_no=num;
		temp->next=new_node;

		return 1;
	}
	else
	{
		enq(new_node);
		return 0;
	}
}
}


int cancel(int reg)
{
	node *ptr, *preptr, *new;
	ptr=start;
	preptr=NULL;
	if(start==NULL)
	return -1;
	if(ptr->next==NULL && ptr->reg_no==reg)
		{
		start=NULL;
		num--;
		free(ptr);
		return 1;

		}

	else{
	while(ptr->reg_no!=reg && ptr->next!=NULL)
		{
			preptr=ptr;
			ptr=ptr->next;
		}
		if(ptr==NULL && ptr->reg_no!=reg)
			return -1;
		else
			preptr->next=ptr->next;
		free(ptr);
		new=deq();
		while(preptr->next!=NULL)
			preptr=preptr->next;
		preptr->next=new;
		num--;
		return 1;

	}
}

void enq(node *new_node)
{
	if(rear==NULL)
	{
		rear=new_node;
		rear->next=NULL;
		front=rear;
	}
	else
	{
		node *temp;
		temp=new_node;
		rear->next=temp;
		temp->next=NULL;
		rear=temp;
	}
	count++;
}

node* deq()
{
	node *front1;
	front1=front;
	if(front==NULL)
		return NULL;
	else
	{
	    count-- ;
		if(front->next!=NULL)
		{
			front=front->next;
			front1->next=NULL;
			return front1;
		}
		else
		{
			front=NULL;
			rear=NULL;

			return front1;
		}
	}


}


void display()
{
	node *temp;
	temp=start;
	while(temp!=NULL)
	{
		printf("Registration Number: %d\n", temp->reg_no);
		printf("Passport Number: %d\n", temp->passport_no);
		printf("Name : %s\n", temp->name);
		printf("Age: %d\n", temp->age);
		printf("Destination: %s\n", temp->destination);
		temp=temp->next;
    }

}
