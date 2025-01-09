#include <stdio.h>

// 구구단 2~9단 출력
//   반복문 1개→ i: 2~9단
//     반복문 1개→ 단(ix1~ix9)

int main(){
    for(int i=2; i<=9; i++) {  // 2단인지, 3단인지, 단수를 결정
        for(int j=1; j <= 9; j++) {  // x1~x9까지 출력
            printf("%dx%d=%d", i, j, i*j);
        }
    }
    
    for(int i=1; i <= 9; i++) {  // x1~x9까지 출력
        printf("2x%d=%d", i, 2*i);
    }
}