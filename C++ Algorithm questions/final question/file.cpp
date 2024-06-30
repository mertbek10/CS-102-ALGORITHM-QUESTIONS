//final sivan sorusu
//input.txt isimli dosyada bulunan buyuk harfleri kucuk harfe donusturerek yeni bir dosyaya kaydedin
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    string metin;
    string line;
    int i;
    ifstream file("input.txt");

    // Dosyanın içeriğini oku
    while (!file.eof())
    {
        getline(file, line);
    }

    metin = line;

    // Büyük harfleri küçük harfe dönüştür
    for (i = 0; i < metin.length() - 1; i++)
    {
        if (metin[i] != ' ' && metin[i] >= 'A' && metin[i] <= 'Z')
        {
            char x = metin[i] - 'A' + 'a';
            metin[i] = x;
        }
    }

    // Yeni dosyaya yaz
    ofstream file2("new.txt");

    file2 << metin;

    return 0;
}
