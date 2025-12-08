#Example09-Title

##Purpose
The program demonstrates how to create a child process with fork(), how to wait for the child to finish with wait(), and how to observe PID/PPID relationships. In other words, the program was written to teach child process management through parent-child relationships, process synchronization, and the use of wait().

##System Calls / Functions Used
fork():Creates a new child process.
getpid():Returns the PID of the current process.
getppid():Returns the parent PID of the current process.
wait(NULL):The parent process blocks until the child process completes. Once the child process completes, the parent continues.
sleep():It puts the process to sleep (blocks) for a certain period of time.
printf():Prints formatted output to the screen.

##How it Works
The working logic of this program is based on creating a child process with fork(), waiting for the parent to complete the child's work with wait(NULL) and observing the PID/PPID relationships.

##How to Compile and Run
&gcc main.c -o app
&./app
