/*
The information gathered in this file comes from multiple sources, with 
https://www.youtube.com/@BroCodez being the main source.
*/

// Include standard input-output library for printf and scanf functions
#include <stdio.h>

// Include boolean library for using bool data type
#include <stdbool.h>

// Include string library for using string functions like strlen
#include <string.h>

#include <math.h>

int main() {

    printf("Hello, World!\n");
    return 0;
}

void commentsAndEscapeSequences() {

    // Comment

    /*  
    Multi
    Line
    Comment
    */

   /*
   Escape Sequence = character combination consisting of a backslash \
   followed by a letter or combination of digits.
   Specify actions within a line or string of text.

   https://www.geeksforgeeks.org/escape-sequence-in-c/

    */
}

void variables() {

    // variable =   Allocated space in memory to store a value.
    //                     We refer to a variable's name to access the stored value.
    //                     That variable now behaves as if it was the value it contains.
    //                     BUT we need to declare what type of data we are storing.

    int x;            //declaration
    x = 123;       //initialization
    int y = 321; //declaration + initialization

    int age = 21;              //integer
    float gpa = 2.05;       //floating point number
    char grade = 'C';        //single character
    char name[] = "Bro"; //array of characters
    
    // % = format specifier
    printf("Hello %s\n", name);
    printf("You are %d years old\n", age);
    printf("Your average grade is %c\n", grade);
    printf("Your gpa is %f\n", gpa);

}

void dataTypes(){

    // Data Type =  Classification of data items based on the kind of value they can store.
    //                     Determines the size and layout of the variable's memory.
    // % = format specifier
    char a = 'C';                   // single character    %c
    char b[] = "Bro";            // array of characters %s  

    float c = 3.141592;                          // 4 bytes (32 bits of precision) 6 - 7 digits %f
    double d = 3.141592653589793; // 8 bytes (64 bits of precision) 15 - 16 digits %lf

    bool e = true;                         // 1 byte (true (1) or false (0) ) %d
    
    char f = 120;                          // 1 byte (-128 to +127) %d or %c
    unsigned char g = 255;       // 1 byte (0 to +255) %d or %c

    short h = 32767;                   // 2 bytes (−32,768 to +32,767) %d
    unsigned short i = 65535;  // 2 bytes (0 to +65,535) %d

    int j = 2147483647;                     // 4 bytes (-2,147,483,648 to +2,147,483,647) %d
    unsigned int k = 4294967295;  // 4 bytes (0 to +4,294,967,295) %u

    long long int l = 9223372036854775807; // 8 bytes (-9 quintillion to +9 quintillion) %lld
    unsigned long long int m = 18446744073709551615U; // 8 bytes (0 to +18 quintillion) %llu

    printf("%c\n", a);  // char
    printf("%s\n", b);  // character array
    printf("%f\n", c);  // float
    printf("%lf\n", d); // double
    printf("%d\n", e);  // bool
    printf("%d\n", f);  // char as numeric value
    printf("%d\n", g);  // unsigned char as numeric value
    printf("%d\n", h);  // short
    printf("%d\n", i);  // unsigned short
    printf("%d\n", j);  // int
    printf("%u\n", k);  // unsigned int
    printf("%lld\n", l);  // long long int
    printf("%llu\n", m);  // unsigned long long int

}

void formatSpecifiers(){
    
    // Format Specifier =  Special character sequences that begin with a % sign.
    //                                 Used in printf() and scanf() functions to format input and output.
    //                                 %d = integer
    //                                 %f = float
    //                                 %c = character
    //                                 %s = string (array of characters)
    //                                 %lf = double
    //                                 %u = unsigned int
    //                                 %lld = long long int
    //                                 %llu = unsigned long long int
    //
    //                                 %.1 = decimal precision
    //                                 %1 = minimum field width
    //                                 %- = left align

    int a = 123;
    float b = 3.141592;
    char c = 'C';
    char d[] = "Bro";

    printf("Integer: %d\n", a);
    printf("Float: %f\n", b);
    printf("Character: %c\n", c);
    printf("String: %s\n", d);
}

void constants(){
    
    // Constant =  Fixed value that does not change during the execution of a program.
    //                     Declared using the const keyword.
    //                     Constants are useful for defining values that are used multiple times.
    //                     Constants are named using uppercase letters.
    //                     Constants can be of any data type.

    const int A = 123;
    const float B = 3.141592;
    const char C = 'C';
    const char D[] = "Bro";

    printf("Integer: %d\n", A);
    printf("Float: %f\n", B);
    printf("Character: %c\n", C);
    printf("String: %s\n", D);

     // constant = fixed value that cannot be altered by the program during its execution

    const float PI = 3.14159;

    //PI = 420.69; YOU CAN'T CHANGE THIS

    printf("%f", PI);
}

