#include<stdio.h>
int main(){
    int x=5;
    int *p;
    p=&x;
    // x value print 
    printf("%d\n",x);
    // x address print 
    printf("%d\n",&x);
    // x address print 
    printf("%d\n",p);
    printf("%d\n",*p);
    // pointer address print
    printf("%d\n",&p);
    
    return 0;
}