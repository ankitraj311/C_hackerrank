#include<stdio.h>
int main()
{
        char c1, c2[50], c3[150];
        scanf("%c", &c1);
        printf("%c\n",c1);
        scanf("%s",c2);
        printf("%s\n",c2);
        //scanf(" %[^\t\n]s",&str) it will scan until tab or new linecomes.
        //scanf(" %[^x]s",&str) it will scan until x encountered
        //AFter ^ enter the keyword upto which you want to read a string.
        scanf("\n");
        scanf("%[^\n]s",c3);
        printf("%s\n",c3);
}

/*
Objective

This challenge will help you to learn how to take a character, a string and a sentence as input in C.

To take a single character ch as input, you can use scanf("%c", &ch ); and printf("%c", ch) writes a character specified by the argument char to stdout

char ch;
scanf("%c", &ch);
printf("%c", ch);
This piece of code prints the character ch .

You can take a string as input in C using scanf(“%s”, s). But, it accepts string only until it finds the first space.

In order to take a line as input, you can use scanf("%[^\n]%*c", s); where s is defined as char s[MAX_LEN] where MAX_LEN
is the maximum size of . Here, [] is the scanset character. ^\n stands for taking input until a newline isn't encountered. 
Then, with this %*c, it reads the newline character and here, the used * indicates that this newline character is discarded.

Note:After inputting the character and the string, inputting the sentence by the above mentioned statement won't work. 
This is because, at the end of each line, a new line character (\n) is present. So, the statement: scanf("%[^\n]%*c", s); 
will not work because the last statement will read a newline character from the previous line.
This can be handled in a variety of ways and one of them being: scanf("\n"); before the last statement

You have to print the character,ch , in the first line. Then print s in next line. In the last line print the sentence,sen .*/
