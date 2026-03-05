#pragma once
namespace CppWrapper
{
	/// <summary>
	/// マネージド衝突検知データ型
	/// </summary>
	public ref class ManagedCollisionResult
	{
	public:
		/// <summary>
		/// コンストラクタ
		/// </summary>
		/// <param name="isCollide">衝突しているか</param>
		/// <param name="distance"></param>
		ManagedCollisionResult(bool isCollide, double distance);

		/// <summary>
		/// 衝突しているか
		/// </summary>
		bool IsCollide;

		/// <summary>
		/// めり込み量
		/// </summary>
		double PenetrationDistance;
	};
}

