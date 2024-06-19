#include<stdio.h>
void main()
{
    //swap two variable by using extra variable 
    int a,b,temp;
    printf("enter two number: ");
    scanf("%d %d",&a,&b);
    printf("values before swap are a=%d b= %d",a,b);
    /*temp=a;
    a=b;
    b=temp;*/
    //swap two number without third variable
    a=a+b;
    b=a-b;
    a=a-b;
    printf("user getting value after swapping are a=%d b= %d",a,b);


}