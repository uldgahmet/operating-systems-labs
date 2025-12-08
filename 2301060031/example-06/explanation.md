#Example06-Title

##Purpose
In a Unix/Linux environment, the goal is to create a child process using the fork() system call and display the process IDs (PID and PPID).

In other words, the program was written to teach the concepts of process creation and parent-child relationships.

##System Calls/ Function Used
fork():Creates a new child process. The child PID is returned to the parent process, and 0 is returned to the child process.
getpid():Returns the PID of the current process.
getppid():Returns the parent PID of the current process.
printf():Prints formatted output to the screen.

##how it Works
Creating a child process with fork() in a Unix/Linux environment and showing parent-child relationships

##How to Compile and Run
&gcc main.c -o app
&./app
