#pragma once
#include "kyrEntity.h"
#include "kyrComponent.h"

namespace kyr
{
	class GameObject :
		public Entity
	{
	public:
		enum eState
		{
			Active,
			Pause,
			Dead,
		};

		GameObject();
		virtual ~GameObject();

		virtual void Initialize();
		virtual void Update();
		virtual void LateUpdate();
		virtual void Render();

	private:
		eState mState;
	};

}

