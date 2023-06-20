#pragma once
#include "kyrComponent.h"
#include "kyrMesh.h"
#include "kyrShader.h"

namespace kyr
{
	class MeshRenderer : public Component
	{
	public:
		MeshRenderer();
		~MeshRenderer();

		virtual void Initialize() override;
		virtual void Update() override;
		virtual void LateUpdate() override;
		virtual void Render() override;

	private:
		Mesh* mMesh;
		Shader* mShader;
	};

}

