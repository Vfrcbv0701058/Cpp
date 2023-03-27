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
endl                 // означает конец линии, удобно при выводе результата
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
name.length()           // получает длинну строки  пременной name

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

// Урок 11

// стурктуры создаються отдельно, вне main 
struct more{
    int weight;
};

struct weh { // создание структуры weh это название структуры
    int wheels; // вводим сюда переменные которые будут как бы описывать то с чем мы работаем
    float speed;
    more.mor; // подлючаем сюда вторую структуру с названием mor
};
// что бы испльзовать структуру уже в мэйне надо написать 
weh gnu; // применяем структуру к этому обьекту (gnu(назвать его мы можем как хотим))
// что бы заполнить структуру для этого обьекта делаем следующее 
gnu.wheels; // заполняем переменную wheels обьявленую в структуре
gnu.speed; // заполняем переменную speed  обьявленную в структуре
// так же есть альтернатива что бы писать быстрее 
weh gnu = {4,456}; // заполняем согласно порядку в нашей структуре,т.е. в структуре первое wheel и значит первое что будет в скобках будет назначаено whhel

cout << weh.speed; // выведет скорость этого элемента 
gnu.more.mor = 133 //обращаемся к переменной котоая лежит в структуре другой структуры
// название обьекта к которому применена структура . название переменной основной структуры . потом той которую мы подключили

// Урок 12 

Enum - это перечисление, позволяющее присвоить имена набору целочисленных значений.
// Объявление перечисления в C++ выглядит следующим образом:
enum имя_перечисления {
    значение_1,
    значение_2,
    ...
    значение_N;
};
switch (floor){ //если пременная floor
    case значение_1: // будет равна значчению 1 которое мы назначили в enum
        ...         // выполниться код 
        break;
}

// Урок 13

#include <fstream> // позволяет работать с файлами
ofstream  название_обьекта; // для записи в файл 
ifstream название_обьекта; //для чтения из файлов 

file.open("название_файла"); // открывает файл, если такого нет то он будет создан
file << ""; // запишет в файл какойто текст 
file.close(); // после работы с файлом следует его закрыть 

для оптимизации кода так же можно написать код который выше следующим образом:
ofstream название_обьекта ("название_файла");
// тут уже раюотаем с файлом который открыли
char text[50];
название_обьекта.getline(text, 50); // получаем строку на 50 символов из какого то файла и записываем ее в переменную text

есть много вариантов работать с файлами и их можно найти в интернете 
вот пример одного и как использовать 
ofstream file ("text.txt", ios_base::app);
    file << "Work with files in C++";
    file.close();

ios_base::app // добавляет чтото в конец файла
в этом коде мы дописываем в конец файла еще раз эту надпись 

// Урок 14

void навание_функции(параментры которые функция получит при начале, иными словами то что мы уже хотим передать функции){
    код функции;
}
// если функция находиться под мейном то ее заголовк надо обьявить в самом начале тоесть ее тип(void,float) так же название и параметры

// Урок 15

перегрузка функции это когда мы создали функцию, а потом создаем функцию с таким же названием и типом,
но назначаем ей другой код и параметры которые она принимает. И по количеству параметров компилятор понимает
где какая функция

// Урок 16

Локальная переменная это та которая находиться внутри какойто функции 
глобальная переменная прописывается вне функции и ее будут вдеть все функции

если есть локальная и глобальная переменные с одинаковым названием, что бы получиьт доступ к глобально й надо поставить
двоеточее (::str - получем доступ к глобальной переменной)

Математичекие операции
pow(то что мы хотим вознести, степень) // возводит в степень
abs(число) // модуль числа
sin (число в радианах) // синус числа
cos (числов в радианах) // косинус числа
sqrt (не отрицательное число) // корень числа
ceil(число с точкой) // округляет число в большую сторону
floor(число с точкой) // округляет число в меньшую сторону
exp (число) // выводич число по экспоненте 
log (число) // логорифм от числа

ООП // Урок 17
// класс описываем вне каких то функций
// переменные в классах называються полями

class название_класса{     

};

// обращение к классу происходит следующим образом
название_класса название_обьекта;  // создали обьект который будет относиться к определенному классу

название_обьекта.функция\переменная которые пренадлежат классу = и что делать с переменной; 

Модификаторы доступа - благодаря ним мы можем установить модификатор доступности  
public: // все что мы запишем сюда будет доступно отовсюду, с любой функции, класса и тд и тп
private: // все чтомы запишем сюда будет доступно только и только из класса где мы обьявили эти поля
protected: // все чтомы запишем сюда будет доступно в классе основном и в классах наследниках 
// все поля принято записывать в private (по правилам инкапсуляции!!!)
 








 



// Прочая полезная фигня
to_string(х) // форматирует переменную х из стринга в строку
stoi(x); // форматирует пременную ч из стринга в число  
если не хочешь что бы после вызода из функции переменная уничтожилась выдели под нее динамическую память с помощью new
s.substr(1, s.size() -2); // 

return a % 2==0 ? 8*a : 9*a; 
условие ? значение_если_условие_истинно : значение_если_условие_ложно;
если кратно двум то будет выполнено умножение на 8 если не будет равно то тогла усножаем на 9
так же есть дубильная штука
return a % 2 ? 9*a : 8*a;
работает наоборот если а кратно двум то это считаеться как ложное выражение и потому надо все менять местами

// Массивы разных типов данных (int, string, char)
   int intArray[] = { 1, 2, 3, 4, 5 };
   string strArray[] = { "hello", "world", "!" };
   char charArray[] = { 'a', 'b', 'c' };