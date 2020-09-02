# toy_bd
Application for working with a toy store database stored in a txt file
Приложение для работы с базой данных магазина игрушек, хранящихся в файле формата txt. Основная программа реализована в виде меню. Представленные пункты:
1. Oткрыть файл для работы с данными
2. Вывести исходные данные на экран
3. Вывести исходные данные в файл
4. Добавить данные
5. Удалить данные
6. Отобрать данные в возрастном диапазоне, отсортировав по убыванию стоимости
7. Вывести отобранные данные на экран
8. Вывести отобранные данные в файл
9. Сортировка исходной таблицы по стоимости в порядке возрастания
10. Сортировка выходной таблицы по названию игрушек в алфавитном порядке, а при совпадении названия игрушек - по нижней возрастной границе в порядке убывания
11. Сортировка выходной таблицы по названию игрушек в алфавитном порядке
12. Формирование перечня
13. Вывести перечень на экран
14. Вывести перечень в файл
15. Сортировка перечня по нижней возрастной границе в порядке возрастания, а при совпадении - по верхней границе в порядке убывания
16. Сортировка перечня по количеству в порядке возрастания
17. Проверка конструктора копирования
18. Проверка конструктора присваивания
19. Закончить работу

Данные хранятся в приватной части класса, пункты реализованы методами. Реализованы проверки действий "от дурака". Приложены блок-схемы и примеры со скриншотами в документах формата .docx.

Структура файла базы данных:
<Нижняя возрастная граница игрушки, целочисленное значение> пробел <Верхняя возрастная граница игрушки, целочисленное значение> пробел <Стоимость, целочисленное значение> пробел <Название игрушки, допускаются пробелы, до 35 символов> конец строки
Допускается использование файла с любым количеством строк.
