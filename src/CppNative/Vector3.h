#pragma once

/// <summary>
/// Native名前空間
/// </summary>
namespace CppNative::Geometry
{
	/// <summary>
	/// 3次元ベクトル
	/// </summary>
	class Vector3
	{
	public:
		double X;
		double Y;
		double Z;

		/// <summary>
		/// Constructor
		/// </summary>
		/// <param name="x">X成分</param>
		/// <param name="y">Y成分</param>
		/// <param name="z">Z成分</param>
		Vector3(double x, double y, double z);

		/// <summary>
		/// 長さを計算する
		/// </summary>
		/// <returns>長さ</returns>
		double CalculateLength() const;
	};
}