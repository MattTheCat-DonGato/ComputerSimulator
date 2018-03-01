#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main()
{
char buffer[100];
char command[30], param1[30], param2[30];
char load[] = "load";
char execute[] = "execute";
char debug[] = "debug";
char dumpstartend[] = "dump";
char assemblefilename[] = "assemble";
char help[] = "help";
char dir[] = "ls";
char exit[] = "exit";
char intermedfile[] = "intermedfile.txt";
int strings = 0;
int exitnum = 0;

printf("Welcome to computer simulator. Type in help for a list of commands.");
do
{
printf("\nEnter a command:");

fgets(buffer,100, stdin);

strings = sscanf(buffer,"%s %s %s",command,param1,param2); //count the number of strings in the buffer input.

if (strings == 3)
sscanf(buffer,"%s %s %s",command,param1,param2); //put strings into perspective arrays
else if (strings == 2)
sscanf(buffer,"%s %s",command,param1); // put strings into perspective arrays
else
sscanf(buffer,"%s",command); // put strings into perspective arrays

if (compareString(command, load) == 0)
{
  if(strings == 3)
    printf("You have one extra parameter that is not needed. Type help for a list of commands.");
  else if (strings == 2)
    printf("You have successfully loaded Load Filename function.");
  else
    printf("You are missing one parameter for this function. Type help for a list of commands.");
}
else if (compareString(command, execute) == 0)
{
  if(strings == 3)
    printf("You have two extra paramters that are not needed. Type help for a list of commands.");
  else if (strings == 2)
    printf("You have one extra parameter that is not needed. Type help for a list of commands.");
  else
    printf("You have successfully called Execute function.");
}
else if (compareString(command, debug) == 0)
{
  if(strings == 3)
    printf("You have two extra paramters that are not needed. Type help for a list of commands.");
  else if (strings == 2)
    printf("You have one extra parameter that is not needed. Type help for a list of commands.");
  else
    printf("You have successfully called Debug function.");
}
else if (compareString(command, dumpstartend) == 0)
{
  if(strings == 3)
    printf("You have successfully called the DumpStartEnd function.");
  else if (strings == 2)
    printf("You are missing one parameter. Type help for a list of commands.");
  else
    printf("You are missing two parameters. Type help for a list of commands.");
}
else if (compareString(command, help) == 0)
{
  if(strings == 3)
    printf("You have two extra paramters that are not needed. Type help for a list of commands.");
  else if (strings == 2)
    printf("You have one extra parameter that is not needed. Type help for a list of commands.");
  else
    printf("HELP\n LoadFilename: Loads the specified file from the parameter. Example:load <param1>\n Execute: Call the computer simulation program to execute the program that was previously loaded in memory. Example:execute\n Debug: Will allow you to execute in debug mode. Example:debug\n DumpStartEnd: Call the dump function, passing the values of start and end. Start and end will be hexadecimal values. Example:dump <param1> <param2>\n Help: Displays the list of commands. Example:help\n Assemble Filename: Will assemble an SIC assembly language program into a load module and store it in a file.Example:assemble <param1>\n Directory: List the files stored in the current directory. Example:ls\n Exit: Exit the simulator. Example:exit");
}
else if (compareString(command, assemblefilename) == 0)
{
  if(strings == 3)
    printf("You have one extra paramter that is not needed. Type help for a list of commands.");
  else if (strings == 2)
    {
     printf("You have successfully called Assemble Filename function.\n");
    }
  else
    printf("You are missing one parameter for this function. Type help for a list of commands.");
}
else if (compareString(command, dir) == 0)
{
  if(strings == 3)
    printf("You have two extra paramters that are not needed. Type help for a list of commands.");
  else if (strings == 2)
    printf("You have one extra parameter that is not needed. Type help for a list of commands.");
  else
    system("ls");
}
else if (compareString(command, exit) == 0)
{
 if(strings == 3)
    printf("You have two extra paramters that are not needed. Type help for a list of commands.");
  else if (strings == 2)
    printf("You have one extra parameter that is not needed. Type help for a list of commands.");
  else
    exitnum = -1;
}
else
printf("%s is an Invalid Command! Please type in help for a list of commands.", command);

strings = 0;
} while (exitnum != -1);

printf("Now exiting computer simulator... Good bye.\n");
return 0;
}

int compareString(char s1[], char s2[]) // General use of compareString function
{
int charcount1 = 0; 
int charcount2 = 0;
int nomatch = 0;
int match = 0;

while(s1[charcount1] != '\0') //Count number of characters in command[]
   {
     charcount1++;
   }

while(s2[charcount2] != '\0') //Count number of characters in load[],execute[],debug[],dumpstartend[],help[],assemblefilename[],directory[], or exit[].
   {
     charcount2++;
   }

if (charcount1 != charcount2) //If the number of charcters in both arrays are not equal to each other then it is an invalid command.
{
nomatch = 1;
}
else // Number of characters are equal in both arrays, so check to see if each character in both arrays are equal to each other.
{
for(int a = 0; s1[a] != '\0';a++) // convert the characters of command[] to all lowercase
   {
      if(isupper(s1[a]))
      s1[a] = tolower(s1[a]);
   }

  for(int i=0;i<charcount2;i++)
  {
 if(s1[i] == s2[i])
    match++;
  }
}

if (match == charcount2)
return 0;
else if (nomatch == 1)
return 1;
else
return 1;
}
