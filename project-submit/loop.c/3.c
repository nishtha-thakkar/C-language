# include<stdio.h>

// 1 que - do- while

int main(){
 char a = 'a';
  do{
        printf("%c " , a);
        a = a+4;

    }while(a<='z');

// 2.que

int n, first, last;

    printf("\nEnter number: ");
    scanf("%d", &n);

    last = n % 10;      // get last digit

    while (n >= 10) {  // get first digit
        n = n / 10;
    }
    first = n;

    printf("Sum = %d", first + last);



//     Step 1: Take number
// n = 257

// 🔹 Step 2: Find last digit
// last = n % 10;

// What % 10 means?

// 👉 It gives the last digit

// 257 % 10 = 7


// So now:

// last = 7

// 🔹 Step 3: Find first digit (remove digits)
// while (n >= 10) {
//     n = n / 10;
// }

// This loop removes the last digit each time
// First time loop runs:
// n = 257
// n = 257 / 10 = 25

// Second time loop runs:
// n = 25
// n = 25 / 10 = 2

// Stop condition:
// n = 2  (less than 10)


// Loop stops.

// Now:

// first = 2

// 🔹 Step 4: Add first and last digit
// sum = first + last;

// sum = 2 + 7 = 9




//3.que

 int j, count = 0;

    printf("\nEnter number from user: ");
    scanf("%d", &j);

    while (j != 0) {
        j = j / 10;   // remove last digit
        count++;
    }

    printf("Total digits = %d", count);



    // First check
// n != 0  →  400 != 0  → TRUE


// Loop runs.

// n = 400 / 10 = 40
// count = 1

// ▶ Second check
// n != 0  →  40 != 0  → TRUE


// Loop runs again.

// n = 40 / 10 = 4
// count = 2

// ▶ Third check
// n != 0  →  4 != 0  → TRUE


// Loop runs again.

// n = 4 / 10 = 0   // integer division
// count = 3

// ▶ Fourth check
// n != 0  →  0 != 0  → FALSE


// ❌ Loop stops

// ✅ Final values
// count = 3




}

