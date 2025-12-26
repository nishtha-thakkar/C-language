// While-loop

# include <stdio.h>

int main(){
    int i = 1;
    while(i<=5){
    printf("%d" , i);
    i++;
    printf("\n");
    }
   
    for( int i=1; i<=5 ; i++){
       for(int j=i; j<=5;j++){
        printf(" %d", j);
       }
     printf("\n");
      
    }

    for(int i=5 ; i>=1; i--){

     for(int k=1 ; k<i ; k++){
        printf("  ");

         }
        for(int j=i ; j<=5 ; j++){
            printf("%d " , j);

        }
        printf("\n");
           
 }
 for(int i=5 ; i>=1; i--){
    
    for(int j=i; j<=5;j++){
        printf("%d " ,j);
    }
    printf("\n");
   }



}

