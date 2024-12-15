/*
This was generated using Github Copilot.

Note: In C, you cannot nest functions within functions. Think of each function as a main function. 
      It was separated into multiple functions to make it easier to read and understand. 
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

// Function declarations
void introductionToC();
void writingAndCompilingProgram();
void structureOfCProgram();
void syntaxAndCodeConventions();
void comments();
void variablesAndConstants();
void dataTypes();
void enumeratedDataTypes();
void typedefKeyword();
void usingPrintfAndScanf();
void workingWithCharacterIO();
void fileIO();
void arithmeticOperators();
void relationalOperators();
void logicalOperators();
void bitwiseOperators();
void assignmentOperators();
void ternaryOperator();
void conditionalStatements();
void switchCaseStatements();
void loops();
void breakingControlFlow();
void functionDeclarationAndDefinition();
void callingFunctions();
void argumentsAndReturnValues();
void passingByValueAndReference();
void recursion();
void functionPrototypes();
void scopeAndLifetimeOfVariables();
void basicsOfPointers();
void pointerArithmetic();
void pointersToPointers();
void passingPointersToFunctions();
void pointerArrays();
void dynamicMemoryAllocation();
void oneDimensionalArrays();
void twoDimensionalArrays();
void multidimensionalArrays();
void stringsInC();
void commonStringFunctions();
void arrayOfStrings();
void definingAndUsingStruct();
void arrayOfStructures();
void nestedStructures();
void unionKeyword();
void typedefWithStructures();
void memoryManagementAndAllocation();
void commandLineArguments(int argc, char *argv[]);
void preprocessorDirectives();
void fileHandlingAndIOOperations();
void errorHandlingWithErrno();
void inlineAssembly();
void bitManipulation();
void volatileAndConstKeywords();
void arraysAndLinkedLists();
void stacksAndQueues();
void treesAndBinaryTrees();
void hashTables();
void graphs();
void sortingAndSearchingAlgorithms();
void debuggingTools();
void profilingTools();
void compilerOptimizations();
void avoidingUndefinedBehavior();
void standardLibraryFunctions();
void workingWithTime();
void randomNumbers();
void signalHandling();
void threadsAndConcurrency();

int main(int argc, char *argv[]) {
    // Call each function here to demonstrate
    introductionToC();
    writingAndCompilingProgram();
    structureOfCProgram();
    syntaxAndCodeConventions();
    comments();
    variablesAndConstants();
    dataTypes();
    enumeratedDataTypes();
    typedefKeyword();
    usingPrintfAndScanf();
    workingWithCharacterIO();
    fileIO();
    arithmeticOperators();
    relationalOperators();
    logicalOperators();
    bitwiseOperators();
    assignmentOperators();
    ternaryOperator();
    conditionalStatements();
    switchCaseStatements();
    loops();
    breakingControlFlow();
    functionDeclarationAndDefinition();
    callingFunctions();
    argumentsAndReturnValues();
    passingByValueAndReference();
    recursion();
    functionPrototypes();
    scopeAndLifetimeOfVariables();
    basicsOfPointers();
    pointerArithmetic();
    pointersToPointers();
    passingPointersToFunctions();
    pointerArrays();
    dynamicMemoryAllocation();
    oneDimensionalArrays();
    twoDimensionalArrays();
    multidimensionalArrays();
    stringsInC();
    commonStringFunctions();
    arrayOfStrings();
    definingAndUsingStruct();
    arrayOfStructures();
    nestedStructures();
    unionKeyword();
    typedefWithStructures();
    memoryManagementAndAllocation();
    commandLineArguments(argc, argv);
    preprocessorDirectives();
    fileHandlingAndIOOperations();
    errorHandlingWithErrno();
    inlineAssembly();
    bitManipulation();
    volatileAndConstKeywords();
    arraysAndLinkedLists();
    stacksAndQueues();
    treesAndBinaryTrees();
    hashTables();
    graphs();
    sortingAndSearchingAlgorithms();
    debuggingTools();
    profilingTools();
    compilerOptimizations();
    avoidingUndefinedBehavior();
    standardLibraryFunctions();
    workingWithTime();
    randomNumbers();
    signalHandling();
    threadsAndConcurrency();

    return 0;
}

// Function definitions
void introductionToC() {
    // Introduction to C
    // C is a general-purpose programming language developed by Dennis Ritchie at Bell Labs in 1972.
}

void writingAndCompilingProgram() {
    // Writing and Compiling a Program
    // To write a C program, you need a text editor and a C compiler like GCC.
    // Example:
    // #include <stdio.h>
    // int main() {
    //     printf("Hello, World!\n");
    //     return 0;
    // }
    // To compile: `gcc program.c -o program`
}

void structureOfCProgram() {
    // Structure of a C Program
    // A C program typically includes the following:
    // - `#include` directives for header files
    // - `main()` function
    // - Variable declarations
    // - Statements and expressions
}

void syntaxAndCodeConventions() {
    // Syntax and Code Conventions
    // Follow consistent code formatting and naming conventions for readability.
}

void comments() {
    // Comments
    // Single-line comments: // comment
    // Multi-line comments: /* comment */
}

