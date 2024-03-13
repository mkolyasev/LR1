#include <lib/lr1.h>
#include <gtest/gtest.h>
#include <vector>
#include <utility>

// Подробнее https://google.github.io/googletest/reference/testing.html

// Тестовый класс
class MinusOneAndCube : public ::testing::Test {
protected:
    // Здесь вы можете добавить дополнительные настройки для тестов
    // в функции SetUp()
    void SetUp() override {
        // Например, инициализация данных
       
    }

    // Здесь вы можете освободить ресурсы, если это необходимо
    // в функции TearDown()
    void TearDown() override {
        // Например, очистка данных
        arr.clear();
    }

    // Объявляем переменные, которые будут использоваться в тестах
    std::vector<double> arr = { 10.00, -14.00, 15.00, 20.00, -21.00, 25.00, 3.0 };
    std::vector<double> result;
};

// Пример теста1
TEST_F(MinusOneAndCube, CTest1) {
// Вызываем функцию countAndSum с тестовыми данными
result = minusOneAndCube(arr);

// Проверяем ожидаемые результаты
    EXPECT_DOUBLE_EQ(result[0], 10);
}

// Пример теста111111
TEST_F(MinusOneAndCube, CTest11111) {
// Вызываем функцию countAndSum с тестовыми данными
  result =  minusOneAndCube(arr);

// Проверяем ожидаемые результаты
    EXPECT_DOUBLE_EQ(result[1], -2744);
}

// Пример теста 2
TEST_F(MinusOneAndCube, CTest2) {
// Вызываем функцию countAndSum с тестовыми данными
    result = minusOneAndCube(arr);

// Проверяем ожидаемые результаты
    EXPECT_DOUBLE_EQ(result[4], -9261);
}

// Пример теста3
TEST(MinusOneAndCube1, CTest3) {
    std::vector<double> arr = { -2.0, 0.5, -3.0, 1.0 };
    std::vector<double> result = minusOneAndCube(arr);
    EXPECT_DOUBLE_EQ(result[0], -8.0);
    EXPECT_DOUBLE_EQ(result[2], -27.0);
    EXPECT_DOUBLE_EQ(result[1], 0.5);
    EXPECT_DOUBLE_EQ(result[3], 1.0);

}
