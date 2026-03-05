#pragma once

namespace CppNative::Collision
{
	/// <summary>
	/// 衝突検知結果
	/// </summary>
	class CollisionResult
	{
	public:
		/// <summary>
		/// コンストラクタ
		/// </summary>
		CollisionResult(bool, double);

		/// <summary>
		/// 衝突しているかどうか
		/// </summary>
		bool IsCollide;

		/// <summary>
		/// めり込み量
		/// </summary>
		double PenetrationDistance;
	};
}

