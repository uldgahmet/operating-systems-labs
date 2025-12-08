#Example08-Title

##Purpose
The program demonstrates how to create a child process using fork() and how to observe the processes' execution at different times using sleep(). In other words, the program was written to understand the concurrent execution of parent and child processes, the PID/PPID relationship, and process scheduling.

##System Calls/ Functions Used
fork():Creates a new child process.
getpid():Returns the PID of the current process.
getppid():Returns the parent PID of the current process.
sleep():It puts the process to sleep (blocks) for the given number of seconds.
printf():Prints formatted output to the screen.

##How it Works
Demonstrate how to create a child process with fork(), how to make parent and child processes run independently, and how to observe PID/PPID relationships.

##How to Compile and Run
&gcc main.c -o app
&./app
