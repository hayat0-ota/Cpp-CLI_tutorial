# プロジェクト構成
本ソリューションはC++/CLIについて学習した内容です。

プロジェクト構成は下記のようになっています。

```
Cpp-CLI/
├── CppNative（C++）
├── CppWrapper（C++）
└── CSharpApp（C#）
```

- CppNative
	- アンマネージドなコードが含まれるプロジェクトです。C++ライブラリを使用する場合はこちらに属します。
- CppWrapper
	- マネージドなコードが含まれるプロジェクトです。C++とC#の中間層として機能します。
- CSharpApp
	- 簡易的なC#プロジェクトです。CppNativeに含まれる処理をCppWrapperを経由して実施します。

# 言語バージョン
言語バージョンは下記を使用しています。

- C# : 12.0
- C++ : C++17

# 実行ファイルの生成場所
buildフォルダが生成され、その中にあります。

# 共有事項
- Wrapperクラスではnewできない。代わりにgcnewが使用できる。
	- gcnewで生成されるデータ型には、データ型のSuffixとして"^"を付与すること
	- 例：`ManagedCollisionResult`ではなく`ManagedCollisionResult^`とすること