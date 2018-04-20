//
//  main.c
//  StringLength
//
//  Created by Сергей Тришин on 21.04.2018.
//  Copyright © 2018 Сергей Тришин. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int main(int argc, const char * argv[]) {
    
    char string[128] = {};    
    printf("Enter string");
    gets(string);
    int count = 0;
    int number = 0;
    for (int i = 0; i < strlen(string)+1; i++) {
        if (string[i] != ' '&& string[i] != '\0' ) {
            count++;
            printf("%c", string[i]);
        } else {
            number++;
            printf(" word #%d = %d\n", number, count);
            count = 0;
        }
    }
    getchar();
    return 0;
}
