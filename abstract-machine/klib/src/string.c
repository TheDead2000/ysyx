#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  size_t len = 0;
  while (*s++ != '\0') {
    len++;
  }
  return len;
}

char *strcpy(char *dst, const char *src) {
  char *d = dst;
  
  while ((*d++ = *src++) != 0);

  return dst;
}

char *strncpy(char *dst, const char *src, size_t n) {
  char *d = dst;

  while (n) {
    if ((*d = *src) != 0) src++;
    ++d;
    --n;
  }

  return dst;
}

char *strcat(char *dst, const char *src) {
    char *d = dst;

    while (*d++);
    --d;
    while ((*d++ = *src++) != 0);

    return dst;
}

int strcmp(const char *s1, const char *s2) {
  while (*((char *)s1) == *((char *)s2)) {
    if (!*s1++) {
        return 0;
    }
    ++s2;
  }

  return (*((char *)s1) < *((char *)s2)) ? -1 : 1;
}

int strncmp(const char *s1, const char *s2, size_t n) {
  while (n && (*((char *)s1) == *((char *)s2))) {
		if (!*s1++) {
			return 0;
		}
		++s2;
		--n;
	}

	return (n == 0) ? 0 : (*((char *)s1) - *((char *)s2));
}

void *memset(void *s, int c, size_t n) {
  char *tmp = (char *)s;

  for (size_t i = 0; i < n; i++) {
    tmp[i] = c;
  }

  return s;
}


/**
 * 此函数处理内存重叠情况
*/
void *memmove(void *dst, const void *src, size_t n) {
    char *d = (char *)dst;
    const char *s = (const char *)src;

    if (s >= d) {
        while (n) {
            *d++ = *s++;
            --n;
        }
    } else {
        while (n) {
            --n;
            d[n] = s[n];
        }
    }

    return dst;
}

/**
 * 此函数不处理内存重叠，涉及内存重叠使用memmove
*/
void *memcpy(void *out, const void *in, size_t n) {
  char *o = (char *)out;
  const char *i = (const char *)in;

  while (n--) {
    *o++ = *i++;
  }

  return out;
}

/**
 * 返回-1表示s1 < s2, 返回1表示s1 > s2, 返回0表示相等
*/
int memcmp(const void *s1, const void *s2, size_t n) {
    const char *p1 = s1;
    const char *p2 = s2;

    for (size_t i = 0; i < n; i++) {
        if (p1[i] < p2[i]) {
            return -1;
        } else if (p1[i] > p2[i]) {
            return 1;
        }
    }
    return 0;
}

#endif
