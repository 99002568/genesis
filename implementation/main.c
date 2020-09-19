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
 password( pin);



 printf("Thanks %s for Choosing Us and Visit us again.\n",name);

 return 0;
}




