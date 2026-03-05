#pragma once
#include "../CppNative/Vector3.h"

namespace CppWrapper
{
	/// <summary>
	/// Vector3のマネージドクラス
	/// </summary>
	public ref class ManagedVector3
	{
	private:
		CppNative::Geometry::Vector3* _native;

	public:
		/// <summary>
		/// Constructor
		/// </summary>
		/// <param name="x">X成分</param>
		/// <param name="y">Y成分</param>
		/// <param name="z">Z成分</param>
		ManagedVector3(double x, double y, double z);

		/// <summary>
		/// デストラクタ
		/// </summary>
		~ManagedVector3();

		/// <summary>
		/// ファイナライザ
		/// </summary>
		!ManagedVector3();

		property double X
		{
			double get() { return _native->X; }
			void set(double value) { _native->X = value; }
		}

		property double Y
		{
			double get() { return _native->Y; }
			void set(double value) { _native->Y = value; }
		}

		property double Z
		{
			double get() { return _native->Z; }
			void set(double value) { _native->Z = value; }
		}

		/// <summary>
		/// 長さを計算する
		/// </summary>
		/// <returns>長さ</returns>
		double CalculateLength();
	};
}