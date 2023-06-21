#include "kyrCameraScript.h"
#include "kyrTransform.h"
#include "kyrGameObject.h"
#include "kyrTime.h"

namespace kyr
{
	void CameraScript::Update()
	{
		Transform* tr = GetOwner()->GetComponent<Transform>();
		Vector3 pos = tr->GetPosition();
		pos.x += 1.0f * Time::DeltaTime();
		tr->SetPosition(pos);
	}
}