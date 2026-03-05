#include "pch.h"
#include "ManagedCollisionChecker.h"
#include <cmath>

namespace CppWrapper
{
	/// <inheritdoc>
	ManagedCollisionChecker::ManagedCollisionChecker()
	{
		_native = new CppNative::Collision::CollisionChecker();
	}

	/// <inheritdoc>
	ManagedCollisionChecker::~ManagedCollisionChecker()
	{
		this->!ManagedCollisionChecker();
	}

	/// <inheritdoc>
	ManagedCollisionChecker::!ManagedCollisionChecker()
	{
		if (_native != nullptr)
		{
			delete _native;
			_native = nullptr;
		}
	}

	/// <inheritdoc>
	double ManagedCollisionChecker::GetDistance(ManagedVector3^ v1, ManagedVector3^ v2)
	{
		CppNative::Geometry::Vector3 nv1(v1->X, v1->Y, v1->Z);
		CppNative::Geometry::Vector3 nv2(v2->X, v2->Y, v2->Z);

		return _native->CalculateDistance(nv1, nv2);
	}

	/// <inheritdoc>
	ManagedCollisionResult^ ManagedCollisionChecker::CalculateCollision()
	{
		// 本当は下記のように呼びたいが、衝突検知処理は実装していないため衝突検知結果のみを返す
		// return _native->CalculateCollision();

		// 注意：マネージドクラスではnewは行えない（下記は不可）
		// return new ManagedCollisionResult(true, 25.2);
		
		CppNative::Collision::CollisionResult result = _native->CalculateCollision();

		// CollisionResultをCppNativeからCppWrapperに置き換えて返す
		return gcnew ManagedCollisionResult(result.IsCollide, result.PenetrationDistance);;
	}
}