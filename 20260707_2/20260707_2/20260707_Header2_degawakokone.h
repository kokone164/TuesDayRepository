#pragma once

//定数
const int INDEX = 3;
const int CARD = 10;
const int MIN = 0;
const int MAX = 9;

//関数プロトタイプ宣言
void Game();

/// <summary>
/// 数字分配
/// </summary>
/// <param name="plyNum">プレイヤーの数字</param>
/// <param name="cpuNum">CPUの数字</param>
/// <param name="index">INDEX</param>
void Rand(int plyNum[], int cpuNum[], int index);

/// <summary>
///入力チェック
/// </summary>
/// <param name="min">0</param>
/// <param name="max">9</param>
/// <returns>入力した数字</returns>
int InputCheck(int min, int max);