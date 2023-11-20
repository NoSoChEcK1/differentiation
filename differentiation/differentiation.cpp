#include <iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>succession;
    vector<int>d1;
    vector<int>d2;
    int s = 0;
    cout << "enter the sequence, please" << endl;
    while (true) {
        cin >> s;
        if (s == 0)
            break;
        succession.push_back(s);// заполняем вектор последовательностью 
    }
    s = succession.size() - 1;
    int it = 0;
    for (int i = 1; it != succession.size(); ++i) {
        if (it + 1 != succession.size())//отнимаем что бы получить первую дифференцию
            d1.push_back(succession[i] - succession[it]);//получаем первую дифференцию
        else break;
        ++it;
    }
    it = 0;
    for (int i = 1; i <= d1.size(); ++i) {
        if (it + 1 != d1.size())//отнимаем что бы получить вторую дифференцию
            d2.push_back(d1[i] - d1[it]);//получаем вторую дифференцию
        else break;
        ++it;
    }
    it = d1[0];
    for (auto i2 : d2) {
        it += i2;//сумуем вторую дифференцию
    }
    int sum = succession[s];
    it += d2[0];
    for (int i = 0; i < 3; ++i) {
        sum += it;// получаем последние 3 элементы последовательности 
        it += d2[i];
        cout << sum<< endl;//выводим 
    }
    
}