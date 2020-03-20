//
//  main.cpp
//  11-1-2
//
//  Created by 이윤서 on 2020/03/19.
//  Copyright © 2020 LEEYOUNSEO. All rights reserved.
//

#include <stdio.h>

int main(void){
    
    char str[]={'G','o','o','d',' ','t','i','m','e'};
    
    for(int i=0;i<sizeof(str);i++){
        printf("%c", str[i]);
    }
    printf("\n");
    
    return 0;
}