void variablesAndConstants() {
    // Variables and Constants
    // Variables are declared with a type and name. Constants are declared with `const` keyword.
    int age = 21;              // integer
    float gpa = 2.05;          // floating point number
    char grade = 'C';          // single character
    const double PI = 3.14159; // constant
}

void dataTypes() {
    // Data Types
    // Basic data types: `int`, `float`, `char`, `double`
    // Type modifiers: `short`, `long`, `unsigned`, `signed`
    char a = 'C';                   // single character
    char b[] = "Bro";               // array of characters
    float c = 3.141592;             // float
    double d = 3.141592653589793;   // double
    bool e = true;                  // boolean
    char f = 120;                   // char as numeric value
    unsigned char g = 255;          // unsigned char as numeric value
    short h = 32767;                // short
    unsigned short i = 65535;       // unsigned short
    int j = 2147483647;             // int
    unsigned int k = 4294967295;    // unsigned int
    long long int l = 9223372036854775807; // long long int
    unsigned long long int m = 18446744073709551615U; // unsigned long long int
}

void enumeratedDataTypes() {
    // Enumerated Data Types
    // Enums are used to define named integer constants.
    // Example:
    enum Color { RED, GREEN, BLUE };
    enum Color myColor = RED;
}

void typedefKeyword() {
    // typedef Keyword
    // `typedef` is used to create type aliases.
    // Example:
    typedef unsigned long ulong;
    ulong myNumber = 123456789;
}

void usingPrintfAndScanf() {
    // Using printf and scanf
    // `printf` is used for output, `scanf` is used for input.
    // Example:
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Your age is %d\n", age);
}

void workingWithCharacterIO() {
    // Working with Character I/O
    // `getchar` and `putchar` are used for character input and output.
    char c;
    printf("Enter a character: ");
    c = getchar();
    printf("You entered: ");
    putchar(c);
    printf("\n");
}

void fileIO() {
    // File I/O
    // Functions: `fopen`, `fprintf`, `fscanf`, `fclose`
    // Example:
    FILE *file = fopen("example.txt", "w");
    if (file != NULL) {
        fprintf(file, "Hello, file!\n");
        fclose(file);
    }
}

void arithmeticOperators() {
    // Arithmetic Operators
    // Operators: `+`, `-`, `*`, `/`, `%`
    int a = 10;
    int b = 20;
    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    int quotient = a / b;
    int remainder = a % b;
}

void relationalOperators() {
    // Relational Operators
    // Operators: `==`, `!=`, `<`, `>`, `<=`, `>=`
    int a = 10;
    int b = 20;
    bool isEqual = (a == b);
    bool isNotEqual = (a != b);
    bool isLessThan = (a < b);
    bool isGreaterThan = (a > b);
    bool isLessThanOrEqual = (a <= b);
    bool isGreaterThanOrEqual = (a >= b);
}

