#include <stdio.h> 
#define MOSTRAR 0 
int main() 
{ int i; 
  for (i=10; i>5; i--) { 
    #ifdef MOSTRAR 
        printf("%d  ",i); 
        #undef MOSTRAR 
    #endif
    #ifndef MOSTRAR 
        #define MOSTRAR 0 
    #endif 
  } 
  return(0); 
}