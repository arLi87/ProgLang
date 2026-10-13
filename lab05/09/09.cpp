#include <iostream>

// Используем 128-битный целочисленный тип для предотвращения переполнения
// при перекрестном умножении (произведение знаменателей и числителей достигает ~10^36)
typedef __int128_t int128;

int main() {
    // Оптимизация ввода-вывода для обработки до 10000 запросов
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    if (!(std::cin >> t)) return 0;

    for (int i = 0; i < t; ++i) {
        long long p1, q1, p2, q2, p3, q3, p4, q4;
        std::cin >> p1 >> q1 >> p2 >> q2 >> p3 >> q3 >> p4 >> q4;

        // Сумма первой пары: p1/q1 + p2/q2 = (p1*q2 + p2*q1) / (q1*q2)
        int128 num1 = (int128)p1 * q2 + (int128)p2 * q1;
        int128 den1 = (int128)q1 * q2;

        // Сумма второй пары: p3/q3 + p4/q4 = (p3*q4 + p4*q3) / (q3*q4)
        int128 num2 = (int128)p3 * q4 + (int128)p4 * q3;
        int128 den2 = (int128)q3 * q4;

        // Приведение знаков знаменателей к положительным
        if (den1 < 0) { num1 = -num1; den1 = -den1; }
        if (den2 < 0) { num2 = -num2; den2 = -den2; }

        // Сравнение num1 / den1 и num2 / den2 через перекрестное умножение
        int128 left = num1 * den2;
        int128 right = num2 * den1;

        int res;
        if (left > right) {
            res = 1;
        } else if (left < right) {
            res = -1;
        } else {
            res = 0;
        }

        if (i > 0) std::cout << " ";
        std::cout << res;
    }
    std::cout << "\n";

    return 0;
}