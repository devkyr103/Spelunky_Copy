#pragma once

namespace kyr::enums
{
	enum class eComponentType
	{
		None,
		Transform,
		Mesh,
		Particle,
		MeshRenderer,
		Script,
		Camera,
		End,
	};

	enum class eLayerType
	{
		Player,
		Monster,
		UI,
		End,
	};

	enum class eResourceType
	{
		Texture,
		Shader,
		Material,
		Mesh,
		End,
	};
}