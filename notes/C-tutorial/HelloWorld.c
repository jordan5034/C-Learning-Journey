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

// Include math library for using mathematical functions like sqrt and pow
#include <math.h>

/*
The ctype.h library provides functions to test and map characters.
It includes functions for character classification (e.g., isalpha, isdigit)
and character conversion (e.g., tolower, toupper).
 */

#include <ctype.h>

int main() {

    printf("Hello, World!\n");
    /**
     * The return 0; statement in the main function indicates that the program 
     * has executed successfully. In C, the main function is expected to return 
     * an integer value to the operating system upon completion. By convention, 
     * returning 0 signifies that the program has terminated without any errors.
     */
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
    char b[] = "Bro";               // array of characters %s  

    float c = 3.141592;             // 4 bytes (32 bits of precision) 6 - 7 digits %f
    double d = 3.141592653589793;   // 8 bytes (64 bits of precision) 15 - 16 digits %lf

    bool e = true;                  // 1 byte (true (1) or false (0) ) %d
    
    char f = 120;                   // 1 byte (-128 to +127) %d or %c
    unsigned char g = 255;          // 1 byte (0 to +255) %d or %c

    short h = 32767;                // 2 bytes (−32,768 to +32,767) %d
    unsigned short i = 65535;       // 2 bytes (0 to +65,535) %d

    int j = 2147483647;             // 4 bytes (-2,147,483,648 to +2,147,483,647) %d
    unsigned int k = 4294967295;    // 4 bytes (0 to +4,294,967,295) %u

    long long int l = 9223372036854775807;           // 8 bytes (-9 quintillion to +9 quintillion) %lld
    unsigned long long int m = 18446744073709551615U; // 8 bytes (0 to +18 quintillion) %llu
    
    long n = 9223372036854775807L;                   // 8 bytes (-9 quintillion to +9 quintillion) %ld
    unsigned long o = 18446744073709551615UL;        // 8 bytes (0 to +18 quintillion) %lu

    printf("%ld\n", n);  // long
    printf("%lu\n", o);  // unsigned long
    printf("%c\n", a);   // char
    printf("%s\n", b);   // character array
    printf("%f\n", c);   // float
    printf("%lf\n", d);  // double
    printf("%d\n", e);   // bool
    printf("%d\n", f);   // char as numeric value
    printf("%d\n", g);   // unsigned char as numeric value
    printf("%d\n", h);   // short
    printf("%d\n", i);   // unsigned short
    printf("%d\n", j);   // int
    printf("%u\n", k);   // unsigned int
    printf("%lld\n", l); // long long int
    printf("%llu\n", m); // unsigned long long int

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
    //                                 %x = hexadecimal (lowercase)
    //                                 %X = hexadecimal (uppercase)
    //                                 %o = octal
    //                                 %p = pointer
    //                                 %e = scientific notation (lowercase)
    //                                 %E = scientific notation (uppercase)
    //                                 %g = use %e or %f, whichever is shorter
    //                                 %G = use %E or %f, whichever is shorter
    //                                 %a = hexadecimal floating-point (lowercase)
    //                                 %A = hexadecimal floating-point (uppercase)
    //                                 %n = store number of characters written so far
    //
    //                                 %.1 = decimal precision
    //                                 %1 = minimum field width
    //                                 %- = left align
    //                                 right align is default
    //                                 %0 = zero padding
    //                                 %* = width or precision specified in an argument
    //                                 %*.* = width and precision specified in an argument
    //                                 %% = print a % sign

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

void switchStatements(){
    int day;

    printf("\nEnter a number between 1 and 7: ");
    scanf("%d", &day);

    switch(day){
        case 1:
            printf("Sunday");
            break;
        case 2:
            printf("Monday");
            break;
        case 3:
            printf("Tuesday");
            break;
        case 4:
            printf("Wednesday");
            break;
        case 5:
            printf("Thursday");
            break;
        case 6:
            printf("Friday");
            break;
        case 7:
            printf("Saturday");
            break;
        default:
            printf("Invalid number");
    }
}

void temperatureConversionProgram(){

    char unit; // Variable to store the unit of temperature (F or C)
    float temp; // Variable to store the temperature value

    // Prompt the user to enter the unit of temperature
    printf("\nIs the temperature in (F) or (C)?: ");
    scanf("%c", &unit); // Read the unit from user input

    unit = toupper(unit); // Convert the unit to uppercase for consistency

    // Check if the unit is Celsius
    if(unit == 'C'){
        printf("\nEnter the temp in Celsius: "); // Prompt the user to enter the temperature in Celsius
        scanf("%f", &temp); // Read the temperature value
        temp = (temp * 9 / 5) + 32; // Convert Celsius to Fahrenheit
        printf("\nThe temp in Farenheit is: %.1f", temp); // Print the temperature in Fahrenheit
    }
    // Check if the unit is Fahrenheit
    else if(unit == 'F'){
        printf("\nEnter the temp in Farenheit: "); // Prompt the user to enter the temperature in Fahrenheit
        scanf("%f", &temp); // Read the temperature value
        temp = ((temp - 32) * 5) / 9; // Convert Fahrenheit to Celsius
        printf("\nThe temp in Celsius is: %.1f", temp); // Print the temperature in Celsius
    }
    // Handle invalid unit input
    else{
        printf("\n %c is not a valid unit of measurement", unit); // Print an error message for invalid unit
    }

    return 0; // Return 0 to indicate successful execution

}

void calculatorProgram(){

    char operator;
    double num1;
    double num2;
    double result;

    printf("\nEnter an operator (+ - * /): ");
    scanf("%c", &operator);

    printf("Enter number 1: ");
    scanf("%lf", &num1);

    printf("Enter number 2: ");
    scanf("%lf", &num2);

    switch(operator){
        case '+':
            result = num1 + num2;
            printf("\nresult: %lf", result);
            break;
        case '-':
            result = num1 - num2;
            printf("\nresult: %lf", result);
            break;
        case '*':
            result = num1 * num2;
            printf("\nresult: %lf", result);
            break;
        case '/':
            result = num1 / num2;
            printf("\nresult: %lf", result);
            break;
        default:
            printf("%c is not valid", operator);
    }
}

void operators(){
    
    // Operators =  Symbols that perform operations on variables and values.
    //                     Arithmetic Operators:
    //                     + = addition
    //                     - = subtraction
    //                     * = multiplication
    //                     / = division
    //                     % = modulus (remainder)
    //                     ++ = increment
    //                     -- = decrement
    //                     Augmented Assignment Operators:
    //                     += = addition
    //                     -= = subtraction
    //                     *= = multiplication
    //                     /= = division
    //                     %= = modulus (remainder)
    //                     Relational Operators:
    //                     == = equal to
    //                     != = not equal to
    //                     > = greater than
    //                     < = less than
    //                     >= = greater than or equal to
    //                     <= = less than or equal to
    //                     Logical Operators:
    //                     && = logical AND
    //                     || = logical OR
    //                     ! = logical NOT
    //                     Bitwise Operators:
    //                     & = bitwise AND
    //                     | = bitwise OR
    //                     ^ = bitwise XOR
    //                     ~ = bitwise NOT
    //                     << = left shift
    //                     >> = right shift
    //                     Assignment Operators:
    //                     = = assignment
    //                     += = addition assignment
    //                     -= = subtraction assignment
    //                     *= = multiplication assignment
    //                     /= = division assignment
    //                     %= = modulus assignment
    //                     &= = bitwise AND assignment
    //                     |= = bitwise OR assignment
    //                     ^= = bitwise XOR assignment
    //                     <<= = left shift assignment
    //                     >>= = right shift assignment
    //                     Conditional Operator:
    //                     ? : = conditional operator
    //                     Comma Operator:
    //                     , = comma operator

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

void arguments(){
    
    // Arguments =  Values passed to a function when it is called.
    //                     Used to provide input to the function.
    //                     Arguments are enclosed in parentheses after the function name.
    //                     Multiple arguments can be passed to a function.
    //                     Arguments are separated by commas.
    //                     Arguments are passed by value or by reference.

    int add(int x, int y){
        return x + y;
    }

    int result = add(10, 20);
    printf("Result: %d\n", result);


}

void returnStatement(){

    
    // Return Statement =  Ends the execution of a function and returns a value to the calling function.
    //                                 The return value is specified after the return keyword.
    //                                 The return value must match the return type of the function.
    //                                 The return statement can be used to return a value or terminate the function early.

    int add(int x, int y){
        return x + y;
    }

    int result = add(10, 20);
    printf("Result: %d\n", result);
}

void ternaryOperator(){
    
    // Ternary Operator =  Conditional operator that evaluates an expression and returns a value based on the result.
    //                                 Consists of three operands: condition, true expression, and false expression.
    //                                 Syntax: condition ? true expression : false expression
    //                                 If the condition is true, the true expression is evaluated and returned.
    //                                 If the condition is false, the false expression is evaluated and returned.

    int a = 10;
    int b = 20;
    int result;

    result = (a > b) ? a : b;
    printf("Result: %d\n", result);

    //An example of it as a if/else function
    // int findMax(int x, int y){
    //     if(x > y){
    //         return x;
    //     }
    //     else{
    //         return y;
    //     }
    // }

}

void functionPrototype(){
    
    void hello(char[], int); //function prototype. one function prototype for each function. ensures we have the correct number and types of arguments
    // This declares the name of the function, the return type, and the types of its parameters (in order)
    // Allows the compiler to validate that the function is called correctly and perform type-checking at compile time to prevent errors
    // You can include the parameter names, making it easier for readability and documentation. Compiler will treat it the exact same. 
    // You shouldn't add them when its obvious or when parameter names might change frequently. 

    int main()
    {
    // function prototype

    // WHAT IS IT?
    // Function declaration, w/o a body, before main()
    // Ensures that calls to a function are made with the correct arguments

    // IMPORTANT NOTES
    // Many C compilers do not check for parameter matching
    // Missing arguments will result in unexpected behavior
    // A function prototype causes the compiler to flag an error if arguments are missing

    // ADVANTAGES
    // 1. Easier to navigate a program w/ main() at the top
    // 2. Helps with debugging
    // 3. Commonly used in header files

    char name[] = "Bro";
    int age = 21;

    hello(name, age);

    return 0;
    }

    void hello(char name[], int age)
    {
    printf("\nHello %s", name);
    printf("\nYou are %d years old", age);
    }

}

void stringFunctions(){

    // I learned that some of these functions, like "strlwr" and "strupr" are not available in the standard C library, its a Microsoft library. This makes it NOT portables across platforms (such as trying to use it on Linux)
    // A way to avoid this is using a loop and the tolower() function in the <ctype.h> library.

    // Be sure to include #include <string.h> at the top of the file

    char string1[] = "Bro";
    char string2[] = "Code";

    //strlwr(string1);                              // converts a string to lowercase
    //strupr(string1);                              // converts a string to uppercase
    //strcat(string1, string2);                     // appends string2 to end of string1
    //strncat(string1, string2, 1);                 // appends n characters from string2 to string1
    //strcpy(string1, string2);                     // copy string2 to string1
    //strncpy(string1, string2, 2);                 // copy n characters of string2 to string1

    //strset(string1, '?');     //sets all characters of a string to a given character
    //strnset(string1, 'x', 1); //sets first n characters of a string to a given character
    //strrev(string1);          //reverses a string

    //int result = strlen(string1);                 // returns string length as int
    //int result = strcmp(string1, string2);        // string compare all characters
    //int result = strncmp(string1, string2, 1);    // string compare n characters
    //int result = strcmpi(string1, string1);       // string compare all (ignore case)
    //int result = strnicmp(string1, string1, 1);   // string compare n characters (ignore case)

    printf("%s", string1);

    /*
    if(result == 0)
    {
        printf("These strings are the same");
    }
    else
    {
        printf("These strings are not the same");
    }
    */
    
}

void nestedLoops(){
    
    // Nested Loops =  Loop inside another loop.
    //                             Used to iterate over a two-dimensional array or matrix.
    //                             The inner loop runs to completion for each iteration of the outer loop.
    //                             The number of iterations is the product of the iterations of the two loops.

    int rows = 5;
    int columns = 5;

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            printf("* ");
        }
        printf("\n");
    }
}

