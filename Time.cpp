TimeManipulation::Time::Time(std::string timeStr)
{
	int iterator = 0;    //итератор для прохода по строке
	std::string hours;   //строка hours для преобразования в int
	std::string minutes; //строка minutes для преобразования в int
	std::string seconds; //строка seconds для преобразования в инт

	while (isEnded(timeStr, iterator)) //Пока timeStr[iterator] не равна ':' или 0
	{
		hours += timeStr[iterator];
		iterator++;
	}
	int hours = atoi(hours.c_str()); 

	while (isEnded(timeStr, iterator)) //Пока timeStr[iterator] не равна ':' или 0
	{
		minutes += timeStr[iterator];
		iterator++;
	}
	int minutes = atoi(minutes.c_str());

	while (isEnded(timeStr, iterator)) //Пока timeStr[iterator] не равна ':' или 0
	{
		seconds += timeStr[iterator];
		iterator++;
	}
	int seconds = atoi(seconds.c_str());

	/*
	Проверка коректности чисел в hours, minutes, seconds
	if(...)
	    .
		.
		.
	//Все хорошо можно записывать то что получилось в класс
	this->_hours   = hourse;
	this->_minutes = minutes;
	this->_seconds = seconds;
	*/
}
