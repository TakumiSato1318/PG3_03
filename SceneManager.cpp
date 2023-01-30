#include "SceneManager.h"
#include "DxLib.h"

SceneManager* SceneManager::GetInstance()
{
	static SceneManager instance;

	return &instance;
}

void SceneManager::ChangeScene(int sceneNo)
{
	switch (sceneNo) {
	case 0:
		// 背景色を設定する
		SetBackgroundColor(255, 100, 100);

		DrawFormatString(100, 150, GetColor(255, 255, 255), "SceneNo:%d", sceneNo, true);
		DrawFormatString(100, 170, GetColor(255, 255, 255), "Press Space to Scene Change", true);
		break;
	case 1:
		// 背景色を設定する
		SetBackgroundColor(100, 255, 100);

		//シーン情報などを表示
		DrawFormatString(100, 150, GetColor(255, 255, 255), "SceneNo:%d", sceneNo, true);
		DrawFormatString(100, 170, GetColor(255, 255, 255), "Press Space to Scene Change", true);
		break;
	case 2:
		// 背景色を設定する
		SetBackgroundColor(100, 100, 255);

		//シーン情報などを表示
		DrawFormatString(100, 150, GetColor(255, 255, 255), "SceneNo:%d", sceneNo, true);
		DrawFormatString(100, 170, GetColor(255, 255, 255), "Press Space to Scene Change", true);
		break;
	}
}
