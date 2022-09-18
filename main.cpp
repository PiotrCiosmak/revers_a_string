#include <iostream>

using namespace std;

int main()
{
    string sentence{"123456789"};
    char tmp;
    for (int i = 0, j = sentence.length()-1; i < j; ++i, --j)
    {
        tmp = sentence[i];
        sentence[i] = sentence[j];
        sentence[j] = tmp;
    }
    cout<<sentence;
}