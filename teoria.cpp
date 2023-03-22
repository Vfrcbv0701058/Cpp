// что бы использовать кириллицу при выводе
#include <clocale>
setlocale(LC_CTYPE, "rus"); // ставим привыше всего остального в main'e  
// что бы работать с кириллицей(ТОЛЬКО НА ВИНДОВС)
#include<Windows.h>
SetConsolePC(1251);
SetConsoleOutputCP(1251);

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
// когда хоти разыменовать(тоесть перейти по адресу и прийти к самой переменной) поинтер тогда должны ставить звездочку 
// если мы создаем поинтер на поинтер то надо ставить уже две звездочки (**ptr_ptrx=&ptrx)
int &ref = x; // ref являеться ссылкой на переменную х
Есть разница между ПОИНТЕРОМ и ССЫЛКОЙ
Поинтер нужен для того что бы както изменять переменную
Ссылка для того что бы просто ссылаться на нее(например когда хотим вывести результат)

// Урок 9 

// команда new  выделяет динамическую память под что-то
int *ptrNum = new int(7); // Выделяем переменной ptrNum память с помощью new int(тут мы дали переменной значение)
// обязательно сначала писать звездочку а потом название переменной 
int *ptrNum = new int;
*ptrNum = 7;
// это равносильно тому что выше , мы можем либо сразу назначить чилос переменной либо потом но надо это делать с помощью звездочки(!!!)
delete ptrNum; // Удаляет выделеную память для переменной ptrNum что бы она не грузила компьютер

// Массив
float *ptrarr = new float [10]; // Выделяем динамическую память для массива, там где 10 это кол-тво элементов массива
// Заполнения массива рандомными числами
for (int i=0; i<10; i++){
    ptrarr[i]= rand()%80+1; // для работы с массивом с выделеной динамической памятью не надо ставить звездочку в начале(!!!)
}
//овобождаем память от динамического массива
delete [] ptrarr;

// Урок 10

символы и строки это две разные вещи
символ может быть один  
char sym = 'a';     // это символ 
или же можем получить массив символов 
char list[] = {'a','s','f','g'}; // это массив символов

а строкой в С++ является последовательность из одного или более символов, заключенная в двойные кавычки
char string[] = "Hello world";
если мы указываем размер строки то надо ставить на один больше с расчетом на \0 которое есть в конце каждой строки
или 
string str = "Это строка в С++";  // для этогонадо подключить заголовочный файл  #include <string>
со строками можно работать так де как и с массивами, перебирать их, выбирать какуюто букву и тд и тп

считывать строки которые пользователь вводит лучше командой .getline
char string1[500];
cin.getline(string1, 500);
или
getline(cin, string1);

ВСЕ ФУНКЦИИ СО СТРОКАМИ САЙТ: cppstudio.com/post/437/

// Прочая полезная фигня
to_string(х) // форматирует переменную х из стринга в строку
stoi(x); // форматирует пременную ч из стринга в число
если не хочешь что бы после вызода из функции переменная уничтожилась выдели под нее динамическую память с помощью new

return a % 2==0 ? 8*a : 9*a; 
условие ? значение_если_условие_истинно : значение_если_условие_ложно;
если кратно двум то будет выполнено умножение на 8 если не будет равно то тогла усножаем на 9
так же есть дубильная штука
return a % 2 ? 9*a : 8*a;
работает наоборот если а кратно двум то это считаеться как ложное выражение и потому надо все менять местами
