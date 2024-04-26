#include <stdio.h>
#include <stdbool.h>
int main() {
    // printf() displays the string inside quotation
    printf("Hello, World!\n"); // \n adds a new line
    printf("No new line. "); // coming strings will be printed out in one line

    // For printing out integers the command is different ("%d")
    // To print other types, use %c for char and %f for float:
    // Create variables
    int myNum = 15;            // Integer (whole number)
    float myFloatNum = 5.99;   // Floating point number
    char myLetter = 'D';       // Character

    // Print variables (\n is added for new line.)
    printf("%d\n", myNum);
    printf("%f\n", myFloatNum);
    printf("%c\n", myLetter);
    //To combine both text and a variable, separate them with a comma inside the printf() function:
    printf("My favorite number is: %d", myNum);
    printf("My number is %d and my letter is %c", myNum, myLetter);
    
    //If you assign a new value to an existing variable, it will overwrite the previous value:
    int newNum = 15;  // myNum is 15
    newNum = 10;  // Now myNum is 10
    //You can also assign the value of one variable to another:
    int numFirst = 15;
    int numSecond = 23;
    // Assign the value of myOtherNum (23) to myNum
    numFirst = numSecond;
    // myNum is now 23, instead of 15
    printf("%d\n", numFirst);
    int x = 5, y = 6, z = 50;
    printf("%d\n", x + y + z);

    printf("\n\n Real life example: \n\n");
    // Student data
    int studentID = 15;
    int studentAge = 23;
    float studentFee = 75.25;
    char studentGrade = 'B';

    // Print variables
    printf("Student id: %d\n", studentID);
    printf("Student age: %d\n", studentAge);
    printf("Student fee: %f\n", studentFee);
    printf("Student grade: %c\n", studentGrade);
 
    // To learn the size of the element we can use sizeof operator
    int myInt;
    float myFloat;
    double myDouble;
    char myChar;

    printf("\n The size of Integer is: %lu", sizeof(myInt));
    printf("\n The size of Floar is: %lu", sizeof(myFloat));
    printf("\n The size of Double is: %lu", sizeof(myDouble));
    printf("\n The size of Character is: %lu", sizeof(myChar));

    // There are two types of conversion in C:
    // - Implicit Conversion (automatically)
    // - Explicit Conversion (manually)

// Implicit Conversion
// Implicit conversion is done automatically by the compiler when you assign a value of one type to another.

// Example of Implicit conversion
    float sumWrong = 5 / 2;
    printf("\n\n Wrong value: %f", sumWrong); // 2.000000
    // Why is the result 2.00000 and not 2.5? Well, it is because 5 and 2 are still integers in the division. In this case, you need to manually convert the integer values to floating-point values. (see below).
    
    // Example of  Explicit Conversion

    // Explicit conversion is done manually by placing the type in parentheses () in front of the value.
    // Considering our problem from the example above, we can now get the right result:
    // Manual conversion: int to float
    float sumCorrect = (float) 5 / 2;
    printf("\n Correct value: %f", sumCorrect); // 2.500000

    // And since you learned about "decimal precision" in the previous chapter, you could make the output even cleaner by removing the extra zeros (if you like):
    int num1 = 5;
    int num2 = 2;
    float sum12 = (float) num1 / num2;
    printf("\n%.1f\n%.2f\n%f", sum12, sum12, sum12); // 2.5 // 2.50 due to %.2f and // 2.500000 due to %f

    // Constants
    // If you don't want others (or yourself) to change existing variable values, you can use the const keyword.
    // This will declare the variable as "constant", which means unchangeable and read-only:
    // const int myConstNum = 15;  // myNum will always be 15

    // Good Practice
    // Another thing about constant variables, is that it is considered good practice to declare them with uppercase.
    // It is not required, but useful for code readability and common for C programmers.

    // Booleans:
    int myAge = 25;
    int votingAge = 18;
    printf("\n%d", myAge >= votingAge); // Returns 1 (true), meaning 25 year olds are allowed to vote!

    // If...else statements:
    int time = 22;
    if (time < 10) {
    printf("\n Good morning.");
    } else if (time < 20) {
    printf("\n Good day.");
    } else {
    printf("\n Good evening.");
    }
    // Outputs "Good evening."

    //Short Hand If...Else (Ternary Operator):
    // variable = (condition) ? expressionTrue : expressionFalse;
    (time < 18) ? printf("\nGood day.") : printf("\nGood evening.\n\n");

    //Switch
    int day = 9;

    switch (day) {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    // The default keyword specifies some code to run if there is no case match:
    default:
    printf("Looking forward to the Weekend\n");
    }

    // While loops:
    int i = 1;

    while (i<=10) {
        printf("Test\n");
        i++;
    }
    printf("%p", &myAge); // Outputs 0x7ffe5367e044 (Hex Code)

    // For Loops:

    // for (expression 1; expression 2; expression 3) {
    // // code block to be executed
    // }

    // Expression 1 is executed (one time) before the execution of the code block.

    // Expression 2 defines the condition for executing the code block.

    // Expression 3 is executed (every time) after the code block has been executed.

    // The example below will print the numbers 0 to 4:
    int o;

    for (o = 0; o < 5; o++) {
        printf("%d\n", o);
    }

    // In this examlpe, we create a program that only print even values between 0 and 10:

    for (o = 0; o <= 10; o = o + 2) {
        printf("\n Even value: %d", o);
    }

    // Break and Continue (can also be used with While loops):
    // The BREAK statement can also be used to jump out of a loop.
    // The CONTINUE statement breaks one iteration (in the loop),
    // if a specified condition occurs, and continues with the next iteration in the loop.

    // This example skips the value of 4:
    int iContinue;
    printf("\n\nSkipping the 4th element:\n");
    for (iContinue = 0; iContinue < 10; iContinue++) {
        if (iContinue == 4) {
            continue;
        }
        printf("%d\n - ", iContinue); 
    }
    
    // Arrays:
    printf("\n\nArrays:\n");
    int myNumbers[] = {25, 50, 75, 100};
    printf("\n Old value of first element: %d", myNumbers[0]);
    myNumbers[0] = 33;
    printf("\n New value of first element: %d\n", myNumbers[0]);

    // Size or Length of an Array:
    // To get the size of an array, you can use the sizeof operator.
    // However since sizeof operator returns the size of a type in bytes,
    // it will not give correct answer
    // But when you just want to find out how many elements an array has,
    // you can use the following formula (which divides the size of the array by the size of one array element):
    int myNums[] = {10, 25, 50, 75, 100};
    int length = sizeof(myNums) / sizeof(myNums[0]);

    printf("/n%d", length);  // Prints 5

    // Loopingg through elements of array:
    int lengthX = sizeof(myNumbers) / sizeof(myNumbers[0]);
    int ix;

    for (ix = 0; ix < lengthX; ix++) {
    printf("%d\n", myNumbers[ix]);
    }



   return 0;
}