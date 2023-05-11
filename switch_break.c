#include <stdio.h>
main(){
  int x;
  printf("당신이 좋아하는 과일은 무엇인가요? 아래의 반호를 선택해 주세요.\n ");
  printf("사과=1, 바나나=2,  두리안=3, 파파야=4, 모두 좋아하지 않는다 =0 \n");
  
  printf("선택한 번호를 입력해 주세요 : ");
  scanf("%d", &x);
  
  switch(x){
  case 1 : 
      printf("사과를 좋아하는군요!\n");
      break;
  case 2 : 
      printf("바나나를 좋아하는군요!\n");
      break;   
  case 3 : 
      printf("두리안을 좋아하시는군요!\n");
      break;
  case 4 : 
      printf("파파야을 좋아하시는군요!\n");
      break;
  default : 
      printf("당신이 좋아하는 과일이 없군요!\n"); 
      break;
  }
   
  
}