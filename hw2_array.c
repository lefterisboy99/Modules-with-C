#include "sogoodandtasty.h"


size_t ms_length(const char string[])
{
  size_t uiLength= 0U;
  assert(string != NULL);
  while (string[uiLength] != '\0')
    uiLength++;
  return uiLength;
} 

char * ms_cpy(char dest[], const char src[]){
    size_t uiLength= 0U;
    assert(src!=NULL);

    while((dest[uiLength]=src[uiLength])!='\0'){
         uiLength++;
    }
   dest[uiLength]='\0';
    return dest;
}

char *ms_ncopy(char dest[], const char src[], size_t n){
    size_t uiLength= 0U;
    size_t ar=1;
    assert(src!=NULL);
    while((dest[uiLength]=src[uiLength])!='\0'&&ar<n){
        ar++;
        uiLength++;
    }
    return dest;
}

char *ms_concat(char dest[], const char src[]){
size_t beg,end=0;
int i;
    assert(src &&dest);
    beg=ms_length(dest);
    end=ms_length(src);
    for(i=0;i<end;i++){
        dest[beg+i]=src[i];
    }
    return dest;
}

char *ms_nconcat(char dest[], const char src[],size_t n){
size_t beg;
int i;
    assert(src &&dest);
    beg=ms_length(dest);
    for(i=0;i<n;i++){
        dest[beg+i]=src[i];
    }
    dest[ms_length(dest)]='\0';
    return dest;
}

int ms_compare(const char *str1, const char *str2){
    size_t i = 0U;
	assert(str1);
	assert(str2);
	for(i=0; str1[i]!='\0' && str2[i]!='\0' ; i++){
          if (str1[i] != str2[i]){
		return str1[i]- str2[i];
	 }
	}
if(str1[i]=='\0' || str2[i]=='\0'){
	return str1[i]-str2[i];
	}
return 0;
}

int ms_ncompare ( const char str1[], const char str2[], size_t n ){ 
size_t i = 0U;
assert(str1);
assert(str2);
if(n == 0){
	return 0;
	}
for(i=0; str1[i] == str2[i] && n-- > 0;){
	 if(str1[i] == '\0' || n == 0){
 	  	 return 0;
		}
		i++;
	}
   return str1[i] - str2[i];
}

char *ms_search( char haystack[], const char needle[]){
    size_t i,j,position;
    assert(haystack && needle);
   for(i=0 ; i< ms_length(haystack) ;i++){
      if(haystack[i] == needle[0]){
           position = i;
      for(j=0;j < ms_length(needle);j++,position++){
           if(haystack[position] != needle[j]) break;
        }
         if(j == ms_length(needle)) return &(haystack[i]);
       }}
    return NULL;
}


int main(){

    return 0;
}
