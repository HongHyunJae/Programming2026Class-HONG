#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int total_seconds, hours, minutes, seconds;

    // 총 시간 입력받기
    printf("Enter total time in seconds: ");
    scanf_s("%d", &total_seconds);

    // 시간, 분, 초 계산
    hours = total_seconds / 3600;           // 1시간은 3600초
    minutes = (total_seconds % 3600) / 60;  // 남은 초에서 분 계산
    seconds = total_seconds % 60;           // 60으로 나누고 남은 초

    // 결과 출력 (일반 형태)
    printf("%d seconds is %d hours %d minutes %d seconds.\n", total_seconds, hours, minutes, seconds);

    // 디지털 표기 형태 (%02d를 사용해 두 자리 수로 맞춤)
    printf("Digital Display: %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}
