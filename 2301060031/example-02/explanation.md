#Example02-Title

##Purpose
The purpose of this C program is to read up to 10 bytes of data from standard input and write the amount to standard output.
This program is a small echo application.

##System Calls/ Function Used
read():Reads data from a file descriptor.
write():Writes data to a file descriptor.

##how it Works
The program's operating logic is to perform kernel-level input/output (I/O), reading user-entered data and writing it back to the screen. Essentially, it's a mini echo program.

##How to Compile andRun
&gcc main.c -o app
&./app
