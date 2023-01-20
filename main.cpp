#include <stdio.h>
#include"SceneManager.h"

int main() {
    int sceneNo = 0;

    SceneManager* sceneManager = SceneManager::GetInstance();

    printf("SceneNo: %d\n", sceneNo);


    while (1) {

        if (GetAsyncKeyState(VK_SPACE) & 0x01) {
            sceneNo++;
            if (sceneNo > 3)
            {
                sceneNo = 0;
            }
           
            printf("SceneNo: %d\n", sceneNo);

            sceneManager->ChangeScene(sceneNo);

            printf("Press Space to Scene Change\n\n");
           
        }
       

        
    }
}