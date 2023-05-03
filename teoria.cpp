// что бы использовать кириллицу при выводе
#include <clocale>
setlocale(LC_CTYPE, "rus"); // ставим привыше всего остального в main'e  
// что бы работать с кириллицей(ТОЛЬКО НА ВИНДОВС)
#include<Windows.h>
SetConsolePC(1251);
SetConsoleOutputCP(1251);

// Урок 

#include <iostream> // библиотека для cin cout

using namespace std; // это надо писать в начале что бы не писать каждый раз std:: ...
cout << "";          // функция что бы вывести текст в командную строку
\n;                  // новая строка

cin >> num; // получаем число в переменную num

// Действи я с переменными

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
\n // переход на новую строку  
\t // переход к следующей позиции табуляции
\b // удаление последнего выведеного символа 
\\ // вывести обратный слеш (\) 
const int x = число; // создает констанку которую потом нелзя поменять

// Условия

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

false = 0;
true = 1; 
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

// Рандом

rand()                  // генератор числ от 0 до 32000
rand() %80              // генератор чисел от 0 до 79
1+rand() % 80           // от 1 до 80

#include <string>       // для использования команды string
string x;               // пеменнная х котороая являеться строкой символов
getline(cin, x)         // получаем строку которую записываем в стринг переменной х
name.length()           // получает длинну строки  пременной name

// Циклы

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

// Перехват ошибки

try
{ // начало блока в котором мы пытаемся выполнить код в который может вызвать ошибку
    код
    throw номер ошибки // вводим номер ошибки
}
catch (int i)
{ // начало блока в котором мы обрабатываем возможную ошибку вызваную оператором throw(в i мы переносим номер ошибки)
    cout << "Error #" << i << "описание ошибки(не обязательно)" << endl;
}

// Массив и размеры

// название массива это указатель на его первый элемент
// Массивы создаются так же само как и переменные
int arr[3] = {3, 7, 25}; // создали массив arr в котором 3 свободные ячейки и  заполняем их числами 3,7,25
// если мы сразу прописали элементы массива то размер массива (тоесть [3]) можно не писать
// счет начинаеться с 0
int arr_2[][] = {{23, 4}, // Двухмерный массив(Матрица)
                 {7, 6},
                 {9, 3}}; 
что бы массив создаля без мусора внутри а с нулями то надо после обьявления массива поставить {} например:
int arr[2][4]{}; // все внутри двухмерного массива будет нулями а не мусором
int arr_1[]{}; // все внутри массива будет нулями а не мусором

sizeof(переменная) // команда которая возвращает размер переменной в байтах 
что бы получить размер массива надо поделить размер в байтах на его тип данных. Например: 
int arr[]={32,423,543,12,4,5};
sizeof(arr)/sizeof(int); // получили количество чисел в массиве arr если бы был не int a float то в формуле надо записать float
sizeof(arr)/sizeof(arr[0]) // то же само что и сверху но так не важно какой тип массива, формула будет работать с любой


// Поинтеры(Указатель)

// указатель это переменная которая хранит в себе адрес на другую переменную
int x = 6;
int *ptrx = &x; 
// передает адресс переменной х в поинтер х, тоесть ptrx носит в себе адрес на переменную х
// указатель должен быть такого же типа даннных как и переменная
cout << ptrx;
// тут получиться так что мы выведем адресс переменной х
cout << *ptrx;
// тут же му уже разыменуем указатель и получим значение(А НЕ АДРЕС) переменной х
*ptrx = 67;
// меняем значение переменной х
**ptr_ptrx = *&ptrx;
// когда мы создаем поинтер на поинтер то должны ставить две звездочки
int *pArr = название массива;
// осздаем указатель на массив
int (*pf)(int) = &myFunction; 
// указатель на функцию
int result = (*pf)(5); 
// вызов функции через указатель с передачей параметра 5

// Ссылки

int &nameRef = name;
// так выглядит создание ссылки на переменную

// Динамическая память

