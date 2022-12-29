<h3 align="left">Languages and Tools:</h3>
<p align="left"> 
<a href="https://www.w3schools.com/cpp/" target="_blank" rel="noreferrer"><img src="https://raw.githubusercontent.com/devicons/devicon/master/icons/c/c-original.svg" alt="c" width="40" height="40"/> </a> 
<a href="https://git-scm.com/" target="_blank" rel="noreferrer"> <img src="https://www.vectorlogo.zone/logos/git-scm/git-scm-icon.svg" alt="git" width="40" height="40"/> </a>
<a href="https://cmake.org/" rel="noreferrer"><img src="https://www.vectorlogo.zone/logos/cmake/cmake-icon.svg" alt="Cmake" width="40" height="40"/></a>
</p>

# ExchangeMoneyAutomate

## Оглавление
1. [<p style='font-size: 20px'>Описание проекта</p>](#description_project)
2. [<p style='font-size: 20px'>Сборка проекта и тестирование</p>](#build_and_testing_project)
3. [<p style='font-size: 20px'>Инструкция по сборке проекта</p>](#manual_build_project)
## Описание программы<a name="description_project"></a>

Необходимо реализовать на языке Си автомат и произвести моделирование при помощи [SimInTech](https://simintech.ru/), примера, приведенного в
лекции – «автомат размена монет». В качестве сигнала прихода той или иной монеты
используются кнопки, а результат выдачи разменных монет представляется в виде
графика. Диаграмма мура: ![diagram mura](https://github.com/Sergey030520/ExchangeMoneyAutomate/blob/master/ImageProject/diagram_mura.png) 

## Сборка проекта и тестирование <a name="build_and_testing_project"></a>
Данный проект был собран и протестирован с помощью компилятора [MSVC 2019](https://learn.microsoft.com/en-us/visualstudio/releases/2019/release-notes) 
и среды моделирования [SimInTech](https://simintech.ru/).
Программа разработана на языке C 90 стандарта и
поддерживает следующие операционные системы:
+ Windows 10
+ Windows 11

## Инструкция по сборке проекта <a name="manual_build_project"></a>

Сборка проекта производится в программе SimInTech с помощью файла [exchange_money_automate_model.prt](https://github.com/Sergey030520/ExchangeMoneyAutomate/blob/master/exchange_money_automate_model.prt)
Для генерации кода в начале требуется настроить параметры в разделе "Кодогенератор Си". ![win settings project](https://github.com/Sergey030520/ExchangeMoneyAutomate/blob/master/ImageProject/win_settings_project.png)<br>
При нажатии на данный раздел появиться окно настроек "кодогенератора си" в котором необходимо прописать путь до папки ["generate"](https://github.com/Sergey030520/ExchangeMoneyAutomate/tree/master/ExchangeMoneyEngineCode/generate), 
а также указать компилятор для генерации кода. ![win settings code generate c](https://github.com/Sergey030520/ExchangeMoneyAutomate/blob/master/ImageProject/win_settings_code_generator_c.png) <br>
После этого требуется перейти в раздел инструменты и нажать на пункт "Сгенерировать программу". ![tools generate code](https://github.com/Sergey030520/ExchangeMoneyAutomate/blob/master/ImageProject/tools_generate_code.png) <br>



