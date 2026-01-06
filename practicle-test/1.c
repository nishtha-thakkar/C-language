# include <stdio.h>

int reverse(int n) {
    int r = 0;
    while (n > 0) {
        r = r * 10 + n % 10;
        n = n / 10;
    }
    return r;
}


// Que- 1 - print vowel and consonent with switch case


int main(){
    char ch;
    printf("Enter a character");
    scanf(" %c" , &ch);

    switch (ch)
    {
        case 'a' : 
        case 'e' : 
        case 'i' : 
        case 'o' : 
       case 'u' : 
        
        case 'A' : 
        case 'E' : 
        case 'I' : 
        case 'O' : 
        case 'U' :
        printf("Vowel"); 
        break;

        

        default : 
        printf("Consonant");
   
    }

     printf("\n");


// Que-2 -find lowest value


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


    



int min = arr[0][0];



for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            if(arr[i][j] < min) {
                min = arr[i][j];
            }
        }
    }

    printf("Lowest value = %d\n", min);

     printf("\n");




 // que-3 - reverse digit

    int num, rev;

    printf("Enter a 3 digit number: ");
    scanf("%d", &num);

    rev = reverse(num);

    printf("Reversed number = %d\n", rev);

    printf("\n");


    
// que-4 // 1D array with pointer


     int r;

    printf("Enter size of array: ");
    scanf("%d", &r);

    int arr1[r];
    int *p = arr1;   // pointer to array

    printf("Enter array elements:\n");
    for(int i = 0; i < r; i++) {
        scanf("%d", p + i);
    }

    printf("Square of each element:\n");
    for(int i = 0; i < r; i++) {
        printf("%d ", (*(p + i)) * (*(p + i)));
    }

    printf("\n");
    printf("\n");


    
// que-5 Nested loop  to print square

 for(int i = 10 ; i>=6 ; i--){
    for(int j=10; j>=i ; j-- ){
        printf("%d " , i*i);
    }
    printf("\n");
 }
 


}

