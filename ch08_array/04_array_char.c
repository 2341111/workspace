/*
 * 문자를 저장하는 배열
 *  - C언어는 문자열형(String)이 존재 하지않음
 *  - 그래서 char배열을 사용해서 저장
 *  - char배열은 문자열길이보다 +1 더 크게 만들기
 *  - 마지막에 문자열의 끝이라는 널(\0)문자 저장
 *  - 배열은 값이 비면 0으로 초기화(0은 아스키코드 \0)
 *  
 *  ※ char배열은 선언시 초기화하면 남은 배열 요소를
 *     0으로 채우고 자동으로 문자열 끝에 \0문자 저장
 *     ex) char name[4] = "ABC";
 *     [0] "A"
 *     [1] "B"
 *     [2] "C"
 *     [3] "\0"  // 선언+초기화: 자동으로 널문자 저장
 * 
 *     // 선언과 초기화를 따로 하는 경우
 *     //   ㄴ 널문자가 저장되지 않음(직접 입력)
 *     char name[4];
 *     name[0] = "A";
 *     name[1] = "B";
 *     name[2] = "C";
 *     name[3] = "\0";  // 반드시 직접 입력
 */

#include <stdio.h>

int main() {
    char fruit[6] = "apple";
    char fruit[6] = {'a', 'p', 'p', 'l', 'e'};  // 가능은하지만 불편해서 사용하지 않음!

    char fruit[6];
    fruit[0] = 'a';
    fruit[1] = 'p';
    fruit[2] = 'p';
    fruit[3] = 'l';
    fruit[4] = 'e';
    fruit[5] = '\0';
}