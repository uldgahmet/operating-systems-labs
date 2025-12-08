#Example10-Title

##Purpose
The goal of this program is to go to a specific location (seek) from the end of a file, read data from that location, and print it to the screen. In other words, the program was written to demonstrate how to use lseek() to position within a file and read() to perform a read operation.

##System Calls / Functions Used
open():Opens or creates the file and returns a file descriptor (fd).
lseek():Moves the file pointer to the specified position.
Parameters:
f → file descriptor
-11 → offset (11 bytes back)
SEEK_END → references the end of the file
Return value → new file position
read():Reads data from a file.
Parameters:
f → file descriptor
buffer → buffer to read data from
10 → number of bytes to read
Return value → number of bytes actually read
write():Writes data to a file descriptor.
Parameters:
1 → standard output (stdout)
buff ​​→ data to write
10 → number of bytes to write

##How It Works
The operating logic of this program is based on reading data from a specific location by moving the file indicator (file offset) on the file and printing it to the screen.

## How to Compile and Run
$ gcc main.c -o app
$ ./app
