//in const is a constant variable we can not assign it second time and not redclare it
# include <stdio.h>
int main(){
    // const int a = 10;
    // a=20;
    
    // printf("%d" , a);  // they always through error


const int b = 30;
 printf("\n%d" , b);

 int a;
 printf("\nEnter a value");
 scanf("%d" , &a);// user se input lena  // &a - referance a
 printf("value of A is: %d" , a);

}