#include "main.h"

w


Yohannes Yirga Yimame
Mon 9/26/2022 4:57 PM
Inbox
To:
Waltengus Asmare Baihe;
#define HOLBERTON_H                                                                                                                                                                                               

/**                                                                                                                                                                                                               

 *                                                                                                                                                                                                                

 *  * File: holberton.h                                                                                                                                                                                           

 *                                                                                                                                                                                                                

 *   * Auth: Brennan D Baraban                                                                                                                                                                                    

 *                                                                                                                                                                                                                

 *    * Desc: Header file containing prototypes for all functions                                                                                                                                                 

 *                                                                                                                                                                                                                

 *     *       used in the 0x06-pointers_arrays_strings directory.                                                                                                                                                

 *                                                                                                                                                                                                                

 */                                                                                                                                                                                                               

int _putchar(char c);                                                                                                                                                                                             

char *_memset(char *s, char b, unsigned int n);                                                                                                                                                                   

char *_memcpy(char *dest, char *src, unsigned int n);                                                                                                                                                             

char *_strchr(char *s, char c);                                                                                                                                                                                   

unsigned int _strspn(char *s, char *accept);                                                                                                                                                                      

char *_strpbrk(char *s, char *accept);                                                                                                                                                                            

char *_strstr(char *haystack, char *needle);                                                                                                                                                                      

void print_chessboard(char (*a)[8]);                                                                                                                                                                              

void print_diagsums(int *a, int size);                                                                                                                                                                            

void set_string(char **s, char *to);                                                                                                                                                                              

#endif

 

 

#include "main.h"                                                                                                                                                                                                 

/**                                                                                                                                                                                                               

 * _memset - fill memory with a constant byte                                                                                                                                                                     

 * @s:char                                                                                                                                                                                                        

 * @b:char                                                                                                                                                                                                        

 * @n:unsigned int                                                                                                                                                                                                

 * Return:char                                                                                                                                                                                                    

 */                                                                                                                                                                                                               

char *_memset(char *s, char b, unsigned int n)                                                                                                                                                                    

{                                                                                                                                                                                                                 

        unsigned int i;                                                                                                                                                                                           

                                                                                                                                                                                                                  

        for (i = 0; i < n; i++)                                                                                                                                                                                   

                s[i] = b;                                                                                                                                                                                         

                                                                                                                                                                                                                  

return (s);                                                                                                                                                                                                       

}
