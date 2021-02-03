// #include<stdio.h>
// int main(){
// int a,b,c;
// printf("Enter three integer number:");
// scanf("%d %d %d",&a,&b,&c);
// if(a>b && a>c){
//   printf("%d is largest number:",a);
// }
// else if(b>a && b>c){
//   printf("%d is largest number:",b);
// }
// else{
//   printf("%d is largest number:",c);
// }
// }
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