#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int energy;
    int steps = 0;
    int max_altitude;

    // 1. 초기 에너지 입력 받기
    printf("Enter the initial engine energy: ");
    scanf("%d", &energy);

    // 최고 에너지 초기화 (처음 입력받은 값으로 설정)
    max_altitude = energy;

    // 2. 결과 출력 시작 (Sequence 부분)
    printf("Sequence: %d", energy);

    // 3. 에너지가 1이 될 때까지 반복하는 while 문
    while (energy > 1) {
        // A. 에너지가 짝수인지 홀수인지 판별하는 if-else 문
        if (energy % 2 == 0) {
            energy = energy / 2;
        }
        else {
            energy = (energy * 3) + 1;
        }

        // 단계(Step) 증가
        steps++;

        // 변화하는 과정 출력 (화살표 모양 맞추기)
        printf(" -> %d", energy);

        // B. 과정 중 도달한 최고 에너지 수치(Max Altitude) 갱신
        if (energy > max_altitude) {
            max_altitude = energy;
        }
    }

    // 4. 최종 결과 출력
    printf("\nEscape successful!\n");
    printf("Total steps: %d\n", steps);
    printf("Maximum altitude reached: %d\n", max_altitude);

    return 0;
}