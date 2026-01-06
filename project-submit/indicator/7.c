#include <stdio.h>
#include <string.h>

int main(){

//Que-1 length of string


    char str[100];
    printf("Enter a string");
    fgets(str, 100, stdin);
    puts(str);


  int len = strlen(str);
    len--; 

    printf("length of str = %d" , len-1);



//Que-2 - cube of matrix

 int row;
printf ("\n Enter the size of row");
scanf ("%d", &row);

int col;
printf ("Enter the size of coloum");
scanf ("%d", &col);

int arr[row][col]; 



printf("\nEnter elements of array:\n");


for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            printf("Enter the value");
            scanf("%d", &arr[i][j]);
        }
    }


for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
             printf("%d ",arr[i][j] * arr[i][j] * arr[i][j] );
           
           
        }
        
        printf("\n");

    }



 
 
    




}

