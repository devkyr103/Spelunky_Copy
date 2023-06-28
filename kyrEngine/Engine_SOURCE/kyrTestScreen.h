#pragma once
#include "kyrGameObject.h"

namespace kyr
{
	class TestScreen : public GameObject
	{
	public:
		TestScreen();
		virtual ~TestScreen();

		virtual void Initialize();
		virtual void Update();
		virtual void LateUpdate();
		virtual void Render();
		
	private:
	};

}

