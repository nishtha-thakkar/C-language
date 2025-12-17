//problem statement
# include <stdio.h>

int main(){
    float c;
    printf("Enter value of celsius");
    scanf("%f" , &c);
    float F = (9.0/5.0 * c) + 32;
    printf("the temparature is fahrenheit = %f ", F);

    int bs;

     printf("\n Enter the value of salary");
    scanf("%d" , &bs);

    int A,B,C ;
    printf("Enter the value of A");
    scanf("%d" , &A);

    printf("\n Enter the value of B");
    scanf("%d" , &B);

    printf("\nEnter the value of C");
    scanf("%d" , &C);



      
 int HRA = ( bs * A/100);
   

   int DA =  (bs* B/100);

    
   int TA = (bs* C/100);
   

    int output = bs + HRA + DA + TA;
    printf("\ntotal gross salary = %d" , output);





int angle1, angle2, angle3;

printf("\nEnter first angle");
scanf("%d" , &angle1);

printf("\nEnter Second angle");
scanf("%d" , &angle2);

angle3 = 180 - (angle1 + angle2);

printf("\nThird Angle is  %d" , angle3);










    
}

