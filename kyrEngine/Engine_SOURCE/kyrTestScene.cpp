#include "kyrTestScene.h"
#include "kyrTransform.h"
#include "kyrMeshRenderer.h"
#include "kyrResources.h"
#include "kyrMesh.h"
#include "kyrCameraScript.h"
#include "kyrCamera.h"
#include "kyrTestScreen.h"
#include "kyrTestObject.h"

namespace kyr
{
	TestScene::TestScene()
	{
	}

	TestScene::~TestScene()
	{
	}

	void TestScene::Initialize()
	{
		TestScreen* screen = new TestScreen();
		AddGameObject(eLayerType::BackGround, screen);

		{
			MeshRenderer* mr = screen->AddComponent<MeshRenderer>();
			mr->SetMesh(Resources::Find<Mesh>(L"RectMesh"));
			mr->SetMaterial(Resources::Find<Material>(L"spelunkylogoMaterial"));
			screen->GetComponent<Transform>()->SetPosition(Vector3(0.f, 0.f, 0.f));
			screen->GetComponent<Transform>()->SetScale(Vector3(0.5f, 0.5f, 0.5f));
		}
		// Olmec
		TestObject* object = new TestObject();
		AddGameObject(eLayerType::Player, object);

		{
			MeshRenderer* mr = object->AddComponent<MeshRenderer>();
			mr->SetMesh(Resources::Find<Mesh>(L"RectMesh"));
			mr->SetMaterial(Resources::Find<Material>(L"temptitleMaterial"));
			object->GetComponent<Transform>()->SetPosition(Vector3(0.f, 0.f, 0.f));
			object->GetComponent<Transform>()->SetScale(Vector3(2.f, 2.f, 0.f));
		}

		// Camera
		GameObject* camera = new GameObject();
		AddGameObject(eLayerType::Player, camera);
		camera->GetComponent<Transform>()->SetPosition(Vector3(0.f, 0.f, -1.f));
		Camera* cameraComp = camera->AddComponent<Camera>();
		camera->AddComponent<CameraScript>();


		Scene::Initialize();
	}

	void TestScene::Update()
	{
		Scene::Update();
	}

	void TestScene::LateUpdate()
	{
		Scene::LateUpdate();
	}

	void TestScene::Render()
	{
		Scene::Render();
	}
}
