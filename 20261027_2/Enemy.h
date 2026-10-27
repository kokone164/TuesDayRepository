#pragma once
class Enemy
{
private:
	int hp;

public:
	/// <summary>
	/// コンストラクタ
	/// </summary>
	/// <param name="hp">HP</param>
	Enemy(int hp);

	/// <summary>
	/// デストラクタ
	/// </summary>
	~Enemy();

	/// <summary>
	/// HP表示
	/// </summary>
	void ShowHp()const;
	
	/// <summary>
	/// ダメージ関数
	/// </summary>
	/// <param name="damage">受けるダメージ</param>
	void Damage(int damage);

	/// <summary>
	/// HP取得
	/// </summary>
	/// <returns>HP</returns>
	int GetHp()const;
};