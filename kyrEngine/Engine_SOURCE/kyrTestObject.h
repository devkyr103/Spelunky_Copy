#pragma once
#include "kyrGameObject.h"

namespace kyr
{
	class TestObject :
		public GameObject
	{
	public:
		TestObject();
		virtual ~TestObject();

		virtual void Initialize();
		virtual void Update();
		virtual void LateUpdate();
		virtual void Render();

	private:

	};


}
