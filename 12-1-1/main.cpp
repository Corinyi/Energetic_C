//
//  main.cpp
//  12-1-1
//
//  Created by Corinyi on 2020/03/21.
//  Copyright © 2020 Corinyi. All rights reserved.
//

#include <stdio.h>

int main(void){
    int num=10;
    int * ptr1 = &num;
    int *ptr2 = ptr1;
    
    printf("%d\n",num);
    printf("%d\n",&num);
    printf("%d\n",ptr1);
    printf("%d\n",*ptr1);
    printf("%d\n",ptr2);
    printf("%d\n\n",*ptr2);
    
    (*ptr1)+=1;
    
    printf("%d\n",num);
    printf("%d\n",&num);
    printf("%d\n",ptr1);
    printf("%d\n",*ptr1);
    printf("%d\n",ptr2);
    printf("%d\n\n",*ptr2);
    
    (*ptr2)+=3;
    
    printf("%d\n",num);
    printf("%d\n",&num);
    printf("%d\n",ptr1);
    printf("%d\n",*ptr1);
    printf("%d\n",ptr2);
    printf("%d\n\n",*ptr2);
    
    
    return 0;
}
