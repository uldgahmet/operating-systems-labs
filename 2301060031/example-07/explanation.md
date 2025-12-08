#Example07-Title

##Purpose
The purpose of this program is to demonstrate how a parent process can create multiple child processes and observe the PID/PPID relationships of the children.

In other words, the program was written to teach the use of multiple fork(), parent-child relationships, and managing child processes using wait/waitpid.

##System Calls/ Function Used
fork():Creates a new child process.
getpid():Returns the PID of the current process.
getppid():Returns the parent PID of the current process.
waitpid():Waits for a specific child process to finish.
printf():Prints formatted output to the screen.

##How it Works
The aim is to show how a parent process creates two child processes, observes the PID/PPID relationships of the processes, and waits until the parent's children are finished.

##How to Compile and Run
&gcc main.c -o app
&./app
