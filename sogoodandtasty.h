#include<stdio.h>
#include<string.h>
#include<stddef.h>
#include<stdlib.h>
#include<assert.h>



size_t ms_length(const char *string);

char * ms_cpy(char *dest,  const char *src);
char *ms_ncopy(char *dest, const char *src, size_t n);
char *ms_concat(char *dest, const char *src);
char *ms_nconcat(char *dest, const char *src, size_t n);
int ms_compare(const char *str1, const char *str2);
int ms_ncompare(const char *str1, const char *str2, size_t n);
char *strstr(const char *haystack, const char *needle);
