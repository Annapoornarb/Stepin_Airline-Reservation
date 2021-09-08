/**
 * @file airline_reservation.h
 * @author Annapurna Bisanalli
 * @brief 
 * @version 0.1
 * @date 2021-09-06
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef AIR_H
#define AIR_H
//#define size 5
#include "math.h"
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

typedef struct NODE
{
	int reg_no;
	int passport_no;
	int age;
	char name[20];
	char destination[20];
	struct NODE *next;
} node;

node* deq();
void create();
int reserve(node*);
int cancel(int);
void enq(node*);
void display();


node *start;
node *front;
node *rear;
int count=0;
int num=0;

#endif 
