/*
 File: SL.h
 Author: Zeyad
 Created on 7,August,2023 at 5:48 pm
 Description: contain interfaces of single linked list
*/

#ifndef SL_H
#define SL_H

/****************************Data Type Declaration**************************************/
typedef int ListEntry;

typedef struct Node
{
	ListEntry data;
	struct Node* next;
}Node;

typedef struct List
{
	Node* head;
	int size;
}List;

typedef enum
{
	false,
	true
}bool;

/*******************************Macro Definition*****************************************/
#define NULL ((void *)0)

/************************Function Declaration******************************************/
void createList(List* pList);
int listSize(List* pList);
void insertNode(List* pList,int pos,ListEntry val);
void printList(List* pList);
void deleteNode(List* pList,int pos);
void clearList(List* pList);
bool searchNode(List * pList,ListEntry val);








#endif