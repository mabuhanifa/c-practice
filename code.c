#include <stdio.h>
#include <stdbool.h>
// Create variables

int main()
{
    int myNum = 5;           // Integer (whole number)
    float myFloatNum = 5.99; // Floating point number
    char myLetter = 'D';     // Character

    int myNumbers[] = {25, 50, 75, 100};
    printf("%d", myNumbers[0]);

    char greetings[] = "Hello World!";
    printf("%c", greetings[0]);

    // Print variables
    printf("%d\n", myNum);
    printf("%f\n", myFloatNum);
    printf("%c\n", myLetter);

    int age = 25;
    float pi = 3.14;
    char grade = 'A';

    int x = 5, y = 6, z = 50;
    printf("%d", x + y + z);

    bool isProgrammingFun = true;
    bool isFishTasty = false;

    int time = 20;
    (time < 18) ? printf("Good day.") : printf("Good evening.");

    /*

    Operator 	        Name 	        Description 	                                                  Example
        + 	        Addition 	        Adds together two values 	                                        x + y
        - 	        Subtraction 	    Subtracts one value from another 	                                x - y
        * 	        Multiplication 	    Multiplies two values 	                                            x * y
        / 	        Division 	        Divides one value by another 	                                    x / y
        % 	        Modulus 	        Returns the division remainder 	                                    x % y
        ++ 	        Increment 	        Increases the value of a variable by 1 	                            ++x
        -- 	        Decrement 	           Decreases the value of a variable by 1 	-                       -x


    */
    return 0;
}