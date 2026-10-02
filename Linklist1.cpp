#include <stdio.h>
#include <stdlib.h>
typedef struct link
{
 int data ;
 struct link *next;
}list;
list * create()
{

    list * loc=0;
   loc= (list *)malloc(sizeof(list));
   if (loc!=0)
   {
    
   
   
   printf("enter a val:");
   int x; 
   scanf("%d",&x);
   loc->data=x;
   loc->next=0;
   return loc;

}}
list * push(list *r){
    list * p=create();
    r->next=p;
    r=p;
    return r;
}
void display(list *l){
    while(l!=NULL){
        printf("%d\t",l->data);
        l=l->next;
    }
}


int main()
{
    list * p=0;
    list * r=0;
    list * l=0;
     int ch;
    do{
        printf("0. create a node\n1.push \n 2. display\n");
        printf("enter a choice :");
        scanf("%d",&ch);
        switch (ch)
        {
        case 0:
          p=create();
          r=l=p;
          break;
        case 1:
          r=push(r);
          break;
        case 2:
         display(l);
         

         break;
        default:
            break;
        }
    }while(ch<3);

}