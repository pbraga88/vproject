#include <stdio.h>

struct Node{
  struct Node *Next;
  int Data;
};
typedef struct Node NodeType;

NodeType theList[8] ={
  {&theList[1], 1},
  {&theList[2], 10},
  {&theList[3], 100},
  {&theList[4], 1000},
  {&theList[5], 10000},
  {&theList[6], 100000},
  {&theList[7], 1000000},
  {0, 10000000}};
NodeType *HeadPt = theList; // points to first element

int Search(int x){ NodeType *pt;
  pt = HeadPt; // start at beginning
  while(pt){
    if(pt->Data == x) return 1; // found
    pt = pt->Next;
  }
  return 0; // not found
}

int main(){
	int valor = 10;
	int busca;
	busca = Search(valor);
	if (busca){
		printf("Found %i \n", valor);
		return 0;
	}
	printf("Not found %i \n", valor);
}
