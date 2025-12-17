#include <stdio.h>

int main()
{

int score;
    char grade;
    printf("Enter score out of 100 =");
    scanf("%d" , &score);

    grade = (score>=90 && score<=100)?'A':
    (score >= 80  )?'B':
    (score >= 60 )?'C' :
    (score >= 40 )?'D' :
    (score >= 35 )?'E' :
                   'F';

    printf("grade = %c" , grade );

    int marks;
    printf("\nEnter Your Marks");
    scanf("%d" ,  & marks);

    switch(marks/10){
        case 10:
        printf(" Excellent Work!");
        break;
        case 9:
        printf(" Excellent Work!");
        break;
        case 8:
        printf(" Well Done!");
        break;
         case 7:
        printf(" Well Done!");
        break;
        case 6:
        printf(" Good Job!");
        break;
        case 5:
        printf(" You are passed , you can do better");
        break;
        case 4:
        printf(" You are passed , you can do better!");
        break;
        case 3:
        printf(" You can do better!");
        break;
         case 1:
        printf(" You can do better");
        break;
    }

       int marks2;
       printf("\n Enter Your marks2 ");
       scanf("%d" , &marks2);

      if(marks2<35){
            printf("Please Try again next time!");
        }else{
            printf("Congratulation! You are eligible for the next level");

        }




        
        
      





    }

    
