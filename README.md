# Functions-of-Loops
# AIM:
To Study and Implement Loops in C++
# Introduction:
Loops are control structures that enable the repetition of a set of instructions until a specific condition is met. They help avoid repetitive coding by automating repeated execution of code blocks.

# Types of Loops in C++
# for loop

# while loop

# do-while loop

# 1. for loop
Used when the number of repetitions is known before the loop starts.

Consists of three parts: initialization, condition, and update.

The loop starts by initializing a counter or variable.

Before each iteration, the condition is checked; if true, the loop body executes.

After each execution, the counter is updated (usually incremented or decremented).

The loop stops when the condition becomes false.

# 2. while loop
Used when the number of iterations is not known in advance.

The condition is checked before the loop executes each time.

If the condition is true, the loop body runs.

After the loop body runs, the condition is checked again.

The loop continues as long as the condition remains true.

If the condition is false initially, the loop body may never execute.

# 3. do-while loop
Similar to the while loop, but guarantees that the loop body executes at least once.

The loop body executes first, then the condition is checked.

If the condition is true, the loop repeats; otherwise, it stops.

Useful when you want to execute a loop body before checking a condition.






# Algorithm for Password verification:
Algorithm for Password Verification Program
Initialize variables:

Set the correct password (e.g., "OpenSesame").

Initialize attempts to 0.

Set the maximum allowed attempts to 3.

Initialize a flag accessGranted to false.

Repeat while attempts are less than the maximum allowed and access is not granted:

Prompt the user to enter a password.

Read the user input.

Check if the entered password matches the correct password:

If yes:

Set accessGranted to true.

Display "Access Granted! Welcome!".

Exit the loop.

If no:

Increment attempts by 1.

Display "Incorrect password. Try again.".

Display the number of remaining attempts (maxAttempts - attempts).

After the loop ends, check if access was not granted:

If accessGranted is still false:

Display "System Locked! Too many incorrect attempts.".

End program.




# Algorithm for Printing Alphabet Pattern
Initialize variables:

Set the number of rows n to 5.

Set the starting character ch to 'a'.

For each row from 1 to n:

For each column from 1 to the current row number:

Print the current character ch followed by a space.

Increment the character ch to the next alphabetical character.

After printing all characters in the current row, print a newline to move to the next row.

End program.

# Algorithm for Printing Star Pattern

Initialize the number of rows n to 5.

For each row i from 1 to n:

For each column j from 1 to i:

Print " *" (an asterisk with a space before it).

After printing all stars in the current row, print a newline to move to the next row.

End the program.
