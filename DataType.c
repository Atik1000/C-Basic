// Hello world
#include<stdio.h>
int main(){
    printf("Hello World");
    return 0;
}
//Three line print
#include<stdio.h>
int main(){
    printf("I \n Love \n Bangladesh \n");
    return 0;
}
// input and print

#include<stdio.h>
int main(){
   int n;
   printf("Enter the number :");
   scanf("%d",&n);
   printf("%d",n);
   return 0;
}
// sum of two number 
#include<stdio.h>
int main(){
   int a,b;
   printf("Enter the number :");
   scanf("%d %d",&a,&b);
   printf("%d",a+b);
   return 0;
}

//  sum,sub,mul,div,subs
#include <stdio.h>

int main(){
  int a,b;

  printf("Enter two int input number :");
  scanf("%d%d",&a,&b);
  printf("%d\n",a+b);
  printf("%d\n",a-b);
  printf("%d\n",a*b);
  printf("%d\n",a/b);
  printf("%d\n",a%b);
  

}
//  school distance
#include <stdio.h>

int main(){
  int s,d;
  printf("Enter two int input number :");
  scanf("%d%d",&s,&d);
  printf("%d cm\n", s*d);
}
//  3 subject number summation
#include <stdio.h>

int main(){
  int sub1,sub2,sub3;
  printf("Enter two int input number :");
  scanf("%d%d%d",&sub1,&sub2,&sub3);
  printf("%d \n", sub1+sub2+sub3);
}
// 10 student count taka summation 
#include <stdio.h>

int main(){
  int taka,total=0;
  printf("Enter 1st man count");
  scanf("%d",&taka);
  total=total+taka;
    printf("Enter 2nd man count");
  scanf("%d",&taka);
  total=total+taka;
    printf("Enter 4th man count");
  scanf("%d",&taka);
  total=total+taka;
    printf("Enter 5th man count");
  scanf("%d",&taka);
  total=total+taka;
    printf("Enter 6th man count");
  scanf("%d",&taka);
  total=total+taka;
    printf("Enter 7th man count");
  scanf("%d",&taka);
  total=total+taka;
    printf("Enter 8th man count");
  scanf("%d",&taka);
  total=total+taka;
    printf("Enter 9th man count");
  scanf("%d",&taka);
  total=total+taka;
    printf("Enter 10th man count");
  scanf("%d",&taka);
  total=total+taka;
  printf("%d",total);
return  0;


}
// Hexa decimal number print 
#include <stdio.h>
int main(){
  int input;
  scanf("%d",&input);
  printf("%x\n",input);
  return 0;
}
//  7 day print
#include <stdio.h>
int main(){
printf("sut\n");
printf("sun\n");
printf("mon\n");
printf("tue\n");
printf("wed\n");
printf("thu\n");
printf("fri\n");
}
//  12 month print 
#include <stdio.h>
int main(){
printf("january\n");
printf("february\n");
printf("march\n");
printf("april\n");
printf("may\n");
printf("june\n");
printf("july\n");
printf("august\n");
printf("september\n");
printf("octobor\n");
printf("november\n");
printf("december\n");
}
// bio print 
#include <stdio.h>
int main(){
printf("Kazi Atik Foysal\n");
printf("ATM Latifur Rahman\n");
printf("Afroza Khatun\n");

}

//  total exam and pen count 
#include <stdio.h>
int main(){
int exam,pen;
scanf("%d",&exam);
pen=exam;
printf("%d",pen);

}
// total pen price print 
#include <stdio.h>
int main(){
int total,pen;
printf("Enter one pen price and total pen:");
scanf("%d%d",&pen,&total);

printf("%d",pen*total);

}

// egg print 
#include <stdio.h>
int main(){
int e,b;
printf("Enter egg number and broken egg:");
scanf("%d%d",&e,&b);

printf("%d",e-b);

}

//  full week print 
#include <stdio.h>
int main(){
int n,b=7;
printf("Enter Day number input:");
scanf("%d",&n);
printf("%d",n/b);
return 0;

}

// week count serial number print
#include <stdio.h>
int main(){
int n,b=3;
printf("Enter week number input:");
scanf("%d",&n);
printf("%d",n*b);
return 0;

}
// total apple weight 
#include <stdio.h>
int main(){
int apple,weight;
printf("Enter apple number and everage weight:");
scanf("%d%d",&apple,&weight);
printf("Total apple weight  %d",apple*weight);
return 0;

}
//  number of last chocklate print 
#include <stdio.h>
int main(){
int chocklate,friend;
printf("Enter chocklate number and friend number:");
scanf("%d%d",&chocklate,&friend);
printf("number of last chocklate  %d",chocklate%friend);
return 0;

}
//  number of chocklate friend count
#include <stdio.h>
int main(){
int chocklate,friend;
printf("Enter chocklate number and friend number:");
scanf("%d%d",&chocklate,&friend);
printf("number of last chocklate  %d",chocklate/friend);
return 0;

}
//  octal number print
#include <stdio.h>

int main(){
    int num;
    scanf("%d",&num);
    printf("%o\n", num);

    return 0;
}
//  sum of 3 digit number
#include <stdio.h>

int main(){
 int n;
 printf("Enter a 3 digit number :");
 scanf("%d",&n);
 printf("%d",n/100+n/10%10+n%10);
}