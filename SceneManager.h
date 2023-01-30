#pragma once
class SceneManager
{
public:
	static SceneManager* GetInstance();

	void ChangeScene(int sceneNo);
};