#include "kyrGameObject.h"
#include "kyrRenderer.h"
#include "kyrGraphicDevice_Dx11.h"
#include "kyrTransform.h"

namespace kyr
{
	GameObject::GameObject()
		: mState(eState::Active)
	{
		AddComponent<Transform>();
	}

	GameObject::~GameObject()
	{
	}

	void GameObject::Initialize()
	{
	}

	void GameObject::Update()
	{
		
		for (Component* comp : mComponents)
		{
			comp->Update();
		}

	}

	void GameObject::LateUpdate()
	{
		for (Component* comp : mComponents)
		{
			comp->LateUpdate();
		}
	}

	void GameObject::Render()
	{
		for (Component* comp : mComponents)
		{
			comp->Render();
		}
	}
}