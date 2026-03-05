#include "pch.h"
#include "CollisionResult.h"

namespace CppNative::Collision
{
	/// <inheritdoc/>
	CollisionResult::CollisionResult(bool isCollide, double distance)
	{
		IsCollide = isCollide;
		PenetrationDistance = distance;
	}
}
