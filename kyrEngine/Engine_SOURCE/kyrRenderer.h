#pragma once
#include "kyrEngine.h"
#include "kyrGraphicDevice_Dx11.h"
#include "kyrMesh.h"
#include "kyrShader.h"

using namespace kyr::math;
namespace renderer
{
	struct Vertex
	{
		Vector3 pos;
		Vector4 color;
	};

	extern Vertex vertexes[];
	extern ID3D11InputLayout* triangleLayout;

	extern kyr::Mesh* mesh;
	extern ID3D11Buffer* triangleConstantBuffer;

	extern kyr::Shader* shader;
	extern ID3D11PixelShader* trianglePSShader;


	void Initialize();
	void Release();
}
