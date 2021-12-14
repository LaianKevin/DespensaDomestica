#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "util.h"


int eNumero(char *v) {
  int i = 0 , n = 0 , j;
  j = strlen(v);

  while (i < j && n == 0) {
    if (isdigit(v[i]) != 0) {
      i++;
    }
    else {
      n = 1;
    }
  }
 return n;
}

int eNome(char *v) {
  int i = 0 , n = 0 , j;
  j = strlen(v);

  while (i < j && n == 0) {
    if (isalpha(v[i]) != 0) {
      i++;
    }
    else {
      n = 1;
    }
  }
 return n;
}