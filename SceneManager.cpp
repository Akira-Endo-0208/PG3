#include "SceneManager.h"

SceneManager::SceneManager() {

}

SceneManager* SceneManager::GetInstance() {

	static SceneManager instance;

	return &instance;
}

void SceneManager::ChangeScene(int sceneNo)

{
	if (sceneNo == 0)
	{
		printf("Title\n");
	}
	if (sceneNo == 1)
	{
		printf("NewGame\n");
	}
	if (sceneNo == 2)
	{
		printf("GamePlay\n");
	}
	if (sceneNo == 3)
	{
		printf("GameClear\n");
	}
}
