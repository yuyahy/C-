//Cstruct2.cpp
#include <iostream>

class CInt
{
public:
    int m_num;

    CInt();
    CInt(int num);
    void Disp();
};

//コンストラクタ
//オーバーロード
CInt::CInt()       { m_num = 0; }
CInt::CInt(int num){ m_num = num; }

//メンバ変数の表示
void CInt::Disp(){ std::cout << m_num << std::endl ;}

int main()
{
    CInt a, b(100), c(40);

    a.Disp();
    b.Disp();
    c.Disp();

    return 0;
}
