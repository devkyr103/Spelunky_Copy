#pragma once
#include "kyrScene.h"

namespace kyr
{
	class TestScene :
		public Scene
	{
	public:
		TestScene();
		~TestScene();

		virtual void Initialize();
		virtual void Update();
		virtual void LateUpdate();
		virtual void Render();

	private:

	};

}

