// ConsoleApplication_34_targeter.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include "string"
#include "stdio.h"
#include "conio.h"
#include "Header_func.h"
#include "struct_file.h"

using namespace std;

#define in(word_value /*, res_word_value*/ ); cin >> word_value; //res_word_value = word_value;
#define out(word_value) cout << word_value << ' ';
#define cycle(i, x) for(int i = 0; i < x; i++)
#define nl cout << endl;

#define Number 117
#define size 3
#define quantity 5

//#undef quantity

int main() {

	setlocale(LC_ALL, "Russian");

	out(quantity);

    #define out(word_value) cout << word_value << ' '; // макросам всё равно на тип судя по всему. Док-во ниже.

	string symbol;
	int bin_num1 = 6, bin_num2 = 9, bin_num3 = 12, bin_res1, bin_res2, bin_res3, bin_res4 = 13, mask;
	double a = 3.21, b = 5.37, c, d = 0;

	bin_res1 = (bin_num1 & bin_num3 | 7) ^ 5; // Поразрядные операции. Работа с (битовым) двоичным представлением числа 0100(4) -> 111 -> 010

	bin_res2 = bin_res1 << 2; //побитовый сдвиг

	bool logic = ~(((a > b)&&b || a && d == !32.4) > 12 ); // Логические операции (отношения), присваемые переменной(её тип мб и int). 

	digit(bin_res2, &bin_res3);
	
	//Препроцессорные директивы условной компиляции
	
	
#ifndef Number == 112 
	int D_number = Number;
	out(D_number)    
#elif Number == 113
	out(Number)  // да тут тоже можно сделать через переменную
#elif !defined Number || !defined workspace  || defined volume 
	out("Тоже успехъ")
#elif defined Number && !defined volume 
	out("успехъ")  
#endif 
		nl

#ifdef Number
		out("успехъ ifdef") nl
#elif out("успехъ out")

#endif 


#ifndef size
		out("успехъ sizeifndef") nl
#elif (defined size <= 4)&&(defined number >= 128)||defined xor
		out("успехъ длинного логического условия size <= 4... ifndef") nl
#else 
		out("успехъ else ifndef") nl
#endif 

		
	
	int revolve = 1;
	out(bin_res3);
	while (revolve) {
		out("Введите целое число bin_res4:");
		in(bin_res4);
		out(" Вы ввели число:");
		out(bin_res4);
		out("\n Введите операцию:");
		in(symbol);
		if ((symbol == "&") || (symbol == "|") || (symbol == "^")) {
			out("\n Введите Маску: ");
		}
		else if ((symbol == ">>") || (symbol == "<<")) {
			out(" \n Введите сдвиг: ");
		}
		else { out(" \n Введены неверные данные"); }
		in(mask);

		out("Вы ввели операцию:");
		out(mask);
		
		bitmask(&bin_res4, symbol, mask);

		//bin_res4 = bin_res4 & mask;
		if ((symbol == "&") || (symbol == "|") || (symbol == "^")) {
			out(" \n Результат после наложения маски: "); 
		}
		else if ((symbol == ">>") || (symbol == "<<")) {
			out(" \n Результат после побитового сдвига: "); 
		}
		else { out(" \n Введены неверные данные"); }

		out(bin_res4);
		
		out("\n Продолжить? Всякое число если да, 0 если нет"); in(revolve);
	}



	if (logic) {
		c = a + b;
		out(c); out("good"); out(bin_res1); out(bin_res2);
	}
	else {
		out("bad"); out(!3.21);
	}
	


	#define cycle(i, x) for (int i = 0; i < x; i++) // только это стоит писать перед int main() и это можно использовать часто.
	string Arr[3]; string *ptr_arr;
	ptr_arr = Arr;

	cycle(i, 3) {
		ptr_arr[i] = "ok";
	}
	cycle(i, 3) {
		cout << ptr_arr[i] << ' ';
	}cout << endl;


	string Area[3][4]; 
	ptr_arr = *Area;

	cycle(i, 3) {
		ptr_arr[i] = "ok";
	}
	cycle(i, 3) {
		cout << ptr_arr[i] << ' ';
	}cout << endl;

	

	// указатель на двумерный динамический массив
  /*  string **volume;
	volume = check(5, 6);
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 6; j++) {
			cout << volume[i][j] << ' '; // всё ок, но формат вывода не тот какой то.
		} cout << endl;
	}*/
	
	//самолёты
	/*int quantity;
	cout << "Введите количество типов самолётов: "; cin >> quantity; cout << endl;
	aircraft *boeing = new aircraft[quantity];

	for (int i = 0; i < quantity; i++) {
		cout << i + 1 << " Cамолёт" << endl;
		inputAircraft(&boeing[i]);
	}
	for (int i = 0; i < quantity; i++) {
		cout << i + 1 << " Cамолёт" << endl;
		outputAircraft(&boeing[i]); 
	}
	freeAircraft(boeing, quantity);
	*/

	//методы оценки качества. Функция через указатель принимет функцию как параметр и возвращает указатель на функцию.
	/*
	string line = "focus";
	void(*PTR)(double, string* mas);
	PTR = Method_calc_deprication("light", 2, option1); //сначала мы решаем указатель на какую функцию вернуть. Для этого передаём аргументы от которых зависит выбор функции.
	PTR(3, &line);  //потом уже передаём в аргументы в функцию присвоенную этому указателю
	cout << line << endl;
	*/

	//методы оценки качества. Функция, возвращающая указатель на функцию через указ-ль.
	/*
	int num; double quantity; string stroka = "renf"; void(*receive)(double, string *);
	while (1)
	{
		cout << "выберите метод оценки качества, введя 1, 2 или 3: " << endl; cin >> num; cout << endl;
		cout << "выберите степень качества: " << endl; cin >> quantity; cout << endl;
		testptr(testReturnPTR(num), quantity, &stroka); 
		//работает и так и так. И через явно объявленный указатель на функцию и через указатель на функцию в виде аргумента другой ф.  
		//receive = testReturnPTR(num);
		//receive(quantity, &stroka);
		cout << "качество:" << stroka << endl;
	}
	*/

	//методы оценки качества. Указатель в аргументе функции. Передача функции как параметра.
	/*while (1){

		int num; double quantity; string stroka = "renf";
		cout << "выберите метод оценки качества, введя 1, 2 или 3: " << endl; cin >> num; cout << endl;
		cout << "выберите степень качества: " << endl; cin >> quantity; cout << endl;

		if (num == 1) {
			testptr(method1, quantity, &stroka);
		}
		if (num == 2) {
			testptr(method2, quantity, &stroka);
		}
		if (num == 3) {
			testptr(method3, quantity, &stroka);
		}
		cout << "качество:" << stroka << endl;
	}
	*/


	//застройщик. Массив структур + взаимодействие с массивом объявленным в структуре. Заполенение через указатель в функции.
	/*int quantity;
	cout << "Введите количество типов строений, предлагаемых данной строительной кампании: "; cin >> quantity; cout << endl;
	house *buldgroupAlpha = new house[quantity];

	for (int i = 0; i < quantity; i++) {
		cout << i + 1 << "-й тип строения :" << endl;
		inputDeveloper(&buldgroupAlpha[i]);
	}

	for (int i = 0; i < quantity; i++) {
		cout << i + 1 << "-й тип строения :" << endl;
		outputDeveloper(&buldgroupAlpha[i]);
	}
	
	freeMemoryDeveloper1(buldgroupAlpha, quantity);
	*/

	//застройщик. Массив структур в явном виде + взаимодействие с массивом объявленным в структуре.
	/*
	int quantity;
	cout << "Введите количество типов строений, предлагаемых данной строительной кампании: "; cin >> quantity; cout << endl;
	house *buldgroupAlpha = new house[quantity];
	

	for (int i = 0; i < quantity; i++) {
		//buldgroupAlpha[i].Num = i; // это вообще не обяз, можно и через i+1 реализовать
		cout << i + 1 << "-й тип строения :" << endl;
		cout << "Определите тип возводимого объекта: "; cin >> buldgroupAlpha[i].type; cout << endl;
		cout << "Укажите типовые размеры: "; cin >> buldgroupAlpha[i].type_size; cout << endl;
		cout << "Укажите вид строения: "; cin >> buldgroupAlpha[i].view; cout << endl;
		cout << "Укажите количество этажей: "; cin >> buldgroupAlpha[i].quantity_floor; cout << endl;
		cout << "Укажите количество типов квартир на этаже(на каждом этаже квартиры одинаковых типов): "; cin >> buldgroupAlpha[i].quantity_flat; cout << endl;

		for (int j = 0; j < buldgroupAlpha[i].quantity_flat; j++) {
			cout << "Укажите количество систем контроля в " << j + 1 << "-м типе квартиры этого жилого комплекса: ";
			cin >> *buldgroupAlpha[j].quantity_countol_system_on_float_in_floor; cout << endl; 
			//крч если ук-ль на символьный массив -> то при обращении можно не разыменовывать, дописывая *, если ук-ль на численный массив -> чтобы обращаться к данным надо разыменовать и дописывать* 
		}
	}

	for (int i = 0; i < quantity; i++) {
		cout << buldgroupAlpha[i].Num + 1 << "-й тип строения :" << endl;
		cout << "Тип возводимого объекта: " << buldgroupAlpha[i].type << endl;
		cout << "Типовые размеры: " << buldgroupAlpha[i].type_size << endl;
		cout << "Вид строения: " << buldgroupAlpha[i].view << endl;
		cout << "Количество этажей: " << buldgroupAlpha[i].quantity_floor << endl;
		for (int j = 0; j < buldgroupAlpha[i].quantity_flat; j++) {
			cout << "Количество систем контроля в квартире" << j + 1 << "-го типа в жилом комплексе " << buldgroupAlpha[i].type << "такое: " << buldgroupAlpha[i].quantity_countol_system_on_float_in_floor << endl;
		}
	}
	 
	for (int i = 0; i < quantity; i++) {
		delete buldgroupAlpha[i].type;
		delete buldgroupAlpha[i].type_size;
		delete buldgroupAlpha[i].view;
	}
	delete[] buldgroupAlpha;
	*/

	//батарейка. Массив структур в явном виде + взаимодействие с массивом объявленным не в структуре
	/*
	int Num;

	cout << "Введи количество батареек: "; cin >> Num; cout << endl;

	double *res_time_Load = new double[Num]; 
	string *grade = new string[Num];

	battery *duracel = new battery[Num];

	
	for (int i = 0; i < Num; i++) { //ВВОД И ОСНОВНЫЕ ОПЕРАЦИИ

		duracel[i].type = new char[30];
		duracel[i].form = new char[30];

		duracel[i].index = i + 1;
		cout << "Введите тип " << duracel[i].index << "-ой(ей) батарейки: "; cin >> duracel[i].type;
		cout << "Введите форму " << duracel[i].index << " батерейки: "; cin >> duracel[i].form;
		cout << "Введите напряжение " << duracel[i].index << "-ой(ей) батерейки: "; cin >> duracel[i].volume;
		cout << "Введите ёмкость " << duracel[i].index << "-ой(ей) батарейки: ";  cin >> duracel[i].capacity;
		cout << "Введите допустимую силу тока " << duracel[i].index << "-ой(ей)  батарейки: ";  cin >> duracel[i].amperage;
		duracel[i].timeLoading(duracel[i].amperage, duracel[i].capacity, &res_time_Load[i]);

		if (duracel[i].volume <= 3.3) {
			duracel[i].methodQualuty = method1;
		}
		if (duracel[i].volume > 3.3) {
			duracel[i].methodQualuty = method2;
		}

		duracel[i].methodQualuty(res_time_Load[i], &grade[i]);
	}

	for (int i = 0; i < Num; i++) {  // ВЫВОД
		cout << "Тип батарейки: " << duracel[i].type << endl << "Форма батарейки: " << duracel[i].form << endl;
		cout << "Ёмкость батарейки: " << duracel[i].capacity << endl << "Допустимая сила тока батарейки: " << duracel[i].amperage << endl;
		cout << "Время зарядки: " << res_time_Load[i] << endl << "Степень качества: " << grade[i] << endl;
	}

	for (int i = 0; i < Num; i++) {  // ОЧИСТКА ПАМЯТИ
		delete duracel[i].type;
		delete duracel[i].form;
	}

	//delete res_time_Load;
	//delete grade;
	delete[] duracel;
		*/
		
	//батарейка. Единичная структура. Прост для проверки и вспомнить. Не массив
	/*
	battery alcoline; 
	string grade = "not rated"; 
	double res_time_Load = 0, capacity = 0, amperage = 0;

	alcoline.volume = 3.3, alcoline.size = 5.12; 
	alcoline.type = new char[20];
	alcoline.form = new char[20];

	cout << "Введите тип и форму батерейки" << endl;
	cin >> alcoline.type >> alcoline.form;
	cout << "Введите Ёмкость и допустимую силу тока батарейки" << endl;
	cin >> capacity >> amperage;

	alcoline.timeLoading(amperage, capacity, &res_time_Load);

	if (alcoline.volume <= 3.3) {
		alcoline.methodQualuty = method1;
	}
	if (alcoline.volume > 3.3) {
		alcoline.methodQualuty = method2;
	}
	alcoline.methodQualuty(res_time_Load, &grade);

	cout << "Тип батарейки: " << alcoline.type << endl << "Форма батарейки: " << alcoline.form << endl;
	cout << "Ёмкость батарейки: " << capacity << endl << "Допустимая сила тока батарейки: " << amperage << endl;
	cout << "Время зарядки: "  << res_time_Load << endl << "Степень качества: " << grade << endl;

	delete alcoline.type;
	delete alcoline.form;
	*/


	//структура. радиотелефоны. указатель.
	/*
	//структура. радиотелефоны. указатель.
	int N; double timeofYearJob; string rangofJob = "nullcondition";
	cout << "Укажите количетство аппаратов связи(шт): ";
	cin >> N;
	technick *deviceRelation = new technick[N];
	for (int i = 0; i < N; i++) {
		cout << endl << i + 1 << "-й радиотелефон" << endl;
		deviceRelation[i].number = i+1;
		inputRadioTelephone(&deviceRelation[i]);
	}
	system("cls");
	for (int i = 0; i < N; i++) {
		cout << endl << i + 1 << "-й радиотелефон" << endl;
		outputRadioTelephone(&deviceRelation[i]);
	}
	cout << "------------------------------------------------------------------------\n" << endl;
	cout << "К эксплуатации не годны следующие радиотелефоны:" << endl;

	for (int i = 0; i < N; i++) {
		sampleRadioTelephone(&deviceRelation[i]);
	}
	
	freeMemoryRadioTelephone(deviceRelation, N);
	//for (int i = 0; i < size; i++) {
	//	delete[] deviceRelation[i].kind;
	//	delete[] deviceRelation[i].target;
	//}
	delete[] deviceRelation;
	*/

	//структура. радиотелефоны. явный вид.
	//-1. не работало потому что я символьным массивам не присвоил место в памяти. 
	/*
	// не работает потому что строкам не присвоено значение массива символов
	int N; double timeofYearJob; string rangofJob = "nullcondition";
	cout << "Укажите количетство аппаратов связи(шт): ";
	cin >> N;
	technick *deviceRelation = new technick[N];


	for (int i = 0; i < N; i++) {
		cout << i + 1 << "-й радиотелефон" << endl;
		cout << "Введите вид радиотелефона: "; cin >> deviceRelation[i].kind;
		cout << "Введите назначение радиотелефона: "; cin >> deviceRelation[i].target;
		cout << "Введите количество радиотелефонов(Шт): "; cin >> deviceRelation[i].quantity;
		cout << "Введите время работы радиотелефона(Лет): "; cin >> timeofYearJob;
		deviceRelation[i].timeOfWork(timeofYearJob, rangofJob);
	} 
	for (int i = 0; i < N; i++) {
		cout << i + 1 << "-й радиотелефон" << endl;
		cout << "Вид радиотелефона: " << deviceRelation[i].kind << endl;
		cout << "Назначение радиотелефона: " << deviceRelation[i].target << endl;
		cout << "Количество радиотелефонов: " << deviceRelation[i].quantity << endl;
		cout << "Степень изношенности радиотелефона: " << rangofJob << endl;
	}
	*/

	//структура. автомобили. указатель
	/*
	int N;
	cout << "Введите количество автомобилей(шт): ";
	cin >> N;
	car *diller1 = new car[N]; 
	for (int i = 0; i < N; i++) {
		cout << i + 1 << "ый автомобиль\n";
		inputСar(&diller1[i]);
		cout << endl;
	}
	for (int i = 0; i < N; i++) {
		cout << i + 1 << "ый автомобиль\n";
		outputСar(&diller1[i]);
		cout << endl;
	}
	*/

	//сортировка массива пузырьком через указатель.
	/*
	int N, B, V, T, U;
	cout << "Введите Длину 1мерного массива" << endl;
	cin >> N;
	cout << "Введите размер 2мерного массива" << endl;
	cin >> B >> V;
	double per = 15.234, *Arr = new double[N];
	double **Ar = new double*[B];
	for (int i = 0; i < B; i++) {
		Ar[i] = new double[V];
	}

	for (int i = 0; i < B; i++) {
		for (int j = 0; j < V; j++) {
			Ar[i][j] = rand () %10;
		}
	}

	for (int i = 0; i < N; i++) {
		Arr[i] = rand() %100;
	}

	cout << "одномерный массив" << endl;
	for (int i = 0; i < N; i++) {
		cout << Arr[i] << ' ';
	}cout << endl;

	cout << "двумерный массив" << endl;
	for (int i = 0; i < B; i++) {
		for (int j = 0; j < V; j++) {
			cout << Ar[i][j] << ' ';
		}cout << endl;
	}

	cout << "Введите до каких размеров надо изменить 2мерный массив" << endl;
	cin >> T >> U;

	char znak = 'K', mas1[25] = "pesistanse", mas2[25] = "constanta";
	string dlina = "neponatnua dlina predlozhenia";

	
	link(per, znak, dlina, Arr, N, Ar, B, V, T, U);

	cout << "ваши данные после изменения: " << "\n number = " << per << "\n znak = " << znak << "\n dlina = " << dlina << "\n отсортированный массив: " << endl;
	for (int i = 0; i < N; i++) {
		cout << Arr[i] << ' ';
	}cout << endl;

	cout << "двумерный массив после изменения" << endl;
	for (int i = 0; i < B; i++) {
		for (int j = 0; j < V; j++) {
			cout << Ar[i][j] << ' ';
		}cout << endl;
	}

	for (int i = 0; i < B; i++) {
		delete[] Ar[i];
	}
	delete[] Ar;
	*/

    return 0;
}

