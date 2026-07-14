#include<iostream>
#include<cstdlib>
#include<ctime>
#include"20260714_QuesionHeader_name.h"
using namespace std;


void PitchingType(int pitching)
{
    switch (pitching)
    {
    case Straight:
        cout << "ストレート" << endl;
        break;

    case Curve:
        cout << "カーブ" << endl;
        break;

    case Slider:
        cout << "スライダー" << endl;
        break;

    case Sinker:
        cout << "シンカー" << endl;
        break;
    }
}

void Result(int out)
{
    if (out >= OUT_COUNT)//3アウトなら
    {
        cout << "PLAYER WINNER!!" << endl;
    }
    else
    {
        cout << "CPU WINNER!!" << endl;
    }
}

int InputCheck(int min, int max)
{
    int player;

    while (true)
    {
        //入力
        cin >> player;

        //入力チェック（0,1,2,3以外を入力したとき）
        if (player < PITCHING_MIN || player > PITCHING_MAX)
        {
            cout << "入力に誤りがあります。再入力してください。" << endl;
        }
        else
        {
            break;
        }
    }

    return player;
}