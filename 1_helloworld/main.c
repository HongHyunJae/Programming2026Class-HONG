#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int price, quantity, total_amount, discount, final_amount;
    int received, change;
    int w1000, w500, w100, w50, remainder;

    // 1. 상품 단가와 수량 입력받기
    printf("Unit Price (KRW): ");
    (void)scanf("%d", &price);

    printf("Quantity: ");
    (void)scanf("%d", &quantity);

    // 2. 금액 계산
    total_amount = price * quantity;          // 합계 금액
    discount = (int)(total_amount * 0.1);     // 10% 할인 금액
    final_amount = total_amount - discount;   // 최종 결제 금액

    printf("\nTotal Amount: %d KRW\n", total_amount);
    printf("Discount (10%%) : -%d KRW\n", discount);
    printf("Final Amount: %d KRW\n\n", final_amount);

    // 3. 받은 현금 입력받기
    printf("Received Amount (KRW): ");
    (void)scanf("%d", &received);

    // 4. 거스름돈 계산
    change = received - final_amount;
    printf("Change: %d KRW\n", change);

    // 5. 화폐 단위별 개수 계산 (큰 단위부터 차례대로)
    w1000 = change / 1000;           // 1000원권 개수
    remainder = change % 1000;       // 1000원권 주고 남은 돈

    w500 = remainder / 500;          // 500원짜리 개수
    remainder = remainder % 500;     // 500원짜리 주고 남은 돈

    w100 = remainder / 100;          // 100원짜리 개수
    remainder = remainder % 100;     // 100원짜리 주고 남은 돈

    w50 = remainder / 50;            // 50원짜리 개수
    remainder = remainder % 50;      // 최종 남은 잔돈 (나머지)

    // 6. 결과 출력
    printf("1,000 KRW Bill: %d\n", w1000);
    printf("500 KRW Coin: %d\n", w500);
    printf("100 KRW Coin: %d\n", w100);
    printf("50 KRW Coin: %d\n", w50);
    printf("Remainder: %d KRW\n", remainder);

    return 0;
}
