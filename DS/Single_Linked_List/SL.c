/*
 File: SL.c
 Author: Zeyad
 Created on 7,August,2023 at 5:48 pm
 Description: contain implementations of functions inside single linked list
*/

/*******************************Includes***********************************************/
#include <stdio.h>
#include <stdlib.h>
#include "SL.h"


/***************************Function Definition******************************************/

void createList(List* pList)
{
	pList->head = NULL;
	pList->size = 0;
}

int listSize(List* pList)
{
	return pList->size;
}

void insertNode(List* pList,int pos,ListEntry val)
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


void deleteNode(List* pList,int pos)
{
  Node* temp1 = pList->head;
  
  if(pos >= pList->size)
  {
     printf("Error: Out Of Boundaries\n"); 
     return;	 
  }
  else if(pos == 0)
  {
	//The deleted node at the beginning of list
	pList->head = temp1->next;
	free(temp1);
  }
  else
  {
	  //The deleted node at the end of list or at ith position
	  int i = 0;
	  for(i=0;i<pos-1;i++)
	  {
		  temp1 = temp1->next;
	  }
	  Node* temp2 = temp1->next;
	  temp1->next = temp2-> next;
      free(temp2);	  
  }
  pList->size --;
}

void clearList(List* pList)
{
	Node*temp = pList->head;
	while(temp!=NULL)
	{
		temp = temp->next;
		free(pList->head);
		pList->head = temp;
		pList->size--;
	}
}

bool searchNode(List * pList,ListEntry val)
{
   Node* temp = pList->head;
   while(temp!=NULL)
   {
	   	if(temp->data == val)
		   return true;
	   temp = temp->next;
   }   
   return false;
}