void logicalOperators() {
    // Logical Operators
    // Operators: `&&`, `||`, `!`
    bool a = true;
    bool b = false;
    bool andResult = a && b;
    bool orResult = a || b;
    bool notResult = !a;
}

void bitwiseOperators() {
    // Bitwise Operators
    // Operators: `&`, `|`, `^`, `~`, `<<`, `>>`
    int a = 5;  // 0101 in binary
    int b = 9;  // 1001 in binary
    int andResult = a & b;  // 0001 in binary
    int orResult = a | b;   // 1101 in binary
    int xorResult = a ^ b;  // 1100 in binary
    int notResult = ~a;     // 1010 in binary (two's complement)
    int leftShift = a << 1; // 1010 in binary
    int rightShift = a >> 1;// 0010 in binary
}

void assignmentOperators() {
    // Assignment and Compound Assignment Operators
    // Operators: `=`, `+=`, `-=`, `*=`, `/=`, `%=`
    int a = 10;
    int b = 20;
    a += b; // a = a + b
    a -= b; // a = a - b
    a *= b; // a = a * b
    a /= b; // a = a / b
    a %= b; // a = a % b
}

void ternaryOperator() {
    // Ternary Operator
    // Operator: `? :`
    int a = 10;
    int b = 20;
    int max = (a > b) ? a : b;
}

void conditionalStatements() {
    // Conditional Statements
    // Statements: `if`, `else`, `else if`
    int a = 10;
    if (a > 0) {
        // a is positive
    } else if (a < 0) {
        // a is negative
    } else {
        // a is zero
    }
}

void switchCaseStatements() {
    // Switch-Case Statements
    // Statements: `switch`, `case`
    int day = 3;
    switch (day) {
        case 1:
            // Monday
            break;
        case 2:
            // Tuesday
            break;
        case 3:
            // Wednesday
            break;
        default:
            // Other days
            break;
    }
}

void loops() {
    // Loops
    // Loops: `for`, `while`, `do-while`
    for (int i = 0; i < 5; i++) {
        // Loop body
    }

    int j = 0;
    while (j < 5) {
        // Loop body
        j++;
    }

    int k = 0;
    do {
        // Loop body
        k++;
    } while (k < 5);
}

void breakingControlFlow() {
    // Breaking Control Flow
    // Statements: `break`, `continue`, `goto`
    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            break; // Exit loop
        }
        if (i % 2 == 0) {
            continue; // Skip to next iteration
        }
    }

    int a = 10;
    if (a > 0) {
        goto label; // Jump to label
    }
    label:
    // Code to execute after goto
}

void functionDeclarationAndDefinition() {
    // Function Declaration and Definition
    // Functions are declared with a return type, name, and parameters.
    // Example:
    // int add(int a, int b);
    // int add(int a, int b) {
    //     return a + b;
    // }
}

void callingFunctions() {
    // Calling Functions
    // Functions are called by their name followed by arguments in parentheses.
    // Example:
    // int result = add(5, 3);
}

void argumentsAndReturnValues() {
    // Arguments and Return Values
    // Functions can take arguments and return values.
    // Example:
    // int add(int a, int b) {
    //     return a + b;
    // }
    // int result = add(5, 3);
}

void passingByValueAndReference() {
    // Passing by Value and Reference
    // Arguments can be passed by value or by reference (using pointers).
    // Example:
    // void increment(int *a) {
    //     (*a)++;
    // }
    // int value = 5;
    // increment(&value);
}

void recursion() {
    // Recursion
    // Functions can call themselves recursively.
    // Example:
    // int factorial(int n) {
    //     if (n == 0) {
    //         return 1;
    //     } else {
    //         return n * factorial(n - 1);
    //     }
    // }
}

void functionPrototypes() {
    // Function Prototypes
    // Function prototypes are declarations of functions before their definitions.
    // Example:
    // int add(int a, int b);
    // int add(int a, int b) {
    //     return a + b;
    // }
}

