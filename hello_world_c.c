#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	
    char s[100];
    scanf("%[^\n]%*c", s);
    /*
    
    The format specifier %[^\n] in scanf tells the function to read a string of characters until it encounters a newline character \n. 
    The [] bracket specifies a set of characters to match, and ^ negates that set, 
    so %[^\n] matches any character except for newline.

    The %*c format specifier tells scanf to read and discard the next character, which is the newline character that was not consumed by the previous %[^\n] specifier. 
    This is done to prevent the newline character from being read as part of the next input.
    
    */

    printf("Hello, World!\n%s\n", s);
  	
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}