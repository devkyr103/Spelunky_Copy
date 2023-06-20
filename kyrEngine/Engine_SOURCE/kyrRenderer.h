#pragma once
#include "kyrEngine.h"
#include "kyrGraphicDevice_Dx11.h"
#include "kyrMesh.h"
#include "kyrShader.h"
#include "kyrConstantBuffer.h"

namespace renderer
{
	using namespace kyr;
	using namespace kyr::math;
	using namespace kyr::graphics;
	struct Vertex
	{
		Vector3 pos;
		Vector4 color;
		Vector2 uv;
	};

	extern Vertex vertexes[];
	extern kyr::graphics::ConstantBuffer* constantBuffer[(UINT)eCBType::End];


	void Initialize();
	void Release();
}
