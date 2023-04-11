#include <stdio.h>
main(){
  int a=5, b=3;

  if(5>3){              //참, if 뒤에 들여쓰기
  printf("A\n");
  }    
  
  printf("B\n");

  if(5+3) {
    printf("C\n");
  }
    printf("D\n");

  if(5-5) {
    printf("E\n");  //거짓 5-5=0
  }
  if(a>b) {
    printf("F\n");
  }
  printf("G\n");

  if(a<b) {
    printf("H\n");
  }
  printf("I\n");
  
  
}