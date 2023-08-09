#include <stdio.h>
#include "./Single_Linked_List/SL.h"

int main()
{
    List L1;
	createList(&L1);
	
	insertNode(&L1,0,10);
	printf("%d\n",listSize(&L1));
	insertNode(&L1,0,20);
	printf("%d\n",listSize(&L1));
	insertNode(&L1,0,30);
	printf("%d\n",listSize(&L1));
	insertNode(&L1,0,40);
	printf("%d\n",listSize(&L1));
	insertNode(&L1,0,50);
	printf("%d\n",listSize(&L1));
	insertNode(&L1,1,60);
	printf("%d\n",listSize(&L1));
	printList(&L1);
}