// https://www.youtube.com/watch?v=l75xG4930bc&t=322s
// команда new  выделяет динамическую память под что-то
int *ptrNum = new int(7); 
// Выделяем переменной ptrNum память с помощью new int(тут мы дали значение переменной)
// обязательно сначала писать звездочку а потом название переменной 
int *ptrNum = new int;
*ptrNum = 7;
// это равносильно тому что выше , мы можем либо сразу назначить чилос переменной либо потом но надо это делать с помощью звездочки(!!!)
delete ptrNum; // Удаляет выделеную память для переменной ptrNum что бы она не грузила компьютер

// Динамический массив

float *ptrarr = new float [10]; 
// Выделяем динамическую память для массива, там где 10 это кол-тво элементов массива
delete [] ptrarr;
//овобождаем память от динамического массива
for (int i=0; i<10; i++){
    ptrarr[i]= rand()%80+1; // для работы с массивом с выделеной динамической памятью не надо ставить звездочку в начале(!!!)
}
// Заполнения массива рандомными числами


// Двухмерный динамический массив   https://www.youtube.com/watch?v=UhiG8c7hmIA

int **arr = new int[rows];
// создали основной массив указателей на другие массивы
for (int i =0; i < rows; i++){
    arr[i] = new int [cols]; 
}
// выделяем динамическую память под вутрение массивы на которые булут указывать указатели основного массива

// Константные аргументы функции. Константный указатель. Константные параметры.

int name_fun(int const size, int * const arr)
// передаем в параметрах константу что бы в функцие его нельзя было поменять
int * const arr
// передаем как константу только адрес массива, но с массивом мы работать можем
const int * const arr
// передаем как константу адрес и сам массив, тоесть с элементами массива мы рабоать не сможем

// Строки

char symbol = '';
// хранит в себе какой-то символ и только один
strlen(string); 
// возвращает размер строки

// Преобразование типов

cout << (int)a << endl; 
// выводим число типа int в консоль
cout << (bool)a << endl; 
// выводим значение типа boolean
cout << (bool)(a>30) << endl;
// выведет 0(false) если а меньше 30 и выведет 1(true) если больше

// Указатели символьные строки и функции. Строки и указатели

char *string = "Hello!";
cout << string << endl;
// выведет Hello

// Конкатенация строк что это. Объединение строк.Тип данных string

#include<cstring>
// заголловочный файл для работы команд связанх с строками но он содержит в себе более старые функции для работы через С
// Конкатенация строк это обьединение двух строк
strcat(первая строка в которую все запишется , вторая строка которая будет принята как константа)
// Конкатенация двух строк в стиле яызка си, таким образом первая строка будет изменена и будет уже 1+2 строками
#include<string>
// более новый заголовочный файл для работы команд связаных с строками(который содержит в себе и то что было в языке С)
string str1 = "fsdfd";
// создали строку только более нового типа(в стиле С++)
str1 + str2
// Конкатенация строк

// Указатель на функцию в качестве параметра. Передача функции в качестве параметра

// https://www.youtube.com/watch?v=_6eG9Q40lFM&list=PLQOaTSbfxUtCrKs0nicOg2npJQYSPGO9r&index=79
// тип функции (*имя указателя)(спецификация пареметров)
// спецификация параметров - спиксок параметров функции
int main(){
    void (*fooPointer1)();
    // создали указатель на функцию с названием fooPointer1
    fooPointer1 = fun1;
    // передали указателю fooPointer1 фукнцию fun1
    fooPointer1();
    // вызываем функцию fun1 через указатель fooPointer1
}
int main(){
    int (*funPoint)(int a);
    // создаем указательна функцию который принимает один параметр и функция с возвращаемым типом 
    funPoint = fun4;
    // назначаем указателю функцию
    cout << funPoint(43) << endl;
    // передаем указателю параметр котрый передает его функции и выводим то что вернет та функция
}

// Макрос. Условная компиляция

