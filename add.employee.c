#include<stdio.h>
struct address{
    char city[20];
    int pincode[6];
    struct employee
    {
        char name[30];
    }e;
    };
int main(){
     int n;
    printf("Enter no.of inputs to be made: ");
    scanf("%d",&n);
    struct address a[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter Employee's City: ");
        scanf("%s",a[i].city);
        printf("Enter Employee's Name: ");
        scanf("%s",&a[i].e.name);
        printf("Enter Employee's Pincode: ");
        scanf("%s",a[i].pincode);
    }
    printf("Employee's info: \n");
    for (int i = 0; i < n; i++)
    {
        printf("City: %s Pincode: %s Name: %s\n",a[i].city,a[i].pincode,a[i].e.name);
    }
    return 0;
}