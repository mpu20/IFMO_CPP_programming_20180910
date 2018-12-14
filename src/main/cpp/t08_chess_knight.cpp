//Шахматный конь ходит буквой “Г” — на две клетки по вертикали в любом направлении и на одну клетку по горизонтали, или наоборот. Даны две различные клетки шахматной доски, определите, может ли конь попасть с первой клетки на вторую одним ходом.
//
//Формат входных данных
//        Программа получает на вход четыре числа от 1 до 8 каждое, задающие номер столбца и номер строки сначала для первой клетки, потом для второй клетки.
//Формат выходных данных
//        Программа должна вывести YES, если из первой клетки ходом коня можно попасть во вторую или NO в противном случае.
//Sample Input 1:
//
//1
//1
//1
//4
//Sample Output 1:
//
//NO
//        Sample Input 2:
//
//1
//1
//8
//8
//Sample Output 2:
//
//NO

#include "t08_chess_knight.h"
#include <iostream>

using namespace std;

int t08_chess_knight() {
    int a1, b1, a2, b2;
    cin >> a1 >> b1 >> a2 >> b2;
    if (a2 > a1) {
        int tmp = a1;
        a1 = a2;
        a2 = tmp;
    }
    if (b2 > b1) {
        int tmp = b1;
        b1 = b2;
        b2 = tmp;
    }
    if ((a1-a2) == 3)
        if ((b1-b2) == 1) cout << "YES";
        else cout << "NO";
    else
    if ((b1-b2) == 3)
        if ((a1-a2) == 1) cout << "YES";
        else cout << "NO";
    else cout << "NO";
};