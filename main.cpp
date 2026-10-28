/**
 * =================================================================
 * @file   destiny_number.c
 * @brief  생년월일 8자리를 입력받아 각 자리의 숫자를 더해
 *         한 자리 수(1~9)인 '운명의 숫자'를 계산하고,
 *         switch 문을 통해 맞춤형 운세를 출력하는 프로그램
 * @author [작성자 이름]
 * @date   2026-XX-XX
 * =================================================================
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    // 1. 변수 선언 및 초기화
    long long birth_input = 0; // 사용자로부터 입력받을 8자리 생년월일
    int sum = 0;               // 각 자리 숫자의 합을 저장할 변수
    int temp = 0;              // 계산을 위해 입력값을 임시로 다룰 변수

    // 2. 문제 분석 및 입력 단계
    printf("Enter your 8-digit birthdate (YYYYMMDD): ");
    if (scanf("%lld", &birth_input) != 1) {
        printf("잘못된 입력입니다.\n");
        return 1;
    }

    printf("Calculating...\n");

    // 3. 순서도 및 수식 정의에 따른 알고리즘 구현
    // 입력받은 숫자가 10 이상인 동안 각 자리의 합을 구하는 과정을 반복 (1자리 숫자가 될 때까지)
    temp = (int)birth_input; // 안전하게 int형 변환 후 처리 (8자리 숫자는 int 범위 내에 수용 가능)

    while (temp >= 10 || sum >= 10) {
        if (temp < 10 && sum >= 10) {
            // 한 사이클의 덧셈이 끝나고 결과가 두 자리 이상인 경우, 다시 합을 temp로 넘겨 반복
            printf("Sum of digits: %d\n", sum);
            temp = sum;
            sum = 0;
        }

        // 각 자리 숫자를 분리하여 더하는 수식 적용 (temp % 10 은 일의 자리 추출)
        sum += temp % 10;
        temp /= 10; // 십의 자리 이상만 남기기 위해 10으로 나눔

        // 만약 최초 입력값에 대한 첫 번째 덧셈이 끝났을 때의 처리
        if (temp == 0 && sum >= 10) {
            printf("Sum of digits: %d\n", sum);
            temp = sum;
            sum = 0;
        }
        else if (temp == 0 && sum < 10) {
            // 최종적으로 한 자리가 된 경우 출력
            printf("Sum of digits: %d\n", sum);
            break;
        }
    }

    // 만약 최초 입력이 한 자리이거나 특수한 경우 방어 코드 (출력 형식을 예시와 맞춤)
    // 예시 출력 포맷: "Your Destiny Number is X!"
    int destiny_number = sum;
    printf("Your Destiny Number is %d!\n\n", destiny_number);

    // 4. Switch 문을 활용한 운세 메시지 출력 (사용자 커스텀 영역)
    printf("[Destiny Message]\n");
    switch (destiny_number) {
    case 1:
        // TODO: 숫자 1에 대한 운세 메시지를 작성하세요.
        printf("You will come out on top no matter what\n");
        break;
    case 2:
        // TODO: 숫자 2에 대한 운세 메시지를 작성하세요.
        printf("You will claim the second crown\n");
        break;
    case 3:
        // TODO: 숫자 3에 대한 운세 메시지를 작성하세요.
        printf("Take the good energy of the lucky number 3\n");
        break;
    case 4:
        // TODO: 숫자 4에 대한 운세 메시지를 작성하세요.
        printf("You will be blessed with four kinds of luck\n");
        break;
    case 5:
        // TODO: 숫자 5에 대한 운세 메시지를 작성하세요.
        printf("You will give birth to five children\n");
        break;
    case 6:
        // TODO: 숫자 6에 대한 운세 메시지를 작성하세요.
        printf("You will be able to buy six houses\n");
        break;
    case 7:
        // 사진의 예시 문구 반영 (원하시는 내용으로 수정 가능합니다)
        printf("You are an analytical thinker and a seeker of truth!\n");
        break;
    case 8:
        // TODO: 숫자 8에 대한 운세 메시지를 작성하세요.
        printf("You can become the eighth president\n");
        break;
    case 9:
        // TODO: 숫자 9에 대한 운세 메시지를 작성하세요.
        printf("You will be able to own nine castles\n");
        break;
    default:
        printf("Unknown destiny number.\n");
        break;
    }

    return 0;
}