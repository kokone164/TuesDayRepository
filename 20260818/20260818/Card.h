#pragma once
//===============================================================
//定数
//===============================================================

//カードの総枚数
const int TOTAL_CARD = 28;
//１グループのカード枚数
const int GROUP_CARD = 7;
//カードの総枚数
const int MAX_NUMBER = 7;

//===============================================================
//関数
//===============================================================

/// <summary>
/// 28枚のカード作成
/// </summary>
/// <param name="cards">カード</param>
void createCard(int cards[]);

/// <summary>
/// カードをシャッフル
/// </summary>
/// <param name="cards">カード</param>
void shuffleCard(int cards[]);

/// <summary>
/// カードを表示
/// </summary>
/// <param name="cards">カード</param>
void showCard(int cards[]);

/// <summary>
/// カードを伏せて表示
/// </summary>
/// <param name="cards">カード</param>
void showHiddenCard(int cards[]);