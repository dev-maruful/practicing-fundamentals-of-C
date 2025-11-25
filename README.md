# Variables:

variable is the name of a memory location which stores some data.

### **Rules:**

1. variables are case sensitive
2. 1st character is alphabet or ‘_’
3. no comma/blank space
4. No other symbol other than ‘_’

# Data Types:

| **data type** | **size in bytes** |
| --- | --- |
| char or signed char | 1 |
| unsigned char | 1 |
| int or signed int  | 2 |
| unsigned int | 2 |
| short int or unsigned short int | 2 |
| signed short int | 2 |
| long int or signed long int | 4 |
| unsigned long int | 4 |
| float | 4 |
| double | 8 |
| long double | 10 |

# Keywords:

reserved words that have special meaning to the compiler, 32 keywords in C

| auto | double | int | struct |
| --- | --- | --- | --- |
| break | else | long | switch |
| case | enum | register | typedef |
| char | extern | return | union |
| continue | for | signed | void |
| do | if | static | while |
| default | goto | sizeof | volatile |
| const | float | short | unsigned |

# Output: Cases

1. integers
    
    printf(”age is %d”, age);
    
2. real numbers
    
    printf(”value of pi is %f”, pi);
    
3. characters
    
    printf(”star look like this %c”, star);
    

%d, %f, %c, etc called format specifiers

# Instructions

these are statements in a program:

### **Types:**

1. type declaration instructions
2. arithmetic instructions
3. control instructions

type declaration instructions → declare variable before using it

arithmetic instructions → a + b → a and b are operands and + is operator

control instructions → used to determine flow of a program

1. sequence control
2. decision control (if-else)
3. loop control (for, while, do-while)
4. case control (switch)

# Operators

1. arithmetic operators → +, -, *, /, %
2. relational operators → ==, >, ≥, <, ≤, ≠
3. logical operators → &&(AND), ||(OR), !(NOT)
4. bitwise operators
5. assignment operators → =, +=, -=, *=, /=, %= (all they called shorthand operator(not the =))
6. ternary operators → conditional operator → “condition” ? true : false

true = 1, false = 0

# Operator Precedence

| Priority | Operator |
| --- | --- |
| 1 | ! |
| 2 | *, /, % |
| 3 | +, - |
| 4 | <, ≤, >, ≥ |
| 5 | ==, ≠ |
| 6 | && |
| 7 | || |
| 8 | = |

# Conditional statements

types: if-else, switch

block is a combination of statements

we can shift to C++ or Java very easily if we know C

break statement → exit the loop

break exits from all the loops. If we have nested loops and we have break in the last child loop, break will exit us from the the first parent loop also

continue statement → skip to next iteration

# Functions

block of code that performs particular task

take argument → do work → return result

it can be used multiple times

increase code reusability

### **Properties:**

- execution always starts from main
- a function gets called directly or indirectly from main
- there can be multiple functions in a program

### **Function types:**

Library function → special functions inbuilt in C → scanf(), printf()

User defined → declared and defined by programmer

### **Passing Arguments:**

functions can take value(parameter) and give some value(return value)

### **Argument v/s Parameter**

| values that are passed in function call | values in function declaration and definition |
| --- | --- |
| used to send value | used to receive value |
| actual parameter | formal parameters |

### Note

1. function can only return one value at a time
2. changes to parameters in function don’t change the values in calling function

because a copy of argument is passed to the function

### Recursion

when a function calls itself, it’s called recursion

### Properties of Recursion

1. anything that can be done with Iteration(loop), can be done with recursion and vice-versa.
2. recursion can sometimes give the most simple solution.
3. Base case is the condition which stops recursion.
4. Iteration has infinite loop and Recursion has stack overflow

# Pointers

a variable that stores the memory address of another variable

format specifier: %p → hexadecimal, %u → unsigned int

### Pointer to Pointer

a variable that stores the memory address of another pointer

### Pointers in Function call

Call by Value → we pass value of variable as argument

