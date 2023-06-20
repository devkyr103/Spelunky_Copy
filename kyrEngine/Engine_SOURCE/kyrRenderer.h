#pragma once
#include "kyrEngine.h"
#include "kyrGraphicDevice_Dx11.h"
#include "kyrMesh.h"
#include "kyrShader.h"
#include "kyrConstantBuffer.h"

using namespace kyr::math;
namespace renderer
{
	struct Vertex
	{
		Vector3 pos;
		Vector4 color;
		Vector2 uv;
	};

	extern Vertex vertexes[];
	extern kyr::Mesh* mesh;
	extern kyr::Shader* shader;
	extern kyr::graphics::ConstantBuffer* constantBuffer;

	void Initialize();
	void Release();
}
