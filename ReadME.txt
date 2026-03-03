Welcome to the world of C++!

Here I will update what topics I am studying each day:

2/20/2026
*Statements and structure of a program.
2/21/2026
*Comments
*Introduction to Objects and variables
*Variable Assignment and Initialization
*Introduction to iostream: cout, cin, and endl
2.22.2026
*nothing
2.23.2026
*nothing
2.24.2026
*nothing
2/25/2026
Finished Introduction to iostream: cout, cin and endl
1.6 - Uninitialized variable and undefined behavior
*Initialized = The object is given a known value at the point of definition
*Assignment = The object is given a known value beyond the point of definition
*Uninitialized = The object has not been given a known value yet 
3/2/2026
Continuation of 1.6
1.7 - Done
1.8 - Done
1.9 - Introduction to Literals and Operators 
A literal (also known as a literal constant) is a fixed value that has been directly inserted into the source code
*Literals are stored only in the executable and therefore can't be altered after creation
unlike varibles which are stored in memory and can be edited later.
The number of operands that an operator takes as input is called the operator's arity.
Four types of Operators in C++:
1. Unary: Act on one operand. An example of a unary operator is the "-" operator. 
For example, given -5, operator- takes literal operand 5 and flips its sign to produce new output value "-5".

2. Binary: Operators act on two operands (often called left and right, as the left operand appears on the left side of the operator,
and the right operand appears on the right side of the operator). An example of a binary operator is the + operator. For 
example, given 3 + 4, operator+ takes the left operand 3 and the right operand 4 and applies mathematical addition to
produce new output value 7. The insertion (<<) and extraction(>>) operators are binary operators,
taking std::cout or std::cin on the left side, and the value to output or variable to input to on the right side.

3. Ternary: Act on three operands. There is only one of these in C++ (the conditional operator).

4. Nullary: Act on zero operands. There is only one of these in C++ (the throw operator).

Note: When chaining operations follow PEMDAS for correct use of order of operations.
1.10 - Introduction to Expressions
1.11 - Developing your first program
--Completion of Chapter 1--
2.1 - Introduction to Functions
*Function: a reusable sequence of statements designed to do a particular job
*A function you write yourself is a user-defined function.
*A function call tells the CPU to interrupt the current function and execute another function.
The CPU is essentially putting a bookmark at the current point of execution,
executes the function named in the function call, and then returns to the point it bookmarked
and resumes execution.
**Nomenclature**
The function initiating the function call is the caller, and the function being called(executed)
is the callee. A function call is also sometimes called an invocation, with the caller invoking the callee.
