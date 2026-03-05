#include "pch.h"
#include "CollisionChecker.h"
#include <cmath>

namespace CppNative::Collision
{
	/// <inheritdoc/>
	double CollisionChecker::CalculateDistance(Geometry::Vector3 v1, Geometry::Vector3 v2) const
	{
		return std::sqrt(
			std::pow(v1.X - v2.X, 2) +
			std::pow(v1.Y - v2.Y, 2) +
			std::pow(v1.Z - v2.Z, 2)
		);
	}

	/// <inheritdoc/>
	CollisionResult CollisionChecker::CalculateCollision()
	{
		// 本当はここで詳細な衝突計算を行う
		// 計算結果は適当な値とする
		CollisionResult result(true, 25.4);
		return result;
	}
}