#define FOO(x,y) ((x)*(y))
// при вызове FOO(5,6) мы получим результат умножения 5 на 6 тоетсь 30

#ifdef
// директива используется для проверки, определен ли макрос
#endif
// конец проверки
#ifndef
// директива используется для проверки, не определен ли макрос
#else
// директива используется вместе с #ifdef или #ifndef для указания альтернативного кода, который будет использован, если макрос не определен
#if
// директива используется для проверки условия во время компиляции

// Условный тернарный оператор что это. Как работает. Как использовать

условие ? выражение1 : выражение2

int max = (a > b) ? a : b;
// Здесь, если a больше, чем b, то значение max будет равно a, в противном случае - b

// Структура

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

// Enum и switch

Enum - это перечисление, позволяющее присвоить имена набору целочисленных значений.
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

// Работа с файлами

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

// Функции

возвращаемое_значание_функции навание_функции(параментры которые функция получит при начале, иными словами то что мы уже хотим передать функции){
    код функции;
}
// если функция находиться под мейном то ее заголовк надо обьявить в самом начале тоесть ее тип(void,float) так же название и параметры
параметр по умолчанию это когд амы в новой функции в ее параметры указываем чтото в ее переменные т.е.
int fun(int a = 5)
это будет параметр а по умолчанию будет равен 5 и если мы при вызове этой функции ничего не передадим в параметры то будет использовано значение 5

inline int fun(){}
// inline это - встраиваемая функция которая используеться для того что бы программа не искала нашу функцию по всей памяти(в основном подходит для маленьких функций)
// https://www.youtube.com/watch?v=onKnrNJZRbs

// Перегрузка функции

перегрузка функции это когда мы создали функцию, а потом создаем функцию с таким же названием и типом,
но назначаем ей другой код и параметры которые она принимает. И по количеству параметров компилятор понимает
где какая функция
или же она будет ориентироваться по типу переменных в параметрах

// Шаблонны функции

// Шаблонная функция в C++ - это функция, которая может принимать аргументы различных типов, определенных пользователем, а не только один тип данных.
template <typename T>
T fun(T a, T b){
    return a+b;
}
// template <typename T> - создает шаблон функции с видом переменных T (так же вместо typename можно использовать class между ними нет разницы но class лучше использовать с классами)
// T fun() - Т означает что тип возвращаемых данных будет такой же как и эта переменная (строка,символ, число целое или не целое число)
// fun(T a, T b) - на месте обычного int и тд мы пишем то что указали в typename и он сам определит какой это тип данных а после Т пишем название переменной
// что бы использовать два разных типа данных нао добавить еще один typename 
template <typename T1, typename T2>
T1 fun(T1 a, T2 b){
    return a+b;
}
// данный код будет принимать два разных типа данных и будет возвращать тот тип данных которым являеться Т1(т.е. если Т1 будет чилом то функция вернет число, если строкой то строку )

// Cтек

// Стек - это облать памяти в которой выполняеться наша программа
// Стек (stack) в C++ является одним из типов контейнеров, предоставляемых стандартной библиотекой языка. 
// Стек - это коллекция объектов, которая работает по принципу "последним вошел, первым вышел" (LIFO).
// То есть, элемент, добавленный последним, будет удален первым. 

// Рекурсия

// Рекурсия это вызов функции самой себя
// https://www.youtube.com/watch?v=_WGNSVDb0t8&t=15s (все про рекурсию)

// Локальная и глобальная переменные

Локальная переменная это та которая находиться внутри какойто функции 
глобальная переменная прописывается вне функции и ее будут вдеть все функции

если есть локальная и глобальная переменные с одинаковым названием, что бы получить доступ к глобальной надо поставить
двоеточие (::str - получем доступ к глобальной переменной)

//Математичекие операции

# include <cmath>

pow(то что мы хотим вознести, степень) // возводит в степень
abs(число) // модуль числа
sin (число в радианах) // синус числа
cos (числов в радианах) // косинус числа
sqrt (не отрицательное число) // корень числа
ceil(число с точкой) // округляет число в большую сторону
floor(число с точкой) // округляет число в меньшую сторону
exp (число) // выводит число по экспоненте 
log (число) // логорифм от числа

