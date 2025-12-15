# include <stdio.h>

//Arithmic Operator

//+ Addition Operator a + b = Adds two numbers
// - Subtraction Operator a - b = Subtracts second from first
// * Multiplication Operator a * b= Multiplies two numbers
// / Division Operator a / b = Divides first by second
// % Modulus Operator a % b= Remainder of division

int main(){
    int a = 30;
    int b = 20;
    int c = a+b;
    //Addition
    printf("  arthimatic operator addition is %d" , c);

     // Substract
    
     int d = a-b;
    printf("\n arthimatic operator substration is %d" , d);

    // Multiply

    int e = a*b;
    printf("\narthimatic operator multiplication  is %d" , e);

    //Divide

    int f = a/b;
    printf("\narthimatic operator divisible is %d" , f);

    //Modules

    int g = a%b;
     printf("\narthimatic operator modules is %d" , g);

     //Assignment Operator
// = Assignment a = 5 Assigns = 5 to a
// += Add and Assign a += 2 = a = a + 2
// -= Subtract and Assign a -= 2 = a = a - 2
// *= Multiply and Assign a *= 2 = a = a * 2
// /= Divide and Assign a /= 2 =  a = a / 2
// %= Modulus and Assign a %= 2 =  a = a % 2

int x = 50;
int y = 20;
int z = x += 2 ;

// Add & Assign

printf("\n assignment operator add & assign is %d" , z);

// substract & Assign

int A = y -= 2;
printf("\n assignment operator substract & assign is %d" , A);

// Multiply & Assign

int B = y *= 2;
printf("\n assignment operator Multiply & assign is %d" , B); // here y is 18 because of minus 20-2=18 and then reassign y*=2 18*2=36 ,so ans is 36

// Divide & Assign

int C = x /= 2;
printf("\n assignment operator divide & assign is %d" , C); // X is 50 and i addition +2 = 52 and then i divided 52/2 = 26, so ans is 26

//// Modules & Assign

int D = x %= 2;
printf("\n assignment operator modules & assign is %d" , D); // now x is 26 so 26 module 2 is 0


//comparison operator  // ans is only true or false true means 1 and false means 0

// == Equal To a == b True if equal
// != Not Equal To a != b True if not equal
// > Greater Than a > b True if a > b
// < Less Than a < b True if a < b
// >= Greater Than or Equal To a >= b True if a ≥ b
// <= Less Than or Equal To a <= b True if a ≤ b

int E = 20;
int F = 60;

// Equal To

int G = E==f;
printf("\n comparison operator equal to is %d" , G);

// Not Equal to

int H = E != F;
printf("\n comparison operator not equal to is %d" , H);

//Grater than

int I = E>F;
printf("\n comparison operator grater than is %d" , I);

//less than

int J = E<F;
printf("\n comparison operator less than is %d" , J);

//greater than equal to


int K = E >= F;
printf("\n comparison operator grater than and equal to  is %d" , K);

// less than equal to

int L = E <= F;
printf("\n comparison operator less than and equal to  is %d" , L);



//Increment/Decrement Operators

// ++ Increment a++, ++a Increases value by 1
// -- Decrement a--, --a Decreases value by 1


int num1 = 5;
int num2  = 3;

// Increatment value
 num1++;
printf("\n increatment operator ans is %d" , num1);

//decreatment value

num2--;
printf("\n decreatment operator ans is %d" , num2);


//Ternary Operator

// ?: Ternary (Conditional) a > b ? x : y If a > b then x, else y

// less than - ans is small vlaue of all
// grater than - ans is big vlaue of all
// equal to - ==  - ans is big value of all
// not equal to - != - ans is small vslue of all

int h = 90;
int i = 120;

// less than

int j = (h<i)? h:i;
printf("\n tennary operator less than ans is %d", j);

// grater than

int k = (h>i)? h:i;
printf("\n tennary operator less than ans is %d", k);

//equal to

int l = (h==i)? h:i;
printf("\n tennary operator less than ans is %d", l);

// not equal to

int m = (h!=i)? h:i;
printf("\n tennary operator less than ans is %d", m);



//Special Operators
// Operator Name Example Use
// sizeof Sizeof Operator sizeof(int) Returns size in bytes
// & Address of Operator &a Returns memory address
// * Pointer Dereference *p Gets value stored at pointer

int num3 = 40;
int num4 = 20;

printf("\n%d", sizeof(num3));


// address oprator means scanf & - referance

    




























}








