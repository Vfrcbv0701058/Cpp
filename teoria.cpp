// Урок 1

#include <iostream> // библиотека для cin cout

using namespace std; // это надо писать в начале что бы не писать каждый раз std:: ...
cout << "";          // функция что бы вывести текст в командную строку
\n;                  // новая строка

cin >> num; // получаем число в переменную num

// Урок 2

// типы переменных такие же как и в С
float = 3.14;        // не надо ставить f после цифр
bool isAway = true; // вводим переменную isAway которая может быть только true или false
edl                 // означает конец линии, удобно при выводе результата
+                   // плюс
-                   // минус
*                   // умножить
/                   // поделить
%                   // деление с остачей, выведет только остачу например: 10 % 3 = 1
==                  // сравнивает равны ли друг другу переменные или чтото но главное СРАВНИВАЕТ РАВНО ЛИ...
!=                  // не равно
x *= 2              // умножаем переменную х в два раза
x -= 2              // отнимаем два
x += 2              // увеличиваем на два
x /= 2              // делим на два
х--                 // уменьшает на один
х++                 // увеличивает на один

// Урок 3

if (условие){       // если
    инструкция что делать если соблюдено условие
}

if (oprt == '/' || oprt == '\\') // если хочу использовать в качестве оператора обратный слеш \ то надо его ставить два раза как на примере!!!

else if (условие){           // иначе если
    инструкция
}

else{                            // иначе
    инструкция
}

// https://youtu.be/uv6UKqAG820?t=729 обьяснение к тому что ниже
&&         // обьединение условий
||         // или (в условиях)
?          // проверяет равно ли чтото true или false
:          // иначе

switch (x){
// если переменная х
    case '1' : код // равна 1 то будет выполнен этот код
    default : ()   // если никакой изз вариантов не будет выполнен то тогд будет выполнен код в дефолте
}

// Урок 4

rand()                  // генератор числ от 0 до 32000
rand() %80              // генератор чисел от 0 до 79
1+rand() % 80           // от 1 до 80

#include <string>       // для использования команды string
string x;               // пеменнная х котороая являеться строкой символов
getline(cin, x)         // получаем строку которую записываем в стринг переменной х
name.lenght()           // получает длинну строки  пременной name

// Урок 5

for (инициализация; состояние; увеличение / уменьшение){
    код
}

while (условие){
    код
}

do{
    код
} while (условие);

break;    // останавливает цикл и выходит с него
continue; // остаеться в цикле но пропускает код который ниже

// Урок 6

try
{ // начало блока в котором мы пытаемся выполнить код в который может вызвать ошибку
    код
    throw номер ошибки // вводим номер ошибки
}
catch (int i)
{ // начало блока в котором мы обрабатываем возможную ошибку вызваную оператором throw(в i мы переносим номер ошибки)
    cout << "Error #" << i << "описание ошибки(не обязательно)" << endl;
}

// Урок 7

// Массивы создаются так же само как и переменные
int arr[3] = {3, 7, 25}; // создали массив arr в котором 3 свободные ячейки и  заполняем их числами 3,7,25
// если мы сразу прописали элементы массива то размер массива (тоесть [3]) можно не писать
// счет начинаеться с 0
int arr_2[][] = {{23, 4}, // Двухмерный массив(Матрица)
                 {7, 6},
                 {9, 3}};

// Урок 8

const int x = число; // создает констанку которую потом нелзя поменять
// указатель это переменная которая хранит в себе аодресс на другую переменную
int *ptrx = &x; // передает адресс переменной х в поинтер х, тоесть ptrx носит в себе адрес на переменную х
// когда работаем через поинтер то надо ставить * (всегда!)(Например: *ptrx = 5)
// если мы создаем поинтер на поинтер то надо ставить уже две звездочки (**ptr_ptrx=&ptrx)
int &ref = x; // ref являеться ссылкой на переменную х
Есть разница между ПОИНТЕРОМ и ССЫЛКОЙ
Поинтер нужен для того что бы както изменять переменную
Ссылка для того что бы просто ссылаться на нее(например когда хотим вывести результат)