void breakVersusContinue(){
    
    // Break Statement =  Terminates the execution of a loop or switch statement.
    //                             Used to exit a loop early if a certain condition is met.
    //                             The break statement is followed by a semicolon.
    //                             The break statement only exits the innermost loop or switch statement.

    // Continue Statement =  Skips the current iteration of a loop.
    //                             Used to skip over certain iterations of a loop based on a condition.
    //                             The continue statement is followed by a semicolon.
    //                             The continue statement only skips the current iteration of the loop.

    for(int i = 0; i < 10; i++){
        if(i == 5){
            break;
        }
        printf("%d ", i);
    }

    for(int i = 0; i < 10; i++){
        if(i == 5){
            continue;
        }
        printf("%d ", i);
    }
}

void arrays(){
    
    // Array =  Collection of elements of the same data type stored in contiguous memory locations.
    //                     Arrays are used to store multiple values under a single name.
    //                     The elements of an array are accessed using an index.
    //                     The index of an array starts at 0.
    //                     Arrays have a fixed size that is specified when the array is declared.

    int numbers[5] = {1, 2, 3, 4, 5};

    for(int i = 0; i < 5; i++){
        printf("%d ", numbers[i]);
    }

}

void twoDimArrays(){
    
    // Two-Dimensional Array =  Array of arrays.
    //                                         Used to store data in a two-dimensional grid or matrix.
    //                                         The elements of a two-dimensional array are accessed using two indices.
    //                                         The first index specifies the row, and the second index specifies the column.
    //                                         The elements of a two-dimensional array are stored in contiguous memory locations.

    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // 2D array = an array, where each element is an entire array
    //            useful if you need a matrix, grid, or table of data
    /*
    int numbers[2][3] = {
                            {1, 2, 3},
                            {4, 5, 6}
                        };
    */
    int numbers[2][3];

    int rows = sizeof(numbers)/sizeof(numbers[0]);
    int columns = sizeof(numbers[0])/sizeof(numbers[0][0]);

    printf("rows: %d\n", rows);
    printf("columns: %d\n", columns);

    numbers[0][0] = 1;
    numbers[0][1] = 2;
    numbers[0][2] = 3;
    numbers[1][0] = 4;
    numbers[1][1] = 5;
    numbers[1][2] = 6;

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }


    
}

