#include "sogoodandtasty.h"




size_t ms_length(const char *string){
   
  size_t uiLength = 0U;
  assert(string != NULL);
  while (*(string + uiLength) != '\0')
    uiLength++;
  return uiLength;

}

char * ms_cpy(char *dest, const char *src){
    char*temp=dest;
    assert(src!=NULL);
    
    while((*temp++=*src++)!='\0');
    *temp='\0';
    return dest;
}

char *ms_ncopy(char *dest, const char *src, size_t n){
    size_t ar=0;
    char*temp=dest;
    assert(src!=NULL);
    
    
    while((*temp++=*src++)!='\0'&&ar<n-1)ar++;
    *temp='\0';
    return dest;
}

char *ms_concat(char *dest, const char *src){
 size_t i,j;
    assert(src &&dest);
    
    for (i = 0; dest[i] != '\0'; i++);
    for (j = 0; src[j] != '\0'; j++)
        dest[i+j] = src[j];
    dest[i+j] = '\0';
    return dest;

}

char *ms_nconcat(char *dest, const char *src,size_t n){
    int i;
    char *temp=dest;
    temp+=ms_length(dest);
    assert(src);
    for(i=0;(i<n)&&(*src!='\0');i++){
        *temp++=*src++;
    }
    temp='\0';
    return dest;
}
 

int ms_compare (const char * str1 , const char * str2){
        assert(str1 != NULL && str2 != NULL);
    for(;*str1 == *str2; str1++, str2++)
        if(*str1 =='\0') return 0;
    if(*str1<*str2)return -1;
    return 1;
        

}


int ms_ncompare(const char * str1 , const char * str2 , size_t n){
	const char *first;
	const char *second;
     assert(str1&&str2);
	first = str1;
	second = str2;
    if(n == 0){
           return 0;
        }
    for(; *first == *second && n-- > 0;){
          if(*first == '\0' || n == 0){
                return 0;
       }
          first++;
        second++;
     }
return *first - *second;
}


char * ms_search(char * str1 , const char * str2){ 
  char * first;
  size_t t;
  first = str1;
  t = ms_length(str2);
     while(*first != '\0'){
 	if(ms_ncompare(first,str2,t) == 0){
		return first;
          }
	   first++;
	}
	return NULL;
}

int main(){


    return 0;
}

