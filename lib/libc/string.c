#include <string.h>

void *memset(void *ptr, int c, size_t size) {
  char *p = ptr;
  for (; p < (char *)ptr + size; p++) {
    *p = (char)c;
  }
  return ptr;
}