ООП 
// Что такое класс. Что такое объект класса. Экземпляр класса это. Класс ООП

class Human{
// тело класса
int age;
};
// создали классс названием Human
int main(){
    Human Maksym;
}
// создали обьект класса Human
Maksym.age = 18;
// Говорим что переменная age для обьекта Maksym = 18

// Методы класса. Что такое методы в программировании. Вызов метода класса

class Human{
    int x = 0;
    void Print(/* В параметр ничего не передаем потому что функция находиться в одном классе с переменными и видит их */){
        cout << x << endl;
    }
};

int main(){
    Human person;
    // Создали обьект с классом Human
    person.Print();
    // вызвали функцию что бы вывести чтото из класса Human назначеное для обьекта person
}

// Модификаторы доступа классов public private protected. Спецификаторы доступа
class Human{
public:
// следующие функции-члены и переменные доступны извне класса
private:
// доступ к следующим функциям-членам и переменным возможен только из других функций-членов того же класса
// в основном переменные кладут в этот доступ
protected:
// к следующим функциям-членам и переменным могут обращаться другие функции-члены того же класса, а также любые производные классы.
};

// Что такое геттеры и сеттеры для класса. Методы get и set. Инкапсуляция это

Геттеры и сеттеры - это методы класса, которые обеспечивают доступ к приватным полям объекта через публичный интерфейс класса.
Метод get возвращает значение приватного поля, а метод set устанавливает новое значение для приватного поля. 
Геттеры и сеттеры позволяют контролировать доступ к приватным полям и обеспечивают возможность проверки и валидации данных перед их установкой или получением.

int getAge() const {
    return age;
}
// Геттер
// Геттеры принято назвать так что бы в начале было слово Get

void setName(const string& newName) {
    name = newName;
}
// Сеттер
// Сеттеры принято назвать так что бы в начале было слово Set

// Конструктор класса

class some{
    public:
    some()// запись some{} является конструктором
    // конструктор пишеться в доступе public
    {
        // все что булет записано в конструктор(сюда), будет выполняться автоматически пир создании обьекта
    }
};

some(int a, int b){
}
// если мы задали параметры конструктора то при создании обьекта их надо указать
some a(34,56)
// указали параметры конструктору обьекта a класса some

// Перегрузка конструкторов класса. Что такое перегрузка. Как перегрузить конструктор

// https://www.youtube.com/watch?v=sLQLUed6izY&list=PLQOaTSbfxUtCrKs0nicOg2npJQYSPGO9r&index=93
// работает также само как и перегрузка функции, кол-ство перегрузок неограничено

// Деструктор что это. Зачем нужен деструктор класса в ООП

class MyClass{
    public:
    ~MyClass{}
    // создали деструктор 
};
// Деструктор в классе должен быть один и для него нет возможности перегрузки и для него нет перегрузки

// THIS

this -> 
// В C++ ключевое слово  this используется для обращения к объекту класса, в котором он был вызван
class Person {
private:
    int age;
public:
    void setAge(int age) {
        this->age = age;
    }
};
// В этом примере this указывает на текущий объект, а -> используется для доступа к переменной age (которая находиться в private)
// и установке ее значения (которое мы получили в функции setAge)

// Конструктор копирования. Что это. Пример. Когда вызывается Копирование объектов по умолчанию
// https://www.youtube.com/watch?v=3x9nd6Tm7Pc&list=PLQOaTSbfxUtCrKs0nicOg2npJQYSPGO9r&index=96

int main(){
    MyClass a(32);
    MyClass b(a);
}
// MyClass b(a) создается таким же как и MyClass a(32), полностью его копируя

