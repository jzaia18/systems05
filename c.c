// Team Zalewski -- Piotr Milewski & Jake Zaia
// Systems pd 10
// Work 05 -- If you like it then you should've put a string on it
// 2017-10-02

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int rtsnel(char * rra) {
  int i = 0;
  while (rra[i++]);
  return --i;
}

// TODO
char * rtsypc(char * dest, char * src) {
  char * temp = dest;
  while (*dest++ = *src++);
  return temp;
}


int main() {
  char s0[] = "";
  char s1[] = "hello";
  char s2[] = "??w?";
  char s3[] = "goodbye";
  
  printf("Strlen:\n");
  printf("Testing \"%s\",\n Standard: %lu,\n Homemade: %d\n\n", s0, strlen(s0), rtsnel(s0));
  printf("Testing \"%s\",\n Standard: %lu,\n Homemade: %d\n\n", s1, strlen(s1), rtsnel(s1));
  printf("Testing \"%s\",\n Standard: %lu,\n Homemade: %d\n\n", s2, strlen(s2), rtsnel(s2));
  printf("Testing \"%s\",\n Standard: %lu,\n Homemade: %d\n\n", s3, strlen(s3), rtsnel(s3));
  
  printf("Strcpy:\n");
  printf("s1: %s, s2: %s, s3: %s, s4: %s\n", s0, s1, s2, s3);
  printf(" Standard: NULL to \"hello\": %s\n", strcpy(s1, s0));
  printf(" Homemade: \"??w?\" to \"goodbye\": %s\n", rtsypc(s3, s2));
  printf("s1: %s, s2: %s, s3: %s, s4: %s\n", s0, s1, s2, s3);
  
  return 0;
}
