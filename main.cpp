#include <stdio.h>
#include <Windows.h>
#include "Enemy.h"



int main() {

    Enemy* enemy = new Enemy;
    int input = 0;


    while (true)
    {
        printf("0:Exit 1:continue ==> ");
        scanf_s("%d", &input);
        if (input == 0){break;}

        enemy->Update();

    }
        return 0;
}