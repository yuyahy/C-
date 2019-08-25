//omikuji.cpp
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Omikuji
{
  int un; //ラッキーナンバー
public:
  Omikuji(); //コンストラクタ
  void hiku();
};

//コンストラクタ,ラッキーナンバーをユーザに代入してもらいます
Omikuji::Omikuji()
{
  srand( (unsigned)time(NULL) );
  cout<<"自分のラッキーナンバー(1〰５)を入力してください。"<<endl;
  cin>>un; //自分のラッキーナンバーを代入
}

//おみくじを引く
void Omikuji::hiku()
{
  int x;
  x = rand()%5 + 1; //1〰5の乱数を発生させ,xに代入,これを引いたおみくじの番号
  cout<<"あなたの運勢は";
  if(x==un){                       //xとunが等しければ大吉
    cout<<"大吉ということです。"<<endl;
  }
  else{                           //xとun が等しければ普通
    cout<<"並みということです。"<<endl;
  }
}

int main()
{
  Omikuji today; ///今日のおみくじ
  today.hiku();
}
