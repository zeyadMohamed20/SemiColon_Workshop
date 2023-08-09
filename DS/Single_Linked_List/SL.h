/*
 File: SL.h 
 Author: Zeyad
 Created on 7 August,2023 
 Description: Contain declaration of linked list functions
*/
#ifndef SL_H
#define SL_H

/******************************** MODULE DATA SHARING *********************************/


/******************************** INCLUDES *******************************************/


/******************************** MACRO DECLARATION **********************************/
#define NULL ((void *)0)

/******************************** MACRO LIKE FUNCTIONS ******************************/


/******************************** DATATYPE DECLARATION *********************************/
typedef struct Node
{
	int data;
	struct Node* next;
}Node;

typedef struct 
{
	Node* head;
	int size;
}List;

/******************************** FUNCTION DECLARATION *********************************/
void createList(List* pList);
int listSize(List* pList);
void printList(List* pList);
void insertNode(List* pList,int value, int pos);
void deleteNode(List* pList,int pos);


#endif