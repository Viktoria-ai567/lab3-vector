#include <iostream>
#include <fstream>
#include <vector>
int main() {
    // Создаем три вектора: vec1, vec2 и sum_vec
    std::vector<int> vec1, vec2, sum_vec, sub_vec;
    int n;

 // Открываем первый файл
    std::ifstream file1("file1.txt"); //чтение данных из файла
    if (file1.is_open()) {
        // Считываем количество элементов
        file1 >> n;
        // Считываем и добавляем элементы в вектор vec1
        for (int i = 0; i < n; i++) {
            int x;
            file1 >> x;
            vec1.push_back(x); //добавление элементов в вектор
        }

        // Закрываем файл
        file1.close();
    } else {
        std::cout << "The file could not be opened file1.txt" << std::endl;
        return 1;
    }

    // Чтение данных из второго файла
    std::ifstream file2("file2.txt"); //чтение данных из файла
    if (file2.is_open()) {
        // Считываем количество элементов во втором файле
        file2 >> n;
        // Считываем элементы и добавляем их в вектор vec2
        for (int i = 0; i < n; i++) {
            int x;
            file2 >> x;
            vec2.push_back(x); //добавление элементов в вектор
        }
        file2.close();
    } else {
        std::cout << "The file could not be opened file2.txt" << std::endl;
        return 1;
    }
    // Вычисление суммы векторов
    if (vec1.size() == vec2.size()) { //если размеры векторов равны
        // Складываем соответствующие элементы vec1 и vec2 и добавляем результат в sum_vec
        for (int i = 0; i < vec1.size(); i++) {
            sum_vec.push_back(vec1[i] + vec2[i]); //элементы вектора один плюс элементы вектора два
        }
        // Вывод результата
        std::cout << "Sum of the vectors:";
        for (int x : sum_vec) {
            std::cout << x << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "Vectors have different lengths, addition is impossible" << std::endl;
    }
     // Вычисление разности векторов
    if (vec1.size() == vec2.size()) { //если размеры векторов равны
        // Вычитаем соответствующие элементы vec1 и vec2 и добавляем результат в sub_vec
        for (int i = 0; i < vec1.size(); i++) {
            sub_vec.push_back(vec1[i] - vec2[i]); //элементы вектора один минус элементы вектора два
        }
        // Вывод результата
        std::cout << "Sub of the vectors:";
        for (int x : sub_vec) {
            std::cout << x << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "Vectors have different lengths, subtraction is impossible" << std::endl;
    }
    return 0;
}