Call by Reference → we pass address of variable as argument

### Pointer Arithmetic

- we can also subtract one pointer from another
- we can also compare 2 pointers

Array is a Pointer

# Arrays

Collection of similar data types stored at contiguous memory locations

### Arrays as Function Argument

// Function Declaration

void printNumbers(int arr[], int n) → declare as square brackets

or

void printNumbers(int *arr, int n) → declare as pointer

// Function Call

printNumbers(arr, n);

### Multidimensional Arrays

2D Arrays

int arr[][] = {{1, 2}, {3, 4}}; // Declaration

// Access

arr[0][0]

arr[0][1]

arr[1][0]

arr[1][1]

# Strings

A character array terminated by a ‘\0’ (null character)

null character denotes string termination

examples:

char name[] = {’A’, ‘D’, ‘N’, ‘A’, ‘N’, ‘\0’};

char name[] = “ADNAN”;

String Format Specifier → “%s”

char name[] = “Adnan”;

printf(”%s”, name);

## Important

scanf() cannot input multi-word strings with spaces

## String Functions

gets(str) → Dangerous & Outdated

input a string(even multiword)

puts(str)

output a string

fgets(str, n, file)

stops when n-1 chars input or new line is entered

### String using Pointers

char *str = “Hello World”;

store string in memory & the assigned address is stored in the char pointer ‘str’

char *str = “Hello World”; // can be reinitialized

char str[] = “Hello World”; // cannot be reinitialized

# Standard Library Functions

<string.h>

1. strlen(str)
    
    count number of characters excluding ‘\0’
    
2. strcpy(newStr, oldStr)
    
    copies values of old string to new string
    
3. strcat(firstStr, secStr)
    
    concatenates first string with second string
    
4. strcmp(firstStr, secStr)
    
    Compare 2 strings and returns a value
    
    0 → string equal
    
    positive → first > second (ASCII)
    
    negative → first < second (ASCII)
    

# Structures

a collection of values of different data types

### Syntax

struct student {

char name[100];

int roll;

float cgpa;

}; // here statement terminator is mandatory

call → struct student s1; s1.cgpa = 7.5;

### typedef Keyword

used to create alias for data types

# File IO

File → container in a storage device to store data

- RAM is volatile
- Contents are lost when program terminates
- Files are used to persist the data

## File Pointer

FILE is a (hidden)structure that needs to be created for opening a file

a FILE ptr that points to this structure & is used to access the file.

FILE *fptr;

### Opening a File

FILE *fptr;

fptr = fopen(”filename”, mode); // mode → read, write, etc.

### Closing a File

fclose(fptr);

### File Opening Modes

“r” → open to read

“rb” → open to read in binary

“w” → open to write

“wb” → open to write in binary

“a” → open to append

### Reading from a File

char ch;

fscanf(fptr, “%c”, &ch);

### Writing to a File

char ch = ‘A’;

fprintf(fptr, “%c”, ch);

### Read & Write a char

fgetc(fptr); // for read

fputc(’A’, fptr); // for write

### EOF (End Of File)

fgetc returns EOF to show that the file has ended

# Dynamic Memory Allocation

It is a way to allocate memory to a data structure during the runtime.

we need some functions to allocate & free memory dynamically.

## Functions for DMA

1. malloc() → stands for memory allocation
2. calloc() → stands for continuous allocation
3. free()
4. realloc() → stand for re-allocation

### malloc() → memory allocation

mandatory library → <stdlib.h>

takes number of bytes to be allocated & returns a pointer of type void

ptr = (int*) malloc(5 * sizeof(int)); // int* is the typecast for void ptr to int ptr

### calloc() → continuous allocation

initializes with 0

ptr = (int*)calloc(5, sizeof(int));

### free()

we use it to free memory that is allocated using malloc & calloc

free(ptr);

### realloc()

reallocate(increase or decrease) memory using the same pointer & size.

ptr = realloc(ptr, newSize);
