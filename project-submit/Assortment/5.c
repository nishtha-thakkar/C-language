#include<stdio.h>

//Que-1 Negative elements in 1D array

int main(){
   
    int size;
    printf("Enter the size of array");
    scanf("%d" , &size);
    int arr1 [size];

    for(int i=0; i<size ;i++){
        printf("Enter the value ");
        scanf("%d" , &arr1[i]);
        // printf("Array is %d ", arr[i]);
    }

    printf("Negative value of an array : ");
     for(int i =0; i<size ;i++){
        if(arr1[i] < 0){
        printf("%d ", arr1[i]);
        }
    }


    // Que-2 Largest Element in 2D array;

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


    



int max = 0;



for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            if(arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }

    printf("Largest value = %d", max);



// Que-3 transpose 

 int rows;
  printf("\n Enter The Size of row array : ");
  scanf("%d", &rows);
  int cols;
  printf("Enter The Size of col array : ");
  scanf("%d", &cols);
  int arrs[rows][cols];

  int sizerows = sizeof(arrs) / sizeof(arrs[0]);
  int sizecols = sizeof(arrs[0]) / sizeof(arrs[0][0]);

  for (int i = 0; i < sizerows; i++)
  {
    for (int j = 0; j < sizecols; j++)
    {
      printf("Enter the value of : ");
      scanf("%d", &arrs[i][j]);
    }
  }
  printf("Marix is \n ");
for (int i = 0; i < sizecols; i++)   
{
    for (int j = 0; j < sizerows; j++) 
    {
        printf("%d ", arrs[j][i]);  
    }
    printf("\n");
}



// Question-4 - calculate sum

   int row1;
  printf("Enter The Size of row array : ");
  scanf("%d", &row1);
  int col1;
  printf("Enter The Size of col array : ");
  scanf("%d", &col1);
  int array[row1][col1];

  int sizerow1 = sizeof(array) / sizeof(array[0]);
  int sizecol1 = sizeof(array[0]) / sizeof(array[0][0]);

  for (int i = 0; i < sizerow1; i++)
  {
    for (int j = 0; j < sizecol1; j++)
    {
      printf("Enter the value of : ");
      scanf("%d", &array[i][j]);
    }
  }
  printf("Marix is \n");
   for (int i = 0; i < sizerow1; i++)
  {
    for (int j = 0; j < sizecol1; j++)
    {
      printf("%d ", array[i][j]);
    }
    printf("\n");
  }


  for (int i = 0; i < sizerow1; i++)
  {
     int rowSum = 0;
    for (int j = 0; j < sizecol1; j++)
    {
      rowSum += array[i][j];
    }
    printf("\n Sum Of row : %d ", rowSum);

  }
  for (int j = 0; j < sizecol1; j++)
  {
   int colSum = 0;
    for (int i = 0; i < sizerow1; i++)
    {
      colSum += array[i][j];
    }
    printf("\n Sum Of col: %d ", colSum);

  }





    




















}











