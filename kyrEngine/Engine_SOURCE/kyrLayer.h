#pragma once
#include "kyrGameObject.h"

namespace kyr
{
	class Layer
	{
	public:
		Layer();
		~Layer();

		virtual void Initialize();
		virtual void Update();
		virtual void LateUpdate();
		virtual void Render();

	private:
		std::vector<GameObject*> mGameObjects;
	};

}

