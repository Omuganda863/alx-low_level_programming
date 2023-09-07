#include "main.h"


/**
* _realloc - reallocates memblock
* @ptr: pointer to the mem
* @old_size: size of pntr
* @new_size: size mem alloc
*
* Return: pointer
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *mem_block;
	unsigned int a;

	if (ptr == NULL)
	{
		mem_block = malloc(new_size);
		return (mem_block);
	}
	else if (new_size == old_size)
		return (ptr);

	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		mem_block = malloc(new_size);
		if (mem_block != NULL)
		{
			for (a = 0; a < min(old_size, new_size); a++)
				*((char *)mem_block + a) = *((char *) ptr + a);
			free(ptr);
			return (mem_block);
		}
		else
			return (NULL);
	}
}
