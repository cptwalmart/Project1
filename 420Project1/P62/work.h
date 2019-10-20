#ifndef WORK_H
#define WORK_H

#include <stdio.h>
#include <stdlib.h>

#define BUFFERSIZE 13
#define BUFFERSIZEFACTORIAL 39916800

typedef struct permuter_t {
  char string[BUFFERSIZE];
  int string_length;
  unsigned long * all_permutations;
  int answers_found;
	
  int storelocation;
	
} permuter;

void initPermuter(permuter * input) {
  if(input->all_permutations == NULL) {
      input->all_permutations = malloc(sizeof(unsigned long) * 
BUFFERSIZEFACTORIAL);
      if(input->all_permutations == NULL) {
        printf("failed to allocate permutation buffer\n");
      }
  }
  input->answers_found = 0;
  input->storelocation = 0;
}

int duplicationcheck(permuter * object, int first, int last) {
  int i;
  for(i = first; i < last; i++) {
    if(object->string[i] == object->string[last]) {
      return 0;
    }
  }
  return 1;
}

void flip(permuter * object, int first, int last) {
  char temp = (*object).string[first];
  object->string[first] = object->string[last];
  object->string[last] = temp;
}

void generatePermutations(permuter * object, int first) {
  if(first == object->string_length - 1) {
      if(object->string[0] != '0') {
        object->all_permutations[object->storelocation] = 
atol((*object).string);
        object->storelocation++;
      }
  } else {
    int i;
    for(i = first; i < object->string_length; i++) {
      int flag = duplicationcheck(object, first, i);
      if(flag != 0) {
        flip(object, first, i);
        generatePermutations(object, first + 1);
        flip(object, first, i);
      }
    }
  }
}

int checkAllPermutations(permuter * object, unsigned long * answers, int 
answers_size, unsigned long key) {
  int i, j;
  object->string_length = sprintf(object->string, "%lu", key);
  generatePermutations(object, 0);
  for(i = 0; i < object->storelocation; i++) {
    for(j = 0; j < answers_size; j++) {
      if(object->all_permutations[i] == answers[j]) {
        object->answers_found++;
      }
    }
  }
  int retval = object->answers_found;
  initPermuter(object);
  return retval;
}

#endif
