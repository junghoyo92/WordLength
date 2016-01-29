#include <stdio.h>

/* 
 * Name : <Hoyoung Jung>
 * Program to experiment with character arrays
 */

#define MaxWord 20
 
int main ()
{
    char c;
    char str[MaxWord+1];
    int len = 0;
    int words = 0;
    int letters = 0;
    int longest = 0;
    int i;
    char longest[MaxWord+1];
    double average;
  
    puts ("Enter text. Include a dot ('.') to end a sentence to exit:");
    do 
    {
        c=getchar();
        if(c != ' ' && c != '.')
        {
            /* This is a character of a word */
            if(len<MaxWord)
            {
				str[len] = c;
				len++;
				letters++;
			}
        }
        else if(c == ' ' && len == 0)
        {
        }
        else
        {
            /* The word is done */
            str[len] = 0;
            printf("%s\n", str);
            if(len>longest)
            {
            	longest = len;
            	for(i=0; i<(len+1); i++)
            		longest[i]=str[i];
            }
            words++;
            len = 0;
        }
    } while (c != '.');
	
	str[len] = 0;
	printf("%s\n", str);
	printf("The longest word is %s\n", longest);
	
	average = letters/words;
	printf("The average word length is %.0f\n", average);

}    
