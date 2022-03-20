#include<stdio.h>
#include<conio.h>
main()
{
int a;
clrscr();
printf("enter a number\n");
scanf("%d",&a);
if(a>=85 && a<=100)
printf("grade A");
else if(a>=70 && a<=84)
printf("grade B");
else if(a>=55 && a<=69)
printf("grade C");
else if(a>54 && a<=40)
printf("grade D ");
else
printf("grade F ");
getch();
}
