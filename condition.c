// Big number

#include<stdio.h>
int main(){
int a,b,c;
printf("Enter three integer number:");
scanf("%d %d %d",&a,&b,&c);
if(a>b && a>c){
  printf("%d is largest number:",a);
}
else if(b>a && b>c){
  printf("%d is largest number:",b);
}
else{
  printf("%d is largest number:",c);
}
}

// age illegal

#include<stdio.h>
int main(){
  int age;
  printf("Enter our age:");
  scanf("%d",&age);
  if(age<0){
    printf("\n %d  You shoud never born:",age);
  }
  else if (age>=12 && age<=19){
    printf("\n %d You are child:",age);
  }
  else if(age>19 && age<=40){
    printf("\n You are young! %d",age);
  }
  else{
    printf("\n %d wish your long life",age);
  }
}
// leap years
#include <stdio.h>
int main()
{
    int year;
    printf("Enter  the year to be tested:");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        printf("%d is leap year:", year);
    }
    else
    {
        printf("%d is not leap year:", year);
    }
}
// result
#include <stdio.h>
int main()
{
    float mark;
    printf("Enter the mark:");
    scanf("%f", &mark);
    if (mark > 100 && mark < 0)
        printf("Invalid mark");
    else if (mark < 40)
        printf("Grate is F");
    else if (mark < 45)
        printf("Grade is D");
    else if (mark < 50)
        printf("Grade is C");
    else if (mark < 55)
        printf("Grade is B");
    else if (mark <= 60)
        printf("Grade is A");
    else
        printf("Grade is A+");
}
// character finder
#include <stdio.h>
int main()
{
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    if (c > 64 && c < 91)
    {
        printf("It is uppercase character");
    }
    else if (c > 97 && c < 122)
    {
        printf("It is in lowercase character");
    }
    else
    {
        printf("Is not a character");
    }
    return 0;
}