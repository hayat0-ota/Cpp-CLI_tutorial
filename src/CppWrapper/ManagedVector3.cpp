#include "pch.h"
#include "ManagedVector3.h"

namespace CppWrapper
{
	/// <inheritdoc/>
	ManagedVector3::ManagedVector3(double x, double y, double z)
	{
		_native = new CppNative::Geometry::Vector3(x, y, z);
	}

	/// <inheritdoc/>
	ManagedVector3::~ManagedVector3()
	{
		this->!ManagedVector3();
	}

	/// <inheritdoc/>
	ManagedVector3::!ManagedVector3()
	{
		if (_native != nullptr)
		{
			delete _native;
			_native = nullptr;
		}
	}

	/// <inheritdoc/>
	double ManagedVector3::CalculateLength()
	{
		// ネイティブクラスを用意して計算する
		CppNative::Geometry::Vector3 nativeV(X, Y, Z);
		return nativeV.CalculateLength();
	}
}