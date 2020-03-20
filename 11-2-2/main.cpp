//
//  main.cpp
//  11-2-2
//
//  Created by Corinyi on 2020/03/20.
//  Copyright © 2020 Corinyi. All rights reserved.
//

#include <stdio.h>

int main(void){
    char voca[20];
    int size=0;
    char idx;
    
    printf("영어단어를 입력하세요: ");
    scanf("%s", voca);
    
    while(voca[size] != '\0'){
        size++;
    }
    
    for(int j=0;j<= size/2;j++){
        idx = voca[size-j-1];
        voca[size-j-1] = voca[j];
        voca[j] = idx;
        
    }
     
    printf("바뀐 영어단어 : %s", voca);

    return 0;
}
