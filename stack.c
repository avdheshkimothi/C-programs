#include <stdio.h>
#define max 100000
int  push(int stack[],int top){
    if(top==max-1)
    {
        printf("\nstack is full \n");
    }
    else
    {
        printf("enter value to push :");
        int x;
        scanf("%d",&x);
        top+=1;
        stack[top]=x;
    }
    return top;
}
int  pop(int stack[],int top)
{
    if(top==-1){
        printf("\n stack is empty \n");
    }
    else{
      top-=1;
    }
    return top;

}
void display(int stack[],int top)
{
     if(top==-1){
        printf("\n stack is empty \n");
    }
    else{
  for(int i=0;i<=top;i++)
  {
    printf("%d\t",stack[i]);
  }
    }
}
void Top(int stack[],int top){
     if(top==-1){
        printf("\n stack is empty \n");
    }
    else{

    
    printf("\ntop element is %d \n",stack[top]);
}}
void size(int top)
{
   if(top==-1){
        printf("\n stack is empty \n");
    }
    else{
  printf("\nsize of stack is %d \n",top+1);
}}
void reverse(int stack[],int top)
{
     if(top==-1){
        printf("\n stack is empty \n");
    }
    else{
        for(int i=0;i<(top+1)/2;i++){
         int temp=stack[i];
         stack[i]=stack[top-i];
         stack[top-i]=temp;
            
        }
    }

}
int main()
{
  int top=-1;
  int stack[max];
  int ch;
  do{
    printf("1.push \n 2. pop \n 3. display\n 4. Top element \n 5. size of stack \n 6. reverse stack \n");
    printf("enter your choice :");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        top=push(stack,top);
        break;
    case 2:
        top=pop(stack,top);
        break;

    case 3:
         display(stack ,top);
         break;
    case 4:
         Top(stack,top);
         break;
    case 5:
         size(top);
         break;
    case 6:
         reverse(stack,top);
         break;
    default:
        break;
    }
  }while(ch!=10);
  


}