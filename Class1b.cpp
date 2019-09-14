//Class1b.cpp
#include <iostream>

#define ELEM(array) (sizeof (array) / sizeof *(array))

class SStudent
{
public:
  char szName[16];
  int nJapanese;
  int nMath;
  int nEnglish;

  void Disp();
};

void SStudent::Disp()
{
  cout << "name : " << szName <<endl
       << "Japanese : " << nJapanese << " score, "
       << "Math : " << nMath << " score, "
       << "English : " << nEnglish << " score" << endl;

}

int main()
{
    SStudent students[] = {
    {"akai", 73,98,86, },
    {"daisuke", 64,45,40, },
    {"akai", 76,78,69, },
  };
  int i;
  for(i=0; i<ELEM(students); i++)
      students[i].Disp()
  return 0;
}