void arrayOfStrings(){
    
    // Array of Strings =  Array of character arrays.
    //                                         Used to store multiple strings under a single name.
    //                                         Each element of the array is a character array that represents a string.
    //                                         The elements of the array are accessed using an index.
    //                                         The index of an array starts at 0.

    // this creates an array called "names" that can store 3 strings, each with a maximum length of 20 characters
    char names[3][20] = {
        "Alice",
        "Bob",
        "Charlie"
    };

    for(int i = 0; i < 3; i++){
        printf("%s\n", names[i]);
    }


     char cars[][10] = {"Mustang","Corvette","Camaro"};

    //cars[0] = "Tesla";
    strcpy(cars[0], "Tesla");

    for(int i = 0; i < sizeof(cars)/sizeof(cars[0]); i++)
    {
        printf("%s\n", cars[i]);
    }

}

void swapValuesOfTwoVariables(){

    int a = 10;
    int b = 20;
    int temp;

    printf("Before swapping: a = %d, b = %d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping: a = %d, b = %d\n", a, b);

    //------- Example 1 -------
   //char x = 'X';
   //char y = 'Y';
   //char temp;

   //temp = x;
   //x = y;
   //y = temp;

   //printf("x = %c\n", x);
   //printf("y = %c\n", y);

   //------- Example 2 -------
   char x[15] = "water";
   char y[15] = "soda";
   char temp[15];

   strcpy(temp, x);
   strcpy(x, y);
   strcpy(y, temp);

   printf("x = %s\n", x);
   printf("y = %s\n", y);
}

