//конспект 



//#include <iostream> было изначально
//#include <execution>
//#include <vector>
//#include <chrono> для времени
//#include <random> 

/*
int main()
{

	setlocale(LC_ALL, "Russian"); для того чтобы ру текст в консоли отображался корректно


	auto start = std::chrono::high_resolution_clock::now();
	что-то
	auto end = std::chrono::high_resolution_clock::now();
	auto t1 = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
	Можно использовать для замера времени

	high_resolution_clock - в наносекундах; auto прописывается в инициализации, потом не нужно


	for (int i = 0; i < n; ++i)  --- ;
	for (int i = 0; i < n; ++i){
	---
	}


	Медленный способ
	std::cout << --- << std::endl;
	std::cout << --- << '\n';

	std::cout - вывести строку; std::endl - перенос (медленнее); '\n' - лучше это использовать(быстрее);

	Быстрый способ
	printf('тег', сообщение );
	printf("%d\n", numbers[i]); с новой строки начинать всё
	           ^
	теги



	Ссылки
	int summOFALL = 0;
	int& summ = summOFALL; Создание ссылок
	   ^
	

	Массивы
	не изменяемый размер
	задаётся сразу
	int numbers[32768]; пример
	for (int i = 0; i < 32768; ++i) numbers[i] = rand() % (-1000 - 1000 + 1) + -1000; заполнить так можно











}
*/