void arithmeticOperators(){
    
    // Arithmetic Operators =  Perform arithmetic operations on variables and values.
    //                                         + = addition
    //                                         - = subtraction
    //                                         * = multiplication
    //                                         / = division
    //                                         % = modulus (remainder)
    //                                         ++ = increment
    //                                         -- = decrement

    int a = 10;
    int b = 20;

    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);
    printf("Division: %d\n", a / b);
    printf("Modulus: %d\n", a % b);
    printf("Increment: %d\n", a++);
    printf("Decrement: %d\n", a--);
}

void augmentedAssignmentOperators(){
    
    // Augmented Assignment Operators =  Perform an operation on a variable and then assign the result to the variable.
    //                                                             += = addition
    //                                                             -= = subtraction
    //                                                             *= = multiplication
    //                                                             /= = division
    //                                                             %= = modulus (remainder)

    int a = 10;
    int b = 20;

    a += b;
    printf("Addition: %d\n", a);

    a -= b;
    printf("Subtraction: %d\n", a);

    a *= b;
    printf("Multiplication: %d\n", a);

    a /= b;
    printf("Division: %d\n", a);

    a %= b;
    printf("Modulus: %d\n", a);
}

void userInput(){
    
    // User Input =  Data provided by the user during the execution of a program.
    //                     Collected using the scanf() function.
    //                     Requires a format specifier to determine the data type.
    //                     Data is stored in variables.

    int a;
    float b;
    char c;
    char d[20];

    printf("Enter an integer: ");
    scanf("%d", &a);

    printf("Enter a float: ");
    scanf("%f", &b);

    printf("Enter a character: ");
    scanf(" %c", &c);

    printf("Enter a string: ");
    scanf(" %s", d);

    printf("Integer: %d\n", a);
    printf("Float: %f\n", b);
    printf("Character: %c\n", c);
    printf("String: %s\n", d);

    char name[25]; //bytes
    int age;

    printf("\nWhat's your name?");
    //scanf("%s", &name);
    fgets(name, 25, stdin); // Reads up to input size. Includes newline character at end of string
    name[strlen(name)-1] = '\0';

    printf("How old are you?");
    scanf("%d", &age); // Reads up to any whitespace

    printf("\nHello %s, how are you?", name);
    printf("\nYou are %d years old", age);
}

void mathFunctions(){
    
    // Math Functions =  Perform mathematical operations on variables and values.
    //                             Requires the math.h library to be included.
    //                             Functions include:
    //                             abs() = absolute value
    //                             pow() = power
    //                             sqrt() = square root
    //                             ceil() = smallest integer greater than or equal to a number
    //                             floor() = largest integer less than or equal to a number
    //                             round() = nearest integer
    //                             fmax() = largest of two numbers
    //                             fmin() = smallest of two numbers
    //                             fabs() = absolute value (float)
    //                             log() = natural logarithm
    //                             log10() = base-10 logarithm
    //                             exp() = exponential function
    //                             sin() = sine function
    //                             cos() = cosine function
    //                             tan() = tangent function

    int a = -10;
    float b = 3.141592;

    printf("Absolute Value: %d\n", abs(a));
    printf("Power: %f\n", pow(b, 2));
    printf("Square Root: %f\n", sqrt(b));
    printf("Ceil: %f\n", ceil(b));
    printf("Floor: %f\n", floor(b));
    printf("Round: %f\n", round(b));
    printf("Max: %f\n", fmax(a, b));
    printf("Min: %f\n", fmin(a, b));
}

void circleCircumference(){
    
    
    const double PI = 3.14159;
    double radius;
    double circumference;
    double area;

    printf("\nEnter the radius of a circle: ");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    printf("\ncircumference: %lf", circumference);
    printf("\narea: %lf", area);

}

void hypotenuseCalculator(){

    double A;
    double B;
    double C;

    printf("Enter side A: ");
    scanf("%lf", &A);

    printf("Enter side B: ");
    scanf("%lf", &B);

    C = sqrt(A*A + B*B);

    printf("Side C: %lf", C);
}

void ifStatements(){
    int age;

    printf("\nEnter your age: ");
    scanf("%d", &age);

    if(age >= 18){
        printf("You are now signed up!");
    }
    else if(age == 0){
        printf("You can't sign up! You were just born!");
    }
    else if(age < 0){
        printf("You haven't been born yet!");
    }
    else{
        printf("You are too young to sign up!");
    }


}

// TODO: Continue @ https://www.youtube.com/watch?v=tjd8fQw5HTA&list=PLZPZq0r_RZOOzY_vR4zJM32SqsSInGMwe&index=15






// END OF FILE