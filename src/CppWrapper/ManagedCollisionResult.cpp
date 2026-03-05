#include "pch.h"
#include "ManagedCollisionResult.h"

namespace CppWrapper
{
	/// <inheritdoc/>
	ManagedCollisionResult::ManagedCollisionResult(bool isCollide, double distance)
	{
		IsCollide = isCollide;
		PenetrationDistance = distance;
	}
}