#pragma once
#include "kyrEntity.h"

namespace kyr
{
	using namespace kyr::enums;

	class Component :
		public Entity
	{
	public:
		Component();
		~Component();

		virtual void Initialize();
		virtual void Update();
		virtual void LateUpdate();
		virtual void Render();

	private:
		const eComponentType mType;
	};

}

