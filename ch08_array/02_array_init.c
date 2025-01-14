#include <stdio.h>

int main() {
    // 배열 초기화
    //  - 배열 초기화는 선언 시 최초 한번만 가능
    //  - 그 이후로는 배열요소에 일일이 값을 대입
    //  - {} 사용해서 한 번에 대입 불가능!

    // 1. 기본적인 초기화
    int ary1[5] = {1, 2, 3, 4, 5};

    // 2. 초기값이 배열개수보다 적은 경우
    //   ㄴ 기본값으로 채움: 정수(0), 실수(0.0)
    int ary2[5] = {1, 2, 3};

    // 3. 모든 요소를 0으로 처리
    int ary3[1000] = {0};

    // 4. 배열개수 생략 된 경우
    //   ㄴ 초기값 개수만큼 배열 크기를 설정
    int ary4[] = {1, 2, 3};
}