//20.08.2021
//пространство между условными директивами препроцессора - типо отдельное пространоство имён. В всяком из них переменные объявлять заново
//#include: включает текст из файла

//#define: определяет макрос или препроцессорный идентификатор

//#if: проверяет условие выражение (как условная конструкция if)
//#elif: задает альтернативное условие для #if
//#else: задает альтернативное условие для #if
//#endif: окончание условной директивы #if



//09.08.2021
//Приоритет операций: (1) &, (2) ^, (3) |;  Все они работают с битами, т.е. двоичным представлением числа. 
//А операция ~ просто возьмёт отрицательное число соответствующее указанному.
//После объявления указателя с ним работать именно со звездочкой. Звездочка убирается только если мы хотим переприсвоить другой указатель ему или передать адресс чего то.


//07.08.2021
//функция передаётся с аргументами, а вот массиву индексы для присвоения переменной его содержащей не нужны.
//Методы передачи массива в переменную-указатель. 
//1-мерный string Arr[3], *ptr_arr;   ptr_arr = Arr;      динамич-й: *ptr_arr = new string[x];
//2-мерный string Arr[3][4], **ptr_arr;   ptr_arr = *Arr;      динамич-й: **ptr_arr = new string[x];  for (int i< 0; i < x; i++){ ptr_arr[i] = new string[y]; } 
//Но  параметр функции может принять массив и так string stroka[]; Но это только для одномерных массивов
//Конструкции string **ptr_Arr, **Arr[...][...]; ptr_Arr = Arr; также работают.