void scopeAndLifetimeOfVariables() {
    // Scope and Lifetime of Variables
    // Variables can be local, global, or static.
    // Example:
    int globalVar = 0; // Global variable

    void function() {
        int localVar = 0; // Local variable
        static int staticVar = 0; // Static variable
    }
}

void basicsOfPointers() {
    // Basics of Pointers
    // Pointers are variables that store memory addresses.
    int a = 10;
    int *p = &a; // Pointer to integer
}

void pointerArithmetic() {
    // Pointer Arithmetic
    // Pointers can be incremented, decremented, and used in arithmetic operations.
    int arr[5] = {1, 2, 3, 4, 5};
    int *p = arr;
    p++; // Move to next element
    p--; // Move to previous element
}

void pointersToPointers() {
    // Pointers to Pointers
    // Pointers can point to other pointers.
    int a = 10;
    int *p = &a;
    int **pp = &p; // Pointer to pointer
}

void passingPointersToFunctions() {
    // Passing Pointers to Functions
    // Pointers can be passed to functions as arguments.
    // Example:
    // void increment(int *a) {
    //     (*a)++;
    // }
    // int value = 5;
    // increment(&value);
}

void pointerArrays() {
    // Pointer Arrays
    // Arrays can contain pointers.
    int *arr[5];
    int a = 1, b = 2, c = 3, d = 4, e = 5;
    arr[0] = &a;
    arr[1] = &b;
    arr[2] = &c;
    arr[3] = &d;
    arr[4] = &e;
}

void dynamicMemoryAllocation() {
    // Dynamic Memory Allocation
    // Functions: `malloc`, `calloc`, `realloc`, `free`
    int *p = (int *)malloc(5 * sizeof(int)); // Allocate memory for 5 integers
    if (p != NULL) {
        for (int i = 0; i < 5; i++) {
            p[i] = i + 1;
        }
        free(p); // Free allocated memory
    }
}

void oneDimensionalArrays() {
    // One-Dimensional Arrays
    // Arrays are declared with a type and size.
    int arr[5] = {1, 2, 3, 4, 5};
}

void twoDimensionalArrays() {
    // Two-Dimensional Arrays
    // Arrays can have multiple dimensions.
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
}

void multidimensionalArrays() {
    // Multidimensional Arrays
    // Arrays can have more than two dimensions.
    int tensor[2][2][2] = {
        {
            {1, 2},
            {3, 4}
        },
        {
            {5, 6},
            {7, 8}
        }
    };
}

void stringsInC() {
    // Strings in C
    // Strings are arrays of characters.
    char str[] = "Hello, World!";
}

void commonStringFunctions() {
    // Common String Functions
    // Functions: `strlen`, `strcpy`, `strcmp`, etc.
    char str1[20];
    char str2[] = "Hello";
    strcpy(str1, str2); // Copy str2 to str1
    int len = strlen(str1); // Get length of str1
    int cmp = strcmp(str1, str2); // Compare str1 and str2
}

void arrayOfStrings() {
    // Array of Strings
    // Arrays can contain strings.
    char *arr[3] = {"Hello", "World", "!"};
}

void definingAndUsingStruct() {
    // Defining and Using struct
    // Structures are used to group different data types.
    struct Person {
        char name[50];
        int age;
    };
    struct Person person1;
    strcpy(person1.name, "John");
    person1.age = 30;
}

void arrayOfStructures() {
    // Array of Structures
    // Arrays can contain structures.
    struct Person {
        char name[50];
        int age;
    };
    struct Person people[2] = {{"John", 30}, {"Jane", 25}};
}

void nestedStructures() {
    // Nested Structures
    // Structures can contain other structures.
    struct Date {
        int day;
        int month;
        int year;
    };
    struct Person {
        char name[50];
        int age;
        struct Date birthdate;
    };
    struct Person person1 = {"John", 30, {15, 5, 1990}};
}

