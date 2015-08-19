/* 
 * memset implementation
 *
 */

#include <stddef.h>

void * memset(void *s, int c, size_t n)
{
	int *d = (int *)s;

	while (n--) {
		*d++ = c;
	}

	return s;
}
/* 
 * strcat implementation
 *
 */

#include <string.h>


char *strcat(char *dest, const char *src)
{
    int i = 0;
    int j = strlen(dest);
    for (i = 0; i < strlen(src); i++) {
        dest[j++] = src[i];
    }
    dest[j] = '\0';
    return dest;
}
/* 
 * strcmp implementation
 *
 */

#include <string.h>

int strcmp(const char *s1, const char *s2)
{
    int diff = 0;
    while(!diff && *s1)
    {
        diff = (int)*s1 - (int)*s2;
        s1++;
        s2++;
    }
	return diff;
}
/* 
 * strcmp implementation
 *
 */

#include <string.h>

size_t strlen(const char *s)
{
    int i = 0;
    while(s[i] != 0)
        i++;
    return i;
}
/* 
 * strcat implementation
 *
 */

#include <string.h>


char *strncat(char *dest, const char *src, size_t n)
{
    int i = 0;
    int j = strlen(dest);
    for (i = 0; i < strlen(src); i++) {
        if (j >= (n - 1)) {
            break;
        }
        dest[j++] = src[i];
    }
    dest[j] = '\0';
    return dest;
}
/* 
 * strncmp implementation
 *
 */

#include <string.h>

int strncmp(const char *s1, const char *s2, size_t n)
{
    int diff = 0;
    while(!diff && *s1 && n)
    {
        diff = (int)*s1 - (int)*s2;
        s1++;
        s2++;
        n--;
    }
	return diff;
}
