#include <stdio.h> 
#include <math.h> 
void bintodec(int n){
    int sum = 0;
    int i = 0;
    while (n > 0)
    {
        sum += (n % 10) * pow(2, i);
        n /= 10;
        i++;
    }
    printf("The Decimal Value of Binary Number is %d", sum);}
void dectobin(int n){
  int a[10],i;   
  for(i=0;n>0;i++){    
    a[i]=n%2;    
    n=n/2;}    
  printf("\nBinary of Given Number is=");    
  for(i=i-1;i>=0;i--){    
  printf("%d",a[i]);    
}    
}
int main(){
  int n,x;
  printf("Enter 1 to convert bin. to dec. and 2 for vice versa : ");
  scanf("%d", &x);
  printf("Enter the n : ");
  scanf("%d", &n);
  if (x==1)
  {
    bintodec(n);}
  else if (x==2)
  {
    dectobin(n);}
  return 0;
}