#Example05-Title

##Purpose
It demonstrates how to copy a file descriptor—specifically, cloning it to a specific file descriptor number.

In other words, the program was written to teach how the dup → dup2 system calls work.

##System Calss/Functions Used
open():Opens the "dup" file in read-only mode.
dup2():Copies fd to FD number 7.
printf():Used to produce formatted output.

##How it Works
demonstrate file descriptor management by duplicating a file descriptor to another FD number

##How to Compile and Run
&gcc main.c -o app
&./app
