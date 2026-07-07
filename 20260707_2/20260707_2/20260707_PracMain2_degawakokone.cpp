/*
CPUとの対戦ゲームとして3つの数字を当てましょう。
０～9までのランダムな数字を生成しましょう。
お互いに交互に入力し、場所と数字があっていたら「Hit」、外れていたら「Miss」を表示しましょう。3つ当たったら、勝利となります。
※初期に手札に数字は重複しません。プレイヤーとCPUは重複しても大丈夫です。
*/

#include<iostream>
#include<cstdlib>
#include<ctime>
#include"20260707_Header2_degawakokone.h"
using namespace std;

int main(void)
{
	cout << "数字当てゲーム\n0~9の数字が三つ並んでいます。場所と数字をすべて当てたほうの勝利です。"
		<< "\n====================GAME START====================" << endl;

	Game();

	return 0;
}