#pragma once
#include "../CppNative/CollisionChecker.h"
#include "ManagedVector3.h"
#include "ManagedCollisionResult.h"

using namespace System;

/// <summary>
/// Wrapper名前空間
/// </summary>
namespace CppWrapper
{
	public ref class ManagedCollisionChecker
	{
	private:
		/// <summary>
		/// ネイティブへの実体へのポインタ
		/// </summary>
		CppNative::Collision::CollisionChecker* _native;

	public:
		/// <summary>
		/// コンストラクタ
		/// </summary>
		ManagedCollisionChecker();

		/// <summary>
		/// デストラクタ
		/// </summary>
		~ManagedCollisionChecker();

		/// <summary>
		/// ファイナライザ
		/// </summary>
		!ManagedCollisionChecker();

		/// <summary>
		/// 距離を計算する
		/// </summary>
		/// <param name="v1"></param>
		/// <param name="v2"></param>
		/// <returns></returns>
		double GetDistance(ManagedVector3^ v1, ManagedVector3^ v2);

		/// <summary>
		/// 衝突計算する
		/// </summary>
		/// <returns>衝突計算結果</returns>
		CppWrapper::ManagedCollisionResult^ CalculateCollision();
	};
}
