#include "kyrMeshRenderer.h"
#include "kyrGameObject.h"
#include "kyrTransform.h"
#include "kyrRenderer.h"

namespace kyr
{
	MeshRenderer::MeshRenderer()
		: Component(eComponentType::MeshRenderer)
		, mMesh(nullptr)
		, mMaterial(nullptr)
	{
	}
	MeshRenderer::~MeshRenderer()
	{
	}
	void MeshRenderer::Initialize()
	{
	}
	void MeshRenderer::Update()
	{
	}
	void MeshRenderer::LateUpdate()
	{
	}
	void MeshRenderer::Render()
	{
		Transform* tr = GetOwner()->GetComponent<Transform>();
		tr->BindConstantBuffer();

		//mMesh->BindBuffer();
		//mShader->Binds();

		mMesh->BindBuffer();
		mMaterial->Binds();
		mMesh->Render();
		
		mMaterial->Clear();
	}
}