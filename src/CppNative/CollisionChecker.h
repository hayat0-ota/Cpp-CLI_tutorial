#pragma once
#include "Vector3.h"
#include "CollisionResult.h"

namespace CppNative::Collision
{
	/// <summary>
	/// 衝突検知器
	/// </summary>
	class CollisionChecker
	{
	public:
		/// <summary>
		/// 距離を計算する
		/// </summary>
		/// <param name="v1"></param>
		/// <param name="v2"></param>
		/// <returns></returns>
		double CalculateDistance(Geometry::Vector3 v1, Geometry::Vector3 v2) const;

		/// <summary>
		/// 衝突計算する
		/// </summary>
		/// <returns>衝突計算結果</returns>
		CollisionResult CalculateCollision();
	};
}