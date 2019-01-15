#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct node{
	int id;
	char * name;
	char * cat;	
	node * next;
}node;

void show(node * n){
	while (n!=NULL){
		printf("%d --- %s ---- %s \n" ,n->id,n->name,n->cat);
		n=n->next;
	}
}


void add(node * n,int id,char *name,char *cat){
   
  	while(n->next!=NULL){
	  n=n->next;
	  
	  }
		n->next=(node*)malloc(sizeof(node));
		n->next->id=id;
		n->next->name=(char *)malloc(32);
		n->next->cat=(char *)malloc(32);
		strcpy(n->next->name,name);
		strcpy(n->next->cat,cat);
		n->next->next=NULL;
}


node *deletebyid( node *n, int key) {
		if(n == NULL) {
		printf("No BOOK \n");
		
		}
		struct node *temp = n;
		if(n -> id == key) { 
		n = n -> next; 
		free(temp);
		}
		else if(temp -> next == NULL) { 
		printf("The book id that you want to delete is not in library \n");
		return n;
		}
		
		else {
			
		while(temp -> next -> id != key) {
			
		if(temp -> next -> next == NULL) {
		printf("The book id that you want to delete is not in library.\n");
		return n;
		
		}
		temp = temp -> next;
		
		}
		struct node *temp2 = temp -> next;
		temp -> next = temp -> next -> next;
		free(temp2);
		
		}
		
		return n;
		
		}
		
		
void swap(node *a, node *b)
{
    int temp1 = a->id;
    a->id = b->id;
    b->id = temp1;
    
   
     char *temp2 = a->cat;
    a->cat = b->cat;
    b->cat = temp2;
    
     char *temp3 = a->name;
    a->name = b->name;
    b->name = temp3;
}


void sort(struct node *n)
{
    int swapped;
     node *p1;
     node *p2 = NULL;
 
    
    if (p1 == NULL)
        return;
 
    do
    {
        swapped = 0;
        p1 = n;
 
        while (p1->next != p2)
        {
            if (p1->id > p1->next->id)
            { 
                swap(p1, p1->next);
                swapped = 1;
            }
            p1 = p1->next;
        }
        p2 = p1;
    }
    while (swapped);
}


	
node * search(struct node* n, int key) {
	 node* searched = NULL;
	while(n != NULL)
	if(n -> id != key){
	n = n -> next;
	}
	
	else {
	searched = n;
	break;
	}
	
	printf("%d , %s , %s ",searched->id,searched->name,searched->cat);
	}
	
	

int main(){
	

	node * root1;
	root1=(node*)malloc(sizeof(node));
	root1->next=NULL;
	root1->id=11;
	root1->name="CandDataStructures";
	root1->cat="ComputerScience";

	

		add(root1,35,"Turkish","Language");
		
		add(root1,20,"Calculus","Science");
		
		add(root1,5,"Robinson Crusoe","Novel");
		
		add(root1,452,"Frankestein","Novel");
		
		add(root1,36,"English","Language");
		
		add(root1,22,"Astrology","Science");
		
		add(root1,52,"Harry Potter","Novel");
		
		add(root1,4,"Kurk Mantolu Madonna","Novel");
		
		add(root1,32,"Spanish","Language");
		
		add(root1,230,"Physics","Science");
		
		add(root1,14,"Game of Thrones 1","Novel");
		
		add(root1,562,"Hobbits","Novel");
		
		add(root1,135,"German","Language");
		
		add(root1,120,"Chemistry","Science");
		
		add(root1,25,"Game of Thrones 2","Novel");
		
		add(root1,352,"Game of Thrones 3","Novel");
		
		add(root1,145,"Danish","Language");
		
		add(root1,123,"Biology","Science");
		
		add(root1,256,"Game of Thrones 4","Novel");
		
		add(root1,367,"Game of Thrones 5","Novel");
		
		add(root1,131,"Italian","Language");
		
		add(root1,122,"Computer Science","Science");
		
		add(root1,28,"Dracula","Novel");
		
		add(root1,71,"Avengers","Novel");
		
		add(root1,116,"Italian 2","Language");
		
		add(root1,112,"C# Programming Language","Science");
		
		add(root1,328,"Avengers 2","Novel");
		
		add(root1,471,"Simyaci","Novel");	
			
		add(root1,731,"Italian","Language");
		
		add(root1,182,"Computer Science 2","Science");
		
		add(root1,268,"Seker Portakali","Novel");
		
		add(root1,755,"Define Adasi","Novel");	
		
		add(root1,766,"Japanese","Language");
		
		add(root1,166,"Programming","Science");
		
		add(root1,986,"Ci","Novel");
		
		add(root1,712,"Son Ada","Novel");
			
		add(root1,987,"Hindu","Language");
		
		add(root1,999,"Basic Math","Science");
		
		add(root1,379,"Kayýp Sembol","Novel");
		
		add(root1,97,"Melekler ve Þeytanlar","Novel");
		
		add(root1,98,"Chinese","Language");
		
		add(root1,199,"Physic for University","Science");
		
		add(root1,79,"Fi","Novel");
		
		add(root1,222,"Pi","Novel");
		
		add(root1,333,"Russian","Language");
		
		add(root1,457,"C Programming Language","Science");
		
		add(root1,442,"Cehennem","Novel");
		
		add(root1,444,"Huzursuzluk","Novel");
		
	int menu,quit=1;
	while(quit){
	
	printf("                                     BOOK LIST PROJECT    \n ");
	printf("                             		 CHOOSE  \n");
	printf("1- Add new book  \n");
	printf("2- Delete a book by book id  \n");
	printf("3- Look at the list of books  \n");
	printf("4- Sort books by id and look at the list  \n");
	printf("5- Search for book by id   \n");
	printf("6- Exit  \n");
	scanf("%d",&menu);
	

switch(menu){
	
	case 1:
		int hm,i;
		printf("How many books do you add?");
		scanf("%d",&hm);
		
		int d;
		//char *f;
		char f2[50];
		//f=f2;
		//char *e;
		char e2[50];
		//e=e2;
		for(i=0;i<hm;i++){
			
		printf("First enter id , then name , then category" );
		scanf("%d",&d);
		scanf("%s",f2);
		scanf("%s",e2);
		add(root1,d,f2,e2);
		show(root1);
		}
		break;
		
	case 2:
		int del;
		printf("Enter id that you want to delete");
		scanf("%d",&del);
		deletebyid(root1,del);
		show(root1);
		break;
		
	case 3:
		show(root1);
		break;
		
	case 4:	
	sort(root1);
	show(root1);
	
		break;
	case 5:
		int id1;
		printf("Enter the book id that you want to search");
		scanf("%d",&id1);
		search(root1,id1);
	break;

	case 6:
		quit=0;

}
	
}

}