//задачи с++
//1. Если объявить в аргументе функции А указатель на функцию, можно ли передав в аргумент этой функции функцию Б, изменить функцию Б? наприммер переопределить её, изменить тип, изменить аргументы. 
//Можно ли вообще изменить функцию через указатель? 
//2. Реализовать заполнение массива СТД через функцию с аргументом иного типа данных, нежели СТД. - вроде низя
//3. Как задать размер динамического массива в структуре?(внутри функции в структуре это это сделать можно)
//4. Как работать с функций, возвращающей указатель, а также принимающей его одним из параметров


//выводы: с++ :

//0. Крч чистить надо только new!!!!!!!(new и delete - динамические объекты. В общем случае на всякое new должен приходиться delete. Сначала не забываем выделять место например символьным массивам, которые мы ещё не заполнили, а потом не забываем чистить через delete)
    //Да и вообще всё, что скажем так идёт вторым рядом. То есть массив, каждая ячейка которого содержит ещё набор ячеек(массив структур, каждой единице структуры которого присвоем массив(дин массив) - чистим только ряд структур, двумерный массив - чистим только родительский массив)
    //то есть если мы удалаем символьные массивы, то удалаем не размер массива[40], а количество структурных ячеек house *dom = new house[size]!!!! --> for (int i = 0; i < size!!!!!; i++) { delete house[i].массив } 
   
	//задать размер массива в структуре удалённо низя(опыт с застройщиком)
	//крч если ук-ль на символьный массив -> то при обращении можно не разыменовывать, дописывая *. Если ук-ль на численный массив -> при обращении к нему надо разыменовать и дописывать*
    //правила передачи массивов 
             //а) vol[] = array;
             //б) *vol = &array;
    //обращение к элементам массива из структуры в функции через указатель синт-с: for(){ ptr->array[i]; } 
    //со структурой через функцию можно работать и не через указатель судя по всему. прост в аргументах функции объявляем СТД. Как - нибудь потом надо будет рассмотреть такие варианты

