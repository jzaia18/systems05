// Team Zalewski -- Piotr Milewski & Jake Zaia
// Systems pd 10
// Work 05 -- If you like it then you should've put a string on it
// 2017-10-02

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Homemade strlen()
int rtsnel(char * rra) {
  int i = 0;
  while (rra[i++]);
  return --i;
}


// Homemade strcpy()
char * rtsypc(char * dest, char * src) {
  char * temp = dest;
  while (*(dest++) = *(src++));
  return temp;
}

// Homemade strncpy()
char * rtsnypc(char * dest, char * src, int n) {
  int i = 0;
  char * temp = dest;
  while (i++ < n && (*(dest++) = *(src++)));
  return temp;
}

// Homemade strcat()
char * rtstac(char * dest, char * src) {
  char * temp = dest;
  dest += strlen(dest);
  while (*(dest++) = *(src++));
  return temp;
}

// Homemade strcmp()
int rtspmc(char *s1, char *s2) {
  while (*s1++ == *s2++ && *s1 != 0);
  return *--s1 - *--s2;
}

// Homemade strchr()
char * rtsrhc(char * str, char c) {
  while (*(str++) != c){
    if (str == 0) return NULL;
  }
  return --str;

}

int main() {
  char s0[] = "";
  char s1[] = "hello";
  char s2[] = "??w?";
  char s3[] = "goodbye";

  char s4[] = "hello";
  char s5[] = "hell";
  char s6[] = "Hello";
  char s7[] = ")(";

  char s8[] = "Pro";
  char s9[] = "form";
  char s10[] = "Yam";
  char s11[] = "aha";
  
  printf("Strlen:\n\n");
  printf("Testing \"%s\",\n Standard: %lu\n Homemade: %d\n\n", s0, strlen(s0), rtsnel(s0));
  printf("Testing \"%s\",\n Standard: %lu\n Homemade: %d\n\n", s1, strlen(s1), rtsnel(s1));
  printf("Testing \"%s\",\n Standard: %lu\n Homemade: %d\n\n", s2, strlen(s2), rtsnel(s2));
  printf("Testing \"%s\",\n Standard: %lu\n Homemade: %d\n\n", s3, strlen(s3), rtsnel(s3));

  printf("\n=============================================\n\n");

  printf("Strcmp:\n\n");
  printf("s4: %s, s5: %s, s6: %s, s7: %s\n", s4, s5, s6, s7);
  printf("Comparing %s to %s,\n Standard: %d\n Homemade: %d\n\n", s4, s5, strcmp(s4, s5), rtspmc(s4, s5));
  printf("Comparing %s to %s,\n Standard: %d\n Homemade: %d\n\n", s4, s6, strcmp(s4, s6), rtspmc(s4, s6));
  printf("Comparing %s to %s,\n Standard: %d\n Homemade: %d\n\n", s4, s4, strcmp(s4, s4), rtspmc(s4, s4));
  printf("Comparing %s to %s,\n Standard: %d\n Homemade: %d\n\n", s4, s7, strcmp(s4, s7), rtspmc(s4, s7));

  printf("\n=============================================\n");

  printf("Strchr:\n\n");
  printf("s0: %s, s1: %s, s2: %s, s3: %s\n", s0, s1, s2, s3);
  printf(" Standard: %s\n", strchr(s1, 'l'));
  printf(" Homemade: %s\n", rtsrhc(s1, 'l'));
  
  printf("\n=============================================\n");
  
  printf("Strcpy:\n\n");
  printf("s1: %s, s2: %s, s3: %s, s4: %s\n", s0, s1, s2, s3);
  printf(" Standard: Copying NULL to \"hello\": %s\n", strcpy(s1, s0));
  printf(" Homemade: Copying \"??w?\" to \"goodbye\": %s\n", rtsypc(s3, s2));
  printf("s1: %s, s2: %s, s3: %s, s4: %s\n", s0, s1, s2, s3);

  printf("\n=============================================\n");

  printf("Strncpy:\n\n");
  printf("s4: %s, s5: %s, s6: %s, s7: %s\n", s4, s5, s6, s7);
  printf(" Standard: Copying 3 chars of \")(\" to \"hello\": %s\n", strncpy(s4, s7, 3));
  printf(" Homemade: Copying 3 chars of \")(\" to \"Hello\": %s\n", rtsnypc(s6, s7, 3));
  printf("s4: %s, s5: %s, s6: %s, s7: %s\n", s4, s5, s6, s7);

  printf("\n=============================================\n");
  
  printf("Strcat:\n\n");
  printf("s8: %s, s9: %s, s10: %s, s11: %s\n", s8, s9, s10, s11);
  printf(" Standard: %s\n", strcat(s8, s9));
  printf(" Homemade: %s\n", rtstac(s10, s11));
  printf("s4: %s, s5: %s, s6: %s, s7: %s\n", s4, s5, s6, s7);

  printf("\n=============================================\n");
  
 
  return 0;
}