class MyClass{
private:
    int size;
public:
    int *data;
    /// Создание и заполнение массива
    MyClass(int size){
        this -> size = size;
// Мы создаем новую вещь и хотим, чтобы она имела размер, поэтому мы устанавливаем размер новой вещи таким, каким мы ее задаем
        /// Заполняем новый массив
        this -> data = new int [size];
        for (int i = 0; i<size; i++)
            data[i] = i;
        cout << "Вызвался конструктор\t" << this << endl;
    }
    
    
    /// Конструктор копирования
    MyClass(const MyClass &other){
        cout << "Вызвался конструктор копирования\t" << this << endl;
        this -> size = other.size;
// Мы хотим, чтобы новая вещь имела тот же размер, что и копируемая вещь, поэтому мы устанавливаем ее размер таким же, как размер копируемой вещи
        this -> data = new int[other.size];
        for(int i = 0; i < other.size; i++)
            this -> data[i] = other.data[i];
    }
};
delete []this -> data;
// удалим данные которые в указателе this

MyClass A(10); 
// Создали обьект А
MyClass B(a); 
// вызвали конструктор копирования что бы обьект В при создании был такой же как и А
MyClass B = A;
// аналогичная запись, тут тоже ,если В нигде небыл обьявлен ранее, то вызовется конструктор копирования

// Перегрузка операторов пример. ООП. Перегрузка оператора присваивания
// https://www.youtube.com/watch?v=nMM98LVJn-U&list=PLQOaTSbfxUtCrKs0nicOg2npJQYSPGO9r&index=96

class MyClass {
public:
    MyClass& operator=(const MyClass& other) {
        // при выолнении a = b мы попадаем сюда и код который тут будет выполнен
        return *this;
    }
};

MyClass a;
MyClass b;
a = b; 

// Перегрузка оператора сложения

point operator +(const point & other){
    point temp;
    temp.x = this -> x + other.x;
    temp.y = this -> y + other.y;
    return temp;
}

// Перегрузка инкремента и декремента. Постфиксного и префиксного

// префиксный инкримент(++a)
point & operator ++(){
    this -> x += 1;
    this -> y++;
    return *this;
    }    
// постфиксный инкримент(a++)
point & operator ++(int value){
    this -> x++;
    this -> y++;
    return *this;
}

// Перегрузка оператора индексирования

int & operator[](int index){
return arr[index];
}










// Прочая полезная фигня

// ООП
MyClass(int size)
    this -> size = size;
// вместо this можно сделать следующим образом
MyClass(int size):size

// считывать строки которые пользователь вводит лучше командой .getline
char string1[500];
cin.getline(string1, 500);
или
getline(cin, string1);

ВСЕ ФУНКЦИИ СО СТРОКАМИ САЙТ: cppstudio.com/post/437/

// Объявление перечисления в C++ выглядит следующим образом:
to_string(х) // форматирует переменную х из стринга в строку
stoi(x); // форматирует пременную из стринга в число  
если не хочешь что бы после вызода из функции переменная уничтожилась выдели под нее динамическую память с помощью new
s.substr(1, s.size() -2); // 

// Массивы разных типов данных (int, string, char)
   int intArray[] = { 1, 2, 3, 4, 5 };
   string strArray[] = { "hello", "world", "!" };
   char charArray[] = { 'a', 'b', 'c' };
   int *intPtr = intArray;
// Время

# include <ctime>
time(NULL) // получаем значение в секундах от 1 января 1970 года(в основном используеться для того что бы получать разное рандомное значение)

// рандом

rand(); //рандомное значение которое не меняеться
srand(); // аздает начальную точку рандома, тоесть рандом не будет ниже указаного в скобках значения. ЕЕ НЕ НАДО ВЫЗЫВАТЬ КАЖДЫЙ РАЗ ПРИ ИСПОЛЬЗОВАНИЯ РАНДОМА, ДОСТАТОЧНО ОДИН РАЗ
rand()% число; // генерирует числа в в диапазоне от 0 до числа которое мы указали
rand()% первое число + второе число ; // генерирует числа в в диапазоне от второго числа до первого числа которое мы указали