//тип приним-ой ф-ции(*имя)(аргументы приним-ой ф-ции). Есть указатель на функцию, это по сути переменная, которой можно присвоить функцию и в которую передавать аргументы(ну или тип данных, хранящих функцию, если так угодно{Естественно его можно использовать как аргумент функции}). 
     // можно использовать если нужно передать, например, несколько методов расчёта в функцию. В ук-ль на ф. можно передать аргументы
//тип приним-ой ф-ции(*имя(аргументы данной функции))(сигнатуры приним-ой ф-ции) А есть функция, возвращающая указатель на функцию(его ещё надо принять как то). В возвращаемый ук-ль нельзя передать аргументы. 

//работа с функциями, где указатель на функцию и параметр и возвращаемое значение такова: 
// 1)указателю с сигнатурами возвращаемых ф-ций присваиваем тяжелую ф-цию и передаём аргументы самой тяж-й фунции, которые определяют выбор возвращаемого указателя на функцию. 
// 2)в указатель с присовенной тяж-й ф-цией передаём аргументы уже непосредственно возвращаЕМЫХ ф-ций.

//.cpp хранит файлы кода, а .h прототипы функций. Объявление там по тем же правилам. То есть прототипы функций, которые будут вызываться в структуре, должны быть объявлены до неё.

