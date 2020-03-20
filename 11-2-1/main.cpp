//
//  main.cpp
//  11-2-1
//
//  Created by Corinyi on 2020/03/19.
//  Copyright © 2020 Corinyi. All rights reserved.
//

#include <stdio.h>

int main(void){
    char str[20];
    int idx=0;
    
    printf("영단어를 입력하세요: ");
    scanf("%s", str);
    
    while (str[idx] != '\0') {
        idx++;
    }
    printf("영단어 길이: %d \n", idx);

    return 0;
}
