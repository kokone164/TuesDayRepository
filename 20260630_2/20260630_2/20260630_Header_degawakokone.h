#pragma once

//定数
const int BLACKJACK = 21;
const int CARD = 11;
const int CHOICE_MIN = 0;
const int CHOICE_MAX = 1;

//関数プロトタイプ宣言

/// <summary>
/// カード追加
/// </summary>
/// <param name="card">どちらかの手札</param>
void AddCard(int& card);

/// <summary>
/// バーストしていないときの勝敗判定
/// </summary>
/// <param name="player">プレイヤーの手札</param>
/// <param name="cpu">CPUの手札</param>
void BlackJack(int player, int cpu);

/// <summary>
/// バーストした時の勝敗
/// </summary>
/// <param name="player">プレイヤーの手札</param>
/// <param name="cpu">CPUの手札</param>
void Burst(int& player, int& cpu);

/// <summary>
/// 入力チェック
/// </summary>
/// <param name="min">Yes</param>
/// <param name="max">No</param>
/// <returns>入力した値</returns>
int InputCheck(int min, int max);

/// <summary>
/// ゲーム進行
/// </summary>
void Game();