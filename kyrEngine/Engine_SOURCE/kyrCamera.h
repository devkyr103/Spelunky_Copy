#pragma once
#include "kyrComponent.h"
#include "kyrGraphics.h"

namespace kyr
{
	class Camera : public Component
	{
	public:
		Camera();
		~Camera();

	private:
		static Matrix mView;
		static Matrix mProjection;
	};

}

