#include <stdio.h>

int main(void)
{
  int month, days;

  printf("달을 입력하세요 : ");
  scanf("%d", &month);

  switch(month)
  {
    case 2:
      days = 28;
      break;
    case 4: // 의도적으로 break문을 생략함
    case 6:
    case 9:
    case 11:
      days = 30;
      break;

    default: // 1,3,5,7,8,10,12 월을 처리
      days = 31;
      break;

  }

  printf("%d월의 일수는 %d입니다.", month, days);

}
