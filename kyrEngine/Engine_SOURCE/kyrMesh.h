#pragma once
#include "kyrResource.h"
#include "kyrGraphicDevice_Dx11.h"

namespace kyr
{
	using namespace graphics;


	class Mesh :
		public Resource
	{
	public:
		Mesh();
		~Mesh();

		virtual HRESULT Load(const std::wstring& path) override;

		bool CreateVertexBuffer(void* data, UINT Count);
		bool CreateIndexBuffer(void* data, UINT Count);

		void BindBuffer(); //Buffer ���������ο� �����ش�.

		UINT GetIndexCount() { return mIndexCount; }

	private:
		Microsoft::WRL::ComPtr<ID3D11Buffer> mVertexBuffer;
		Microsoft::WRL::ComPtr<ID3D11Buffer> mIndexBuffer;

		D3D11_BUFFER_DESC mVBDesc;
		D3D11_BUFFER_DESC mIBDesc;

		UINT mIndexCount;
	};

}

