#include <stdio.h>

int main() {
char a;
printf("Enter character: ");
scanf("%c",&a);
int m= a ;
if (m>=48&&m<=57)
{
printf("%c is a number  character.",a);
}
else if((m>=65&&m<=90)||(m>=97&&m<=122))
{
 printf("%c is a alphabat character.",a);
}
else{
 printf("%c is a special character.",a);
 }
return 0;
}