void unionKeyword() {
    // union Keyword
    // Unions are used to store different data types in the same memory location.
    union Data {
        int i;
        float f;
        char str[20];
    };
    union Data data;
    data.i = 10;
    data.f = 220.5;
    strcpy(data.str, "C Programming");
}

void typedefWithStructures() {
    // typedef with Structures
    // `typedef` can be used with structures to create type aliases.
    typedef struct {
        char name[50];
        int age;
    } Person;
    Person person1 = {"John", 30};
}

void memoryManagementAndAllocation() {
    // Memory Management and Allocation
    // Efficient memory usage is crucial in C programming.
    // Functions: `malloc`, `calloc`, `realloc`, `free`
    int *ptr;
    ptr = (int*)malloc(10 * sizeof(int)); // dynamically allocate memory
    if (ptr == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }
    free(ptr); // deallocate memory
}

void commandLineArguments(int argc, char *argv[]) {
    // Command-Line Arguments
    // Arguments passed to `main` function: `argc` and `argv`
    printf("Program name: %s\n", argv[0]);
    if (argc > 1) {
        printf("Additional argument: %s\n", argv[1]);
    }
}

void preprocessorDirectives() {
    // Preprocessor Directives
    // Directives: `#include`, `#define`, macros
    #define PI 3.14159
    printf("Value of PI: %f\n", PI);
}

void fileHandlingAndIOOperations() {
    // File Handling and I/O Operations
    // Advanced file operations in C.
    FILE *file;
    file = fopen("example.txt", "w");
    if (file != NULL) {
        fprintf(file, "Hello, file!\n");
        fclose(file);
    }
}

void errorHandlingWithErrno() {
    // Error Handling with errno
    // Using `errno` for error checking.
    FILE *file;
    file = fopen("nonexistent.txt", "r");
    if (file == NULL) {
        perror("Error");
    }
}

void inlineAssembly() {
    // Inline Assembly
    // Embedding assembly code in C programs.
    int a = 10, b;
    asm ("movl %1, %0\n\t"
         "addl $1, %0"
         : "=r" (b)
         : "r" (a));
    printf("Result: %d\n", b);
}

void bitManipulation() {
    // Bit Manipulation
    // Operations on bits.
    unsigned char a = 5, b = 9;
    printf("a & b = %d\n", a & b); // AND
    printf("a | b = %d\n", a | b); // OR
    printf("a ^ b = %d\n", a ^ b); // XOR
    printf("~a = %d\n", ~a);       // NOT
    printf("b << 1 = %d\n", b << 1); // left shift
    printf("b >> 1 = %d\n", b >> 1); // right shift
}

void volatileAndConstKeywords() {
    // volatile and const Keywords
    // Special variable qualifiers.
    volatile int var = 10; // tells the compiler not to optimize the variable
    const int constantVar = 20; // constant variable
}

void arraysAndLinkedLists() {
    // Arrays and Linked Lists
    // Basic data structures in C.
    int arr[5] = {1, 2, 3, 4, 5}; // array
    struct Node {
        int data;
        struct Node* next;
    };
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    head->data = 1; // assign data in first node
    head->next = second; // link first node with second
    second->data = 2; // assign data to second node
    second->next = third;
    third->data = 3; // assign data to third node
    third->next = NULL;
}

void stacksAndQueues() {
    // Stacks and Queues
    // LIFO and FIFO structures.
    // Stack implementation using array
    int stack[100], top = -1;
    void push(int x) {
        stack[++top] = x;
    }
    int pop() {
        return stack[top--];
    }
    // Queue implementation using array
    int queue[100], front = -1, rear = -1;
    void enqueue(int x) {
        queue[++rear] = x;
    }
    int dequeue() {
        return queue[++front];
    }
}

void treesAndBinaryTrees() {
    // Trees and Binary Trees
    // Hierarchical data structures.
    struct Node {
        int data;
        struct Node* left;
        struct Node* right;
    };
    struct Node* newNode(int data) {
        struct Node* node = (struct Node*)malloc(sizeof(struct Node));
        node->data = data;
        node->left = NULL;
        node->right = NULL;
        return node;
    }
}

