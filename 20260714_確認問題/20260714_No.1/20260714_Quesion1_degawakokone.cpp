#include <iostream>
#include <cstdlib>
#include <ctime>
#include "20260714_QuesionHeader_name.h"
using namespace std;


//====================================
// メイン
//====================================
int main()
{
    //変数宣言
    int player;//プレイヤーの入力
    int cpu;//CPUの入力
    int probability;//確率
    
    //それぞれの判定のカウント
    int strike = 0;
    int ball = 0;
    int out = 0;
    int hit = 0;

    //乱数の初期化
    srand((unsigned int)time(nullptr));

    //ルール説明
    cout << "野球盤ゲームスタートです" << endl;
    cout << "プレイヤーはピッチャーとなり、この回を守り切ってください" << endl;

    //ゲーム開始
    do
    {
        //球の説明
        cout << endl;
        cout << "投げる球を選んでください" << endl;
        cout << "0:ストレート" << endl;
        cout << "1:カーブ" << endl;
        cout << "2:スライダー" << endl;
        cout << "3:シンカー" << endl;

        //入力チェック
        player = InputCheck(PITCHING_MIN,PITCHING_MAX);
        //投げた球の表示
        PitchingType(player);

        //バットを振る
        cpu = rand() % PROBABILITY;

        //確率
        probability = rand() % PROBABILITY;

        //球がバットに当たらなかったら
        if (player != cpu)
        {
            if (probability == 0)//25％
            {
                cout << "ボール！" << endl;
                ball++;
            }
            else//75％
            {
                cout << "ストライク！！" << endl;
                strike++;
            }
        }
        else//当たったら
        {
            //ストライクとボールの数を０にする
            strike = 0;
            ball = 0;

            if (probability == 1)//25％
            {
                cout << "OUT!!" << endl;
                out++;
            }
            else//75%
            {
                cout << "HIT!!" << endl;
                hit++;
            }
        }

        //３ストライクか４ボールとったとき
        if (strike >= STRIKE_COUNT || ball >= BALL_COUNT)
        {
            if (strike >= STRIKE_COUNT)
            {
                cout << "三振アウト！" << endl;
                out++;
            }
            else
            {
                cout << "フォアボール！" << endl;
                hit++;
            }

            strike = 0;
            ball = 0;
        }

        //現時点の結果表示
        cout << endl;
        cout << "B : " << ball << endl;
        cout << "S : " << strike << endl;
        cout << "O : " << out << endl;
        cout << "Runner : " << hit << endl;

    } while (out < OUT_COUNT && hit < HIT_COUNT);

    //勝敗表示
    Result(out);

    return 0;
}