#include "shopping.h"

int main(void)
{

 char name[100];
 int pin;
 printf("Please Enter Your Name\n");
 gets(name);
 printf("Hello %s, Welcome to our Online Shopping.\n",name);
 printf("Enter the pin\n");
 scanf("%d",&pin);

if(pin==1111 || pin==2222 || pin==3333 || pin==4444 || pin==5555)
 {
 printf("valid pin\n");
 shoping();
 }
 else{
    printf("invalid pin\n");
    exit(0);
 

 printf("Thanks %s for Choosing Us and Visit us again.\n",name);

 return 0;
}