void hashTables() {
    // Hash Tables
    // Key-value pairs.
    #define SIZE 20
    struct DataItem {
        int data;
        int key;
    };
    struct DataItem* hashArray[SIZE];
    int hashCode(int key) {
        return key % SIZE;
    }
    void insert(int key, int data) {
        struct DataItem* item = (struct DataItem*)malloc(sizeof(struct DataItem));
        item->data = data;
        item->key = key;
        int hashIndex = hashCode(key);
        while (hashArray[hashIndex] != NULL) {
            ++hashIndex;
            hashIndex %= SIZE;
        }
        hashArray[hashIndex] = item;
    }
}

void graphs() {
    // Graphs
    // Graph representation and traversal.
    #define V 5
    void addEdge(int graph[V][V], int src, int dest) {
        graph[src][dest] = 1;
        graph[dest][src] = 1;
    }
    void printGraph(int graph[V][V]) {
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                printf("%d ", graph[i][j]);
            }
            printf("\n");
        }
    }
}

void sortingAndSearchingAlgorithms() {
    // Sorting and Searching Algorithms
    // Common algorithms in C.
    void bubbleSort(int arr[], int n) {
        for (int i = 0; i < n-1; i++) {
            for (int j = 0; j < n-i-1; j++) {
                if (arr[j] > arr[j+1]) {
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
    }
    int binarySearch(int arr[], int l, int r, int x) {
        while (l <= r) {
            int m = l + (r - l) / 2;
            if (arr[m] == x) return m;
            if (arr[m] < x) l = m + 1;
            else r = m - 1;
        }
        return -1;
    }
}

void debuggingTools() {
    // Debugging Tools
    // Using `gdb` for debugging.
    // Compile with `-g` flag: `gcc -g program.c -o program`
    // Run gdb: `gdb ./program`
    // Common gdb commands: `break`, `run`, `next`, `print`, `continue`, `quit`
}

void profilingTools() {
    // Profiling Tools
    // Performance analysis tools.
    // Use `gprof` for profiling.
    // Compile with `-pg` flag: `gcc -pg program.c -o program`
    // Run the program: `./program`
    // Generate profiling report: `gprof ./program gmon.out > analysis.txt`
}

void compilerOptimizations() {
    // Compiler Optimizations
    // Using `-O` flags for optimization.
    // `-O1`, `-O2`, `-O3`, `-Os`, `-Ofast`
    // Example: `gcc -O2 program.c -o program`
}

void avoidingUndefinedBehavior() {
    // Avoiding Undefined Behavior
    // Writing safe and predictable code.
    // Examples of undefined behavior: dividing by zero, accessing out-of-bounds array elements, using uninitialized variables
}

void standardLibraryFunctions() {
    // Standard Library Functions
    // Common functions from `stdlib.h`, `math.h`, etc.
    int num = atoi("123");
    double result = sqrt(16.0);
    char str[20];
    strcpy(str, "Hello");
}

void workingWithTime() {
    // Working with Time
    // Using `time.h` for time-related functions.
    time_t t;
    time(&t);
    printf("Current time: %s", ctime(&t));
}

void randomNumbers() {
    // Random Numbers
    // Generating random numbers using `rand` and `srand`.
    srand(time(0));
    int randomNum = rand();
    printf("Random number: %d\n", randomNum);
}

void signalHandling() {
    // Signal Handling
    // Using `signal.h` for handling signals.
    void handleSignal(int signal) {
        printf("Caught signal %d\n", signal);
    }
    signal(SIGINT, handleSignal);
}

void threadsAndConcurrency() {
    // Threads and Concurrency
    // Using libraries like `pthreads` for multithreading.
    #include <pthread.h>
    void* threadFunction(void* arg) {
        printf("Thread running\n");
        return NULL;
    }
    pthread_t thread;
    pthread_create(&thread, NULL, threadFunction, NULL);
    pthread_join(thread, NULL);
}

