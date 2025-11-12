#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  size_t cnt=0;
  for(;*s!='\0';s++)
    cnt++;
  return cnt;
}

char *strcpy(char *dst, const char *src) {
  size_t i;
  for(i=0;src[i]!='\0';i++){
    dst[i]=src[i];
  }
  dst[i]='\0';
  return dst;
}

char *strncpy(char *dst, const char *src, size_t n) {
  size_t i;
  for (i = 0; i < n && src[i] != '\0'; i++)
      dst[i] = src[i];
  for ( ; i < n; i++)
      dst[i] = '\0';
  return dst;
}

char *strcat(char *dst, const char *src) {
  size_t dest_len = strlen(dst);
  size_t i;

  for (i = 0 ;src[i] != '\0' ; i++)
      dst[dest_len + i] = src[i];
  dst[dest_len + i] = '\0';
  return dst;
}

int strcmp(const char *s1, const char *s2) {
  size_t i;
  size_t len=(strlen(s1)>strlen(s2)?strlen(s1):strlen(s2));

  for(i=0;i<=len;i++){
    if(s1[i]!=s2[i])
      return s1[i]-s2[i];
  }
  return 0;
}

int strncmp(const char *s1, const char *s2, size_t n) {
  size_t i;
  size_t len=strlen(s1)>strlen(s2)?strlen(s1):strlen(s2);
  //  <  or <= ？？？？
  for(i=0;i<=len&&i<n;i++)
   if(s1[i]!=s2[i])
      return s1[i]-s2[i];
  return 0;
}

void *memset(void *s, int c, size_t n) {
  size_t i;
  for(i=0;i<n;i++){
    ((char *)s)[i]=c;
  }
  return s;
}

void *memmove(void *dst, const void *src, size_t n) {
  //May overlap!
  char temp[n];
  for(size_t i=0;i<n;i++){
    temp[i]=((char *)src)[i];
  }
  for(size_t i=0;i<n;i++){
    ((char *)dst)[i]=temp[i];
  }
  return dst;
}

void *memcpy(void *out, const void *in, size_t n) {
  size_t abs_dif=in-out>0?in-out:out-in;
  if(abs_dif>n){
    for(size_t i=0;i<n;i++)
      ((char *)out)[i]=((char *)in)[i];
  }else{
    memmove(out,in,n);
  }
  return out;
}

int memcmp(const void *s1, const void *s2, size_t n) {
  for(size_t i=0;i<n;i++){
    char c1=((char *)s1)[i];
    char c2=((char *)s2)[i];
    if(c1!=c2)
      return c1-c2;
  }
  return 0;
}

#endif
