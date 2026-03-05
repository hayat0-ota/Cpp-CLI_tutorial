#include "pch.h"
#include "Vector3.h"
#include <cmath>

namespace CppNative::Geometry
{
	/// <inheritdoc/>
	Vector3::Vector3(double x, double y, double z)
	{
		X = x;
		Y = y;
		Z = z;
	}

	/// <inheritdoc/>
	double Vector3::CalculateLength() const
	{
		return std::sqrt(
			std::pow(X, 2) +
			std::pow(Y, 2) +
			std::pow(Z, 2)
		);
	}
}