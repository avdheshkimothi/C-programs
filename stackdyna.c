#include <stdio.h>
#include <stdlib.h>
typedef struct list
{
   int val;
   struct list *next;
}l;
l* create()
{
     l * p =0;
     p=(l*)malloc(sizeof(l));
     printf("\nenter a val :");
     int x;
     scanf("%d",&x);
     p->val=x;
     p->next=0;
     
return p;
}
l * push(l *p , l * le)
{
   p=create();
   p->next=le; 
   le=p;
return le;
}
l *pop(l* le)
{
  l * a=le;
  if(le==0)
  {
    printf("empty stack\n");
  }
  else
   {
    le=le->next;
    free(a);

  }
  return le;
}
void display(l * le){
    while(le!=0){
        printf("%d\t",le->val);
        le=le->next;
    }
}

int main()
{
    l*p=0;
    l *le=0;
    int ch;
    do
    {
     printf("1.create first node of stack \n 2. push \n 3. display \n4 . pop");
     printf("\nenter your choice :");
     scanf("%d",&ch);
     switch (ch)
     {
     case 1:
        le=create();
        break;
    case 2:
        le=push(p,le);
        break;
    case 3:
        display(le);
        break;
    case 4:
        le=pop(le);
        break;
         
     
     default:
        break;
     }
    } while (ch<=4);
    

}