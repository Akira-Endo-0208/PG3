#include <stdio.h>
#include <Windows.h>
#include "Enemy.h"



int main() {
    Enemy* enemy = new Enemy;
    Enemy a;

    
    printf("%d\n", enemy->liveFlag_);
    while (true)
    {
        
        if (GetAsyncKeyState(VK_SPACE) & 0x01) {
            a.liveFlag_ = 1;

            enemy->liveFlag_ = 0;

            printf("a.LiveFlag_ = %d\n", a.liveFlag_);
            printf("enemy.LiveFlag_ = %d\n", enemy->liveFlag_);
            
            enemy->Update();



        }
    }
        return 0;
}