#include "kyrScene.h"

namespace kyr
{
	Scene::Scene()
	{
	}
	Scene::~Scene()
	{

	}

	void Scene::Initialize()
	{
		// ���⼭ �ʱ� ���� �ʵ����͸� ��������� �Ѵ�.
	}

	void Scene::Update()
	{
		for (Layer* layer : mLayers)
		{
			layer->Update();
		}
	}

	void Scene::LateUpdate()
	{
		for (Layer* layer : mLayers)
		{
			layer->LateUpdate();
		}
	}
	void Scene::Render()
	{
		for (Layer* layer : mLayers)
		{
			layer->Render();
		}
	}
}