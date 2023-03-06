#include "main.h"
/**
 * _memset - Fills the first n bytes of the memory area
 * @s: starting address of a memory to be filled
 * @c: the desired value
 * @n: the number of bytes to be filled
 * Return: changed array with the new value for n bytes
 */

void *_memset(void *s, int c, size_t n)
{                                                                                                                                    
        unsigned int index;                                                                                                          
        unsigned char *memory = s, value = c;                                                                                        
                                                                                                                                     
        for (index = 0; index < n; index++)                                                                                          
                memory[index] = value;                                                                                               
                                                                                                                                     
        return (memory);                                                                                                             
}