//1. перегруженные функции не могут отличаться только типом возвращаемого значения.
//2. изменяя в функции переданный в неё аргументом массив, без явного указателя, мы все равно изменяем его и за пределами функции.Т.к.статический массив уже и есть указатель на первый элемент.
//3. функции с явным возвращением через return, возможно, устарели. делать всё на пустых функциях через указатели. даже изменение массивов. Пользоваться только этим.
//4. null нужен чтобы заткнуть аргумент с указателем. Когда нам нужно допустим передеать меньше параментров в функцию, чем в ней есть аргументов, а изменить посредоством указателя(вернуть) она должна все описанные в ней аргументы.
//5. сигнатура функций - это информация о типе данных аргументов, которые мы модем принимать.
//6. указатель на функцию использутся для того, чтобы для вызова конкретной из многих тысяч функций из нашей функции не писать логику вызова функции, например передавая в аргумент нашей функции 1, 2, 3,...соответствующие определённым функциям,
//а использовать уже встроенный функционал языка, просто передавая в аргумент нашей функции требуемую для вызова чужую функцию. double/void (*oper)(double, double);
//крч чтоб вызывать много функций из другой функции это нужно.... Если известны сигнатуры и тип функции.
//7. структорой мы можем создавать тип данных для объекта, добавляя и придумывая этому объекту сколь угодно много аттрибутов, которые можно описать строкой, числом, символом или функцией(да её тоже можно создавать в структуре как аттрибут объекта). Можно создавать объекты с удивительно - уникальным набором параметров и свойств.

