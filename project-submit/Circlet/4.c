#include <stdio.h>

// Que-1 - Develop a programme that print the given Right half tringle pattern 
int main()
{

    for(int i = 41; i <= 45; i++){
        for(int j = 41; j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");

    }
     printf("\n");


// Que-2 - Develop a programme that print the given Floyd's tringle pattern

    int num = 11;                         // dry run

    for(int i = 1; i<=4 ; i++){           // 1<=4 , 2<=4 , 3<=4 , 4<=4 , 5<=4-condition false- loop completed
        for(int j = 1 ; j<=i; j++){       // 1<=1 , 1<=1. 2<=2 , 1<=1.2<=2.3<=3 ,1<=1.2<=2.3<=3 .4<=4
            printf("%d " , num);           //11  ,12 , 13 , 14.15.16 , 17.18.19.20
            num++;                          //12 , 13 , 14 ,15,16,17 ,18 ,19 , 20 , 21
        }
        printf("\n");

    }
     printf("\n");


// Que-3 - Develop a programme that print the given left half tringle pattern

    for(int i = 5; i>=1 ; i--){
        for(int k=1 ; k<i ; k++){
            printf("  ");
        }

        for(int j = i; j<=5 ; j++){
            printf("%d " , j);
        }
        printf("\n");

    }
     printf("\n");

 // Que-4 Develop a programme that print the given inverted half pattern tringle


    for(int i = 5 ; i>=1; i--){
        for(int k=1; k <= 5 - i;  k++){
            printf("  ");

        }
    for(int j = 1 ; j<=i ; j++){
        if(j%2==1){
            printf("%d " , 1);


        }else{
            printf("%d " , 0);


        }
        
    }
    printf("\n");
    }

     printf("\n");


// Que-5 - Develop a programme that prints fully pyramid pattern using nested loop

    for(int i = 5 ; i>=1; i--){ 
        for(int r=1; r<=i ; r++){
            printf("  ");
        }
                                         // 5>=1 , 4>=1 , 3>=1 , 2>=1 , 1>=1
        for(int j = i ; j<=5 ; j++){  // 5<=5 , 4<=4 .5<=5  , 3<=5.4<=5.5<=5 , 2<=5.3<=5.4<=5.5<=5 , 1<=5.2<=5.3<=5.4<=5.5<=5
            printf("%d " ,j) ;          // 5 // 4.5 // 3.4.5 // 2.3.4.5 // 1.2.3.4.5
        }
      for(int x=4 ; x>=i ; x--){
        printf("%d " , x);
      }

         printf("\n");

        }

         printf("\n");
       

// Que-6 - Develop a programme that prints custom numeric pattern

    for (int i = 1; i <= 5; i++){ 
        for (int j = 1; j <= i; j++)
        {                     
            printf("%d ", j); 
        }

        for(int k=4; k>=i; k--){
            printf("    ");
        }
        for (int j = i; j >= 1; j--)    // 1>=1 //  2>=1 .1>=1 //3>=1.2>=1.1>=1 // 4>=1.3>=1.2>=1.1>=1 // 5>=1 4>=1.3>=1.2>=1.1>=1
        {                     
            printf("%d ", j);            //  1 // 2.1//  3.2.1//4.3.2.1//5.4.3.2.1
        }
        printf("\n");
    
    
}

 printf("\n");


//Que-7 -Develop a programme that prints custom alphabic pattern

for(int i = 1; i<=5 ; i++){
    if(i==1|| i==3){
        printf("* * * * *");
    }else if (i==2){
        printf("*        *");
    }else{
        printf("*");

    }
    printf("\n");
}

}



















    


    



    


