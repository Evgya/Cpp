cmake_minimum_required(VERSION 3.22)

project(RomanHelper)			# Название проекта

set(SOURCE_EXE main.cpp)		# Установка переменной со списком исходников для исполняемого файла

set(SOURCE_LIB RomanHelper.cpp)			# Тоже самое, но для библиотеки

add_library(RomanHelper STATIC ${SOURCE_LIB})	# Создание статической библиотеки с именем foo

add_executable(main ${SOURCE_EXE})	# Создает исполняемый файл с именем main

target_link_libraries(main RomanHelper)		# Линковка программы с библиотекой