void sortAnArray(){

    void sort(char array[], int size)
    {
    for(int i = 0; i < size - 1; i++)
    {
        for(int j = 0; j < size - i - 1; j++)
        {
            if(array[j] > array[j+1])
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    }

    void printArray(char array[], int size)
    {
    for(int i = 0; i < size; i++)
    {
        printf("%c ", array[i]);
    }
    }

    int main()
    { 
    //int array[] = {9, 1, 8, 2, 7, 3, 6, 4, 5};
    char array[] = {'F', 'A', 'D', 'B', 'C'};
    int size = sizeof(array)/sizeof(array[0]);

    sort(array, size);
    printArray(array, size);
    
    return 0; 
    }
}

void structures(){

    // Structures are similar to Classes, but they DO NOT contain methods! 
    // They contains variables, which can be of different data types.

    // Structure =  User-defined data type that allows you to group related data items under a single name.
    //                     A structure can contain multiple data types.
    //                     Each data item in a structure is called a member.
    //                     The members of a structure are accessed using the dot operator.
    //                     Structures are used to represent complex data types in C.

    struct Person{
        char name[50];
        int age;
        float height;
    };

    struct Person person1;

    strcpy(person1.name, "Alice");
    person1.age = 30;
    person1.height = 5.6;

    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Height: %.1f\n", person1.height);

    //////////////////////////////////////////

    struct Player
    {
    char name[12];
    int score;
    };

    int main()
    {
    // struct = collection of related members ("variables") 
    //          they can be of different data types
    //          listed under one name in a block of memory
    //          VERY SIMILAR to classes in other languages (but no methods)

    struct Player player1 = {"Bro", 4}
    struct Player player2 = {"Bra", 5}

    //strcpy(player1.name, "Bro");
    //player1.score = 4;

    //strcpy(player2.name, "Bra");
    //player2.score = 5;

    printf("%s\n", player1.name);
    printf("%d\n", player1.score);

    printf("%s\n", player2.name);
    printf("%d\n", player2.score);

    return 0;
    }


}

void typedef(){

        //typedef char user[25];

    typedef struct
    {
    char name[25];
    char password[12];
    int id;
    } User;

    int main() 
    {
    // typedef = reserved keyword that gives an existing datatype a "nickname"

    User user1 = {"Bro", "password123", 123456789};
    User user2 = {"Bruh", "password321", 987654321};

    printf("%s\n", user1.name);
    printf("%s\n", user1.password);
    printf("%d\n", user1.id);
    printf("\n");
    printf("%s\n", user2.name);
    printf("%s\n", user2.password);
    printf("%d\n", user2.id);

    return 0; 
}

}

void arrayOfStructs(){

    struct Student
    {
        char name[12];
        float gpa;
    };

    int main()
    {
        struct Student student1 = {"Spongebob", 3.0};
        struct Student student2 = {"Patrick", 2.5};
        struct Student student3 = {"Sandy", 4.0};
        struct Student student4 = {"Squidward", 2.0};

        struct Student students[] = {student1, student2, student3, student4};

        for(int i = 0; i < sizeof(students)/sizeof(students[0]); i++)
        {
            printf("name:%-12s\t", students[i].name);
            printf("gpa: %.2f\n", students[i].gpa);
        }

        return 0;
    }

}

void enums(){

    // If you didn't assign values, they will be assigned in order starting from 0 automatically.
    enum Day{Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7};

    int main()
    {
        // enum = a user defined type of named integer identifiers
        //               helps to make a program more readable

        enum Day today;
        today = Sun;

        if(today == Sun || today == Sat)
        {
            printf("\nIt's the weekend! Party time!");
        }
        else
        {
            printf("\nI have to work today :(");
        }
        
        return 0;
    }

}

void randomNumbers(){

    // pseudo random numbers = A set of values or elements that is statistically random (don't use for cryptographic security)

    #include <stdlib.h>
    #include <time.h>

    int main()
{
   //pseudo random numbers = A set of values or elements that is statistically random
   //                        (Don't use these for any sort of cryptographic security)
 
   // Use current time as a seed for random # generator
   srand(time(0));
 
   // rand() generates a pseudo random # between 0 - 32,767
   // using modulus sets the max numbers going 0 to 5. The plus 1 increases it, so it appears as 1 to 6
   int number1 = (rand() % 6) + 1;
   int number2 = (rand() % 6) + 1;
   int number3 = (rand() % 6) + 1;
 
   printf("%d\n", number1);
   printf("%d\n", number2);
   printf("%d\n", number3);
 
   return 0;
}

}

void bitwiseOperators(){
    
    // Bitwise Operators =  Perform operations on individual bits of integers.
    //                                         & = bitwise AND
    //                                         | = bitwise OR
    //                                         ^ = bitwise XOR
    //                                         ~ = bitwise NOT
    //                                         << = left shift
    //                                         >> = right shift

    int a = 5; // 101
    int b = 3; // 011

    printf("AND: %d\n", a & b); // 001
    printf("OR: %d\n", a | b); // 111
    printf("XOR: %d\n", a ^ b); // 110
    printf("NOT: %d\n", ~a); // 11111111111111111111111111111010
    printf("Left Shift: %d\n", a << 1); // 1010
    printf("Right Shift: %d\n", a >> 1); // 10

    int main()
    {   
        // BITWISE OPERATORS = special operators used in bit level programming
        //                                          (knowing binary is important for this topic)

        // & = AND
        // | = OR
        // ^ = XOR
        // <<  left shift
        // >>  right shift

        int x = 6;  //    6 = 00000110
        int y = 12; // 12 = 00001100 
        int z = 0;  //    0 = 00000000

        z = x & y;
        printf("AND = %d\n", z);

        z = x | y;
        printf("OR = %d\n", z);

        z = x ^ y;
        printf("XOR = %d\n", z);

        z = x << 2;
        printf("SHIFT LEFT = %d\n", z);

        z = x >> 2;
        printf("SHIFT RIGHT = %d\n", z);

        return 0;
    }

}

void memory(){

    int main()
{
   // memory = an array of bytes within RAM (street)
   // memory block = a single unit (byte) within memory (house), used to hold some value (person)
   // memory address = the address of where a memory block is located (house address)

   char a;
   char b[1];
   double c;

   printf("%d bytes\n", sizeof(a)); // displays the size of the variable 
   printf("%d bytes\n", sizeof(b));
    printf("%d bytes\n", sizeof(c));

   printf("%p\n", &a);
   printf("%p\n", &b);

   return 0;
}

}

void pointers(){
    
    // Pointers =  Variables that store the memory address of another variable.
    //                     Used to access and manipulate the memory location of a variable.
    //                     Pointers are declared using the * symbol.
    //                     The * symbol is also used to dereference a pointer.
    //                     Pointers are used to pass variables by reference to functions.
    //                     Pointers are used to allocate memory dynamically.
    //                     & = address of operator (returns the memory address of a variable)
    //                     * = indirection operator (returns the value at a memory address)
    

    // A pointer is a variable that will store the memory address of another variable
    // Every variable has a memory address
    // The pointers data type must match the variable it is pointing to
    // The * symbol is used to declare a pointer
    // The * symbol is also used to dereference a pointer (get the value at the memory address)
    // The & symbol is used to get the memory address of a variable (refer to a variables memory location)

    // int num = 10;
    // int *ptr = &num; // ptr stores the address of num

    // Good practice to assign NULL if declaring a pointer (if not yet assigning a value)

    // int age = 21;
    // int *pAge = NULL;
    // pAge = &age;

    // IMPORTANT
    // once a pointer is referenced (*ptr), it can be treated like a variable.
    // if you do *ptr again, that will dereference it

    int a = 10;
    int *ptr;

    ptr = &a;

    printf("Value: %d\n", a);
    printf("Address: %p\n", &a);
    printf("Pointer: %p\n", ptr);
    printf("Dereference: %d\n", *ptr);

    //------- Example 1 -------
    int x = 10;
    int *ptr;

    ptr = &x;

    printf("Value: %d\n", x);
    printf("Address: %p\n", &x);
    printf("Pointer: %p\n", ptr);
    printf("Dereference: %d\n", *ptr);

    //------- Example 2 -------
    int y = 20;
    int *ptr;

    ptr = &y;

    printf("Value: %d\n", y);
    printf("Address: %p\n", &y);
    printf("Pointer: %p\n", ptr);
    printf("Dereference: %d\n", *ptr);

    //------- Example 3 -------
    int z = 30;
    int *ptr;

    ptr = &z;

    printf("Value: %d\n", z);
    printf("Address: %p\n", &z);
    printf("Pointer: %p\n", ptr);
    printf("Dereference: %d\n", *ptr);

    //------- Example 4 -------
    int a = 10;
    int *ptr;

    ptr = &a;

    printf("Value: %d\n", a);
    printf("Address: %p\n", &a);
    printf("Pointer: %p\n", ptr);
    printf("Dereference: %d\n", *ptr);

    //------- Example 5 -------
    int b = 20;
    int *ptr;

    ptr = &b;

    printf("Value: %d\n", b);
    printf("Address: %p\n", &b);
    printf("Pointer: %p\n", ptr);


    void printAge(int *pAge)
{
   printf("You are %d years old\n", *pAge); //dereference
}

int main()
{
    // pointer = a "variable-like" reference that holds a memory address to another variable, array, etc.
    //           some tasks are performed more easily with pointers
    //           * = indirection operator (value at address)
    //           & = address of operator (address of variable)

   int age = 21;
   int *pAge = &age;

   printAge(pAge);

   //printf("address of age: %p\n", &age);
   //printf("value of pAge: %p\n", pAge);
   //printf("size of age: %d bytes\n", sizeof(age));
   //printf("size of pAge: %d bytes\n", sizeof(pAge));
   //printf("value of age: %d\n", age);
   //printf("value at stored address: %d\n", *pAge); //dereferencing

   return 0;
}

}

void workingWithFiles(){
    /*
     * 
     * Working with Files:
     * 
     * This program demonstrates basic file operations in C, including reading from and writing to files.
     * It requires the stdio.h library to be included.
     * 
    * Functions:
    * - fopen(): Opens a file.
    * - fclose(): Closes a file.
    * - fprintf(): Writes formatted output to a file.
    * - fscanf(): Reads formatted input from a file.
    * - fgetc(): Reads a character from a file.
    * - fputc(): Writes a character to a file.
    * - fgets(): Reads a string from a file.
    * - fputs(): Writes a string to a file.
    * - fread(): Reads binary data from a file.
    * - fwrite(): Writes binary data to a file.
     * 
     * Modes:
     * - "r": Read mode. Opens a file for reading.
     * - "w": Write mode. Opens a file for writing (creates a new file or truncates an existing file).
     * - "a": Append mode. Opens a file for appending (creates a new file if it doesn't exist).
     * - "r+": Read/update mode. Opens a file for both reading and writing.
     * - "w+": Write/update mode. Opens a file for both reading and writing (creates a new file or truncates an existing file).
     * - "a+": Append/update mode. Opens a file for both reading and appending (creates a new file if it doesn't exist).
     * 
     * Additional Operations:
     * - remove(): Deletes a file. Usage: remove("filename");
     * - rename(): Renames a file. Usage: rename("oldname", "newname");
     * 
     * Best Practices:
     * - Always check if the file was opened successfully by verifying the file pointer is not NULL.
     * - Always close the file using fclose() to free resources.
     * - Use buffer sizes that are appropriate for the data being read or written to avoid buffer overflows.
     * - Handle errors gracefully, providing meaningful messages to the user.
     * - When writing to a file, ensure data integrity by checking the return values of write operations.
     * - Avoid using hardcoded file paths; consider using relative paths or configuration files.
     */

    FILE *file;
    char buffer[255];

    // Writing to a file
    file = fopen("example.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }
    fprintf(file, "Hello, World!\n");
    fputs("This is a test.\n", file);
    fclose(file);

    // Reading from a file
    file = fopen("example.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }
    while (fgets(buffer, 255, file) != NULL) {
        printf("%s", buffer);
    }
    fclose(file);
}

// END OF FILE