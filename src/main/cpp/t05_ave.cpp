//Определите среднее значение всех элементов последовательности, завершающейся числом 0.
//
//Формат входных данных
//
//        Вводится последовательность целых чисел, оканчивающаяся числом 0 (само число 0 в последовательность не входит, а служит как признак ее окончания).
//Формат выходных данных
//        Выведите ответ на задачу. Необходимую точность вычислите по тестам.
//Sample Input:
//
//1
//7
//9
//0
//Sample Output:
//
//5.66666666667

#include "t05_ave.h"
#include <iostream>
#include <iomanip>

using namespace std;

int t05_ave() {
    double aver=0,ai;
    int n=0;
    while (ai!=0) {
        cin >> ai;
        aver += ai;
        n++;
    }
    cout << fixed << setprecision(11) << aver/(double)(n-1);
};