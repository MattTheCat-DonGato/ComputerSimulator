-----Read Me-----
This repository is for my Computer Simulator project in which we had to write a command prompt interface using C for my Systems Programming class.
I am uploading each phase onto GitHub with the Phase 1 being the main interface.
I will be updating this README file as I upload each phase unto GitHub.

 ComputerSimulator-Phase1.c
****************
Phase 1 simulates a windows/linux based command prompt.
It uses a parser system where it will count the number of strings in the buffer input and store them into command, parameter1, and parameter2 arrays.
The user types in a string buffer (it can be anything), and presses the enter key.
The program will check to see if the command[] array matches on of the char[] array strings. (Counts char[] length first, then checks character for character).
If it does not match, the screen will display the message "<command> is an invalid command. Type help for a list of commands."
If it does match, then it will check for parameters.
Depending on the command entered it may require one or two parameters along with the char command[].
It will display a message whether it called the function successfully, needs more parameters, or needs less parameters.
If help is typed alone, it will display the list of commands the user can do along with a description and an example of how to input the command.
If exit it entered, then the computer simulator program will close.
****************
 End of Phase 1
 
 *** How to Compile and run the program ***
 It's best to have ubuntu/linux/VirtualBox installed onto your computer to compile and run the program.
 1. Save the .c file into your home directory folder
 2. In your linux command prompt type in:
 gcc -o simulation ComputerSimulator-Phase1.c
 3. This will compile the program. You may or may not recieve some warnings, if they do appear on your screen then they can be ignored for the time   being. 
 4. Now type in ./simulation and the program will be executed.
 *** End of how to Compile and run the program ***
 
-----END OF README-----
