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


// Loop
// #include<stdio.h>
// int main(){
//   char x;
//   for (x='a';x<='z';x++){
//     printf("%c\t",x);
//   }
//   return 0;
// }
// #include<stdio.h>
// int main(){
//   int number,i;
//   scanf("%d",&number);
//   for(i=1;i<=10;i++){
// printf("%4d X %2d=%4d\n",number,i,number*i);
//   }
// }

// #include <stdio.h>
// int main(){
//   int num=3;
//   for(int i=1;i<=100;i++,num=num+3){
    
//     printf("%d\t",num);
//   }
// }

// #include<stdio.h>
// int main(){
//   char c;
//   int s=0;
//   while(scanf("%c",&c)&&c!='\n'){
//     s+=c-'0';
//   }
//   if(s%3==0){
//     printf("yes");
//   }
//   else{
//     printf("No");
//   }
// }

// #include<stdio.h>
// int main(){
//   char c;
//   int n;
//   scanf("%c %d",&c,&n);
//   for(int i=1;i<=n;i++){
//     printf("%c %d\n",c,i);
//   }
// }

// #include<stdio.h>
// int main(){
//   int i,n,r,sum=0;
//   for(scanf("%d",&n);n!=0;n=n/10){
//     r=n%10;
//     sum=sum+r;

//   }
//   printf("%d",sum);

// }
#include<stdio.h>
int main(){
  int sum=0,r,t;
  scanf("%d",&t);

  while(t!=0){
    r=t%10;
    sum=sum+r;
    t=t/10;
    

  }
  printf("%d",sum);
}