//8. чтобы в функции через указатель изменить размер массива и перезаполнить его другими значениями, в функции создаётся новый массив, передаваемого размера и присваивается старому, а старый предварительно зачищается и ему присваивается нулевой указатель. 

//9. Переменную, массив и функцию объявленную за пределами функций можно вызвать из этих функкий и вложенных в них функций. Переменая объявленная в функции видна в этой функции и вложенной функции, но не видна в соседних функциях.

//10. Объявленные в структуре функции почему то нельзя передать в указатель на функцию, объявленный в той же структуре
//11. Указатель на область памяти(динамический массив) можно делать спроектированного в структуре типа данных.
//12. в структуре есть 3 этапа. объявление структуры, создание в ней типа данных X, после чего создание переменной, массива или функции этого типа данных X.
//13. массив структурного тип данных можно заполнить через функцию, коя как аргумент принимает указатель на тот же структурый тип данных. Но чисто теоретически можно заморочиться и сделать заполнение массива структурного типа данных в функции с аргументов не структурного типа данных.
//14. массив СТД, как и функция и переменная имеет тип данных(как то ни странно). Переменную(массив или функцию) одного типа данных можно присвоить только переменной(массиву или функции) этого же типа данных. Массив СТД можно присвоить только указатель того же СТД, как и любой другой тип данных. Когда мы передаём массив в функцию, мы это и делаем. 
//15. со структурами удобнее работать через файл и необходимо освобождать память от массивов символов в ещё одной отдельной функции.

//16. мы можем в явном виде задать какой то параметр в массив СТД, а потом в фунции через указатель к нему обратиться. Как в примере с радителефонами.
//17. Очистить память от переменных в структуре можно через отдельную функцию, куда через указатель в аргументе, будет передаваться экземпляр структуры и в которой соответственно будут доступны и можно будет обратиться к переменным структуры, впоследствии чего появтся возможность очистить от них память через delete[]  
//18. Структуры можно передавать и через ссылку. А также функции, и массивы, что логичено, так как структура просто создаёт тип данных, а все эти вещи могут и должны иметь Т/Д могут быть СТД.
//19. в функции СТД можно обяъвить и после вызвать переменную СТД, ровно также как можно объявить  double функцию и в ней объявить double переменную
//











