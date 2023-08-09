/*
 File: 
 Author: 
 Created on 
 Description: 
*/

/**************************************** INCLUDES ***************************************/
#include <stdio.h>
#include <stdlib.h>
#include "SL.h"
/**************************************** HELPER FUNCTION DECLARATION ********************/


/*************************************** GLOBAL VARIABLE DEFINITION *********************/


/*************************************** FUNCTION DEFINITION ****************************/
void createList(List* pList)
{
	pList->head = NULL;
	pList->size = 0;
}

int listSize(List* pList)
{
	return pList->size;
}

void printList(List* pList)
{
	Node* temp = pList->head;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp = temp->next;
	}
    printf("\n");
}

void insertNode(List* pList,int pos,int val)
{
  //step 1: Check Out Of Boundary Condition
  if(pos>pList->size)
  {
     printf("Error: Out Of Boundaries\n");
     return;	 
  }
  
  //step 2: Create node 
  Node* temp = (Node*)malloc(sizeof(Node));
  if(temp == NULL)
  {
	  printf("No Memory Available\n");
	  return;
  }
  
  //step 3: Initialize node
  temp->data = val;
  temp->next = NULL;
  
  //step 4: identify node position
  if(pos == 0)
  {
	  //At the beginning of list
	  temp->next = pList->head;
	  pList->head = temp;
  }
  else if(pos == pList->size)
  {
	  //At the end of list
	  Node* temp1 = pList->head;
	  while(temp1->next != NULL)
	  {
		  temp1 = temp1->next;
	  }
	  temp1->next = temp;
  }
  else if(pos > 0 && pos < pList->size)
  {
	  //At the nth position in list
	  Node* temp1 = pList->head;
	  int i = 0;
	  for(i=0; i<pos-1; i++)
	  {
		  temp1 = temp1->next;
	  }
	  temp->next = temp1->next;
	  temp1->next = temp;
  }
  pList->size ++;  
}

void deleteNode(List* pList,int pos)
{
	//Put Your Code
}

/*************************************** ISR DEFINITION *********************************/    


/*************************************** HELPER FUNCTION DEFINITION *********************/        
