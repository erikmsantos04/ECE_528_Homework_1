# ECE_528_Homework_1

1) a) What is the difference between a compiler and an interpreter?

A compiler translates all the source code into machine language all at once before it executes. An interpreter translates and executes the code line by line.


   b) What is the output of a C program's main() function by default?

By default, the output of a C program’s main() function is the integer value of 0.

2) What are the header files in C and what is the purpose of the #include directive?

Header files are C declarations and macro definitions. The #include directive is a C preprocessing directive that allows us to use the header files.

3) Explain how to declare and define a function in C. What is the purpose of the return statement in a function? Can a function have more than one return statement?

A function can be declared and defined using a function prototype that informs the compiler of its name, return type, and parameters. ( type Name(parameter1, parameter2) ) It also needs a function body that contains statements that specify what the function does. The purpose of the return statement in a function is to stop the execution of the function and pass a value back to the code that called it. A function can have more than one return statement, but only one will be executed every time that function is called.

4) What is type casting? Provide an example C function that demonstrates explicit type casting from double to int. The function should accept two arguments that are both double and return their sum as an integer.

Type casting is the process of converting variables from one data type to another. 

int add(double a, double b) {
	double sum = a + b;
	Return (int) sum;
}


5) Explain the difference between local and global variables. Provide an example of each.

The difference between local and global variables is where they can be accessed from and how long they stay in our system’s memory.

#include <stdio.h>

const char* name = “Erik”; // Global variable
void clientAge(void) {
	int age = 22; // Local variable
	printf(“This is their age: %d\n“, age);
}

int main(void) {
	clientAge();
	printf(“ This is %s”, “‘s age”);	
	return 0;
}


6) How are strings declared and initialized in C? What is the role of the null terminator '\0'?

Strings are declared and initialized as an array of characters with a specific ending value. The role of the null terminator is to signal the end of a character string and it is necessary to allocate one extra space in an array for it.


7) What is a pointer in C? How do you pass a pointer to a function? What advantages are there to passing a pointer instead of a value?

A pointer in C is a variable that holds the memory address of another variable. In order to pass a pointer to a function, you have to define the function parameter as a pointer type and then pass the address of your data. The advantages of passing a pointer instead of a value are being able to access the source memory, an increase in performance because no data is duplicated, and the ability to return multiple pieces of data at once by passing multiple pointers into a function.


8) What does the * operator and the & operator do in the context of pointers?

The * operator declares a pointer or allows you to access the value at the address. The & operator fetches the memory address of a variable.

9) What is the difference between while and do...while loops?

While loops check a condition before they execute their code. Do-while loops check a condition after they execute their code.

10) What does the break statement do? How is it different from the continue statement?

The break statement will terminate a loop or switch statement and proceed to the statement that immediately follows the loop or switch that was exited. It is different from the continue statement because the break exits the loop, while the continue proceeds to the next iteration of the loop.

11) Explain the use of bitwise operators (i.e. &, |, ^, ~, <<, >>) in C. Which bitwise operators can be used to set, clear, toggle, or check a specific bit in an integer variable?

Bitwise operators are used to modify the values of a register by setting, clearing, or toggling specific bits that you would like to change. We will use | (OR) to set bits, & (AND) and ~ (NOT) to clear bits, ^ (XOR) to toggle bits, and & (AND) to check a specific bit in an integer variable.

12) What is the purpose of the PxSEL0 and PxSEL1 GPIO registers? Write two statements that select the GPIO function for the pins P1.0 and P1.7.

The purpose of the PxSEL0 and PxSEL1 GPIO registers is to select the function of the pin being configured. If the bit is 0, then the corresponding pin will be a GPIO pin, otherwise it will be used for a desired function.

P1->SEL0 &= ~0x81;
P1->SEL1 &= ~0x81;

13) Write a void function named P1_1 and P1_4_Init that configures P1.1 and P1.4 as GPIO inputs with pull-up resistors enabled.

14) Write a void function named Buttons_Init that configures the following pins as GPIO inputs with pull-down resistors enabled.
    * P3.1, P3.6, P5.0, P5.4

15) Write a void function named LEDs_Init that configures the following pins as GPIO outputs. Initialize the pins to zero.
    * P7.0 to P7.7
   
# Screenshots
<img width="977" height="877" alt="ECE528_hw1_Sign_ _Magnitude" src="https://github.com/user-attachments/assets/0307557f-1131-4170-9b7d-bd8584b12b96" />
<img width="985" height="776" alt="ECE528_hw1_Bit_Counter" src="https://github.com/user-attachments/assets/58ae9009-c2a9-4a43-97c5-8335d75320b4" />
<img width="940" height="525" alt="ECE528_hw1_Fibonacci" src="https://github.com/user-attachments/assets/057e6520-ed1c-4231-945f-2138f22fd847" />

# References
- Gemini for a couple of Review Questions and clarification for type casting for Bit Counter
- Lecture Notes for Review Questions
