using System;

namespace CSharpApp;

/// <summary>
/// アプリケーションプログラム
/// </summary>
internal class Program
{
    /// <summary>
    /// エントリポイント
    /// </summary>
    /// <param name="args"></param>
    private static void Main()
    {
        // ManagedVector3を使用してみる
        Console.WriteLine("--- Vector3の定義と計算 ---");
        using (CppWrapper.ManagedVector3 vector = new(10.0, 20.0, 30.0))
        {
            vector.X = 5.0;
            Console.WriteLine($"現在のX座標: {vector.X}");

            double vectorLength = vector.CalculateLength();
            Console.WriteLine($"ベクトル長さ: {vectorLength}");
        }

        // ManagedCollisionCheckerを使用してみる
        Console.WriteLine("--- 衝突検知計算 ---");
        using (CppWrapper.ManagedCollisionChecker checker = new CppWrapper.ManagedCollisionChecker())
        {
            CppWrapper.ManagedVector3 point1 = new(0.0, 0.0, 0.0);
            CppWrapper.ManagedVector3 point2 = new(3.0, 4.0, 5.0);

            // 距離を計算
            double distance = checker.GetDistance(point1, point2);
            Console.WriteLine($"点1: {point1.X}, {point1.Y}, {point1.Z}");
            Console.WriteLine($"点2: {point2.X}, {point2.Y}, {point2.Z}");
            Console.WriteLine($"計算結果（距離）: {distance}");

            // 衝突を計算
            CppWrapper.ManagedCollisionResult collisionResult = checker.CalculateCollision();
            Console.WriteLine($"計算結果（衝突）: 衝突有無 = {collisionResult.IsCollide}, めり込み量 = {collisionResult.PenetrationDistance}");
        }
    }
}
