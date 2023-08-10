#include <stdio.h>
#include "./Single_Linked_List/SL.h"

int main()
{
	List L1;
	createList(&L1);
	
	insertNode(&L1,0,10);
	insertNode(&L1,0,20);
	insertNode(&L1,0,30);
	insertNode(&L1,0,40);
	insertNode(&L1,0,50);
	insertNode(&L1,1,60);
	
	printf("%d\n",searchNode(&L1,10));
	printList(&L1);
	printf("%d\n",searchNode(&L1,50));
	printf("%d\n",searchNode(&L1,80));
	
	printList(&L1);
	
	deleteNode(&L1,0);
	printList(&L1);
	deleteNode(&L1,4);
	printList(&L1);
    deleteNode(&L1,2);
	printList(&L1);
	printf("%d\n",listSize(&L1));
	
	clearList(&L1);
	printList(&L1);
	printf("%d\n",listSize(&L1));
}