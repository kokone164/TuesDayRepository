#include<iostream>
#include"ScoreManager.h"
using namespace std;

int main(void)
{
	//ScoreManagerクラスをオブジェクト化(インスタンス)
	ScoreManager score;

	cout << "ゲームスタート" << endl;

	score.displayScores();

	//100ポイント獲得
	cout << "100ポイント獲得しました。" << endl;

	score.addPoints(100);
	score.displayScores();
	//50ポイント獲得
	cout << "50ポイント獲得しました。" << endl;

	score.addPoints(50);
	score.displayScores();

	//ハイスコアを更新
	cout << endl;
	cout << "ハイスコア更新" << endl;

	score.updateHighScore();
	score.displayScores();

	cout << endl;
	cout << "ゲーム終了" << endl;

	score.resetScore();
	score.displayScores();

	return 0;
}