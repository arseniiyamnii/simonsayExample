Arduino SimonSay
===============
*****
Оглавление / CONTENT
----------
1. русский

    1. Вступление
    
    2.Суть игры
    
    3.Минусы этой версии
    
    4.О следующих версиях
    
    5.Что в репозитории
    
    6.Требования программы
    
    7.Создание устройства
    
    8.Как изменить игру

*****

2. english (Google Translate)

    1.Membership
    
    2.The essence of the game
    
    3.Cons this version
    
    4.On the next versions
    
    5.What's in the repository
    
    6.The requirements of the program
    
    7.The creation of the device
    
    8.How to change the game

*****

1
=====
1.1
-----Arduino SimonSay
===============
*****
Оглавление / CONTENT
----------
1. русский

    1. Вступление
    2.Суть игры
    3.Минусы этой версии
    4.О следующих версиях
    5.Что в репозитории
    6.Требования программы
    7.Создание устройства
    8.Как изменить игру

*****

2. english (Google Translate)

    1.Membership
    2.The essence of the game
    3.Cons this version
    4.On the next versions
    5.What's in the repository
    6.The requirements of the program
    7.The creation of the device
    8.How to change the game

*****

1
=====
1.1
-----

Привет! Это мой первый проект на github, и первый проект на arduino
Это игра Simon Say.

*****

1.2
------
Суть игры:
Нужно повторять за лампочками. Загорается 1, надо нажать на первую.
Загорается 2, надо нажать на вторую.
С каждым ходом последовательность увеличивается.

********

1.3
-----
Минусы моей версии:
Максимальное количество раундов - 10. Так как первоначальное число имеет тип long.
Первоначальное число введено в программу. То есть каждую сессию игры оно идентичное.
Больше минусов нет. В следующей версии сделаю это через массив, и будет неограниченное колличество ходов.

*********

1.4
------
Немного о следующих версиях:
1. эта прога(10 ходов)
2. через массив(неограниченное количество ходов)
3. абсолютный рандомайзер ходов(первоначальное число неизвестно)

********

1.5
------
Что есть в этом репозитории?
* прога
* прога с коментами(для понятности)

*******

1.6
---------
Требования программы
* Разрабатывалась на Arduino Uno(на других не знаю как будет работать)

*****
1.7
----
Создание устройства(моя версия)
Нам потребуется:
* Arduino Uno
* Usb
* 2 кнопки
* 2 диода (лучше разных цветов)
* 2 резистора 220 Ом
* 2 резистора 10К Ом
* 14 проводов Папа-Папа
>(этого можно всего меньше, но я сделал компактный Геймпад)
Схема подключения:

![Фото схемы](https://1.downloader.disk.yandex.ru/preview/56d7be2807b4e221cffc8ada0b96d43fb7e2eb03be587624ceeda7826380feac/inf/1il_VEvFM8pzOK8et-rlWhvztN6-KEnDP9cFoOpq-JLErQT8g7piQCQgIRLNpM0PZDA29nXD-eU_we5xczZjZQ%3D%3D?uid=0&filename=IMG-308c668821529737ad3f518124dc32c4-V.jpg&disposition=inline&hash=&limit=0&content_type=image%2Fjpeg&tknv=v2&size=XXL&crop=0)

скрин

******

1.8
-------
Для изменения числа, нужно в функции `loop` поменять `long a`, на свой вариант. Но не больше 10 знаков!!

***

***

2
=====
2.1
-----

Hi! This is my first project on github, and the first project on the arduino
Is the game Simon Say.

*****

2.2
------
The essence of the game:
You need to repeat the light bulbs. 1 lights up, press the first key.
2 lights up, press the second key.
With each stroke of the sequence increases.

********

1.3
-----
Cons of my version:
The maximum number of rounds - 10. Since the initial number is of type long.
The initial number entered in the program. That is, each session of the game, it is identical.
More no cons. The next version will do this through the array, and will be an unlimited number of moves.

*********

1.4
------
A little bit about the next versions:
1v. this program(10 turns)
2v. using an array(unlimited moves)
3v. absolute random moves(original number unknown)

********

1.5
------
What is in this repository?
* prog
* program with comments(for clarity(only in russian))

*******

1.6
---------
Program requirements
* Developed on an Arduino Uno(others not know how it will work)

*****
1.7
----
A device(my version)
We need:
* Arduino Uno
* Usb
* 2 buttons
* 2 diode (preferably different colors)
* 2 220 Ohm resistor
* 2 resistor 10K Ohm
* 14 wires male to male
>(this is just smaller, but I made a compact Gamepad)
Connection diagram:

![Photo arduino](https://1.downloader.disk.yandex.ru/preview/56d7be2807b4e221cffc8ada0b96d43fb7e2eb03be587624ceeda7826380feac/inf/1il_VEvFM8pzOK8et-rlWhvztN6-KEnDP9cFoOpq-JLErQT8g7piQCQgIRLNpM0PZDA29nXD-eU_we5xczZjZQ%3D%3D?uid=0&filename=IMG-308c668821529737ad3f518124dc32c4-V.jpg&disposition=inline&hash=&limit=0&content_type=image%2Fjpeg&tknv=v2&size=XXL&crop=0)

screen

******

1.8
-------
To change the number, it is necessary in function `loop` to change the `long a`, at your option. But no more than 10 characters!!

Привет! Это мой первый проект на github, и первый проект на arduino
Это игра Simon Say.

*****

1.2
------
Суть игры:
Нужно повторять за лампочками. Загорается 1, надо нажать на первую.
Загорается 2, надо нажать на вторую.
С каждым ходом последовательность увеличивается.

********

1.3
-----
Минусы моей версии:
Максимальное количество раундов - 10. Так как первоначальное число имеет тип long.
Первоначальное число введено в программу. То есть каждую сессию игры оно идентичное.
Больше минусов нет. В следующей версии сделаю это через массив, и будет неограниченное колличество ходов.

*********

1.4
------
Немного о следующих версиях:
1. эта прога(10 ходов)
2. через массив(неограниченное количество ходов)
3. абсолютный рандомайзер ходов(первоначальное число неизвестно)

********

1.5
------
Что есть в этом репозитории?
* прога
* прога с коментами(для понятности)

*******

1.6
---------
Требования программы
* Разрабатывалась на Arduino Uno(на других не знаю как будет работать)

*****
1.7
----
Создание устройства(моя версия)
Нам потребуется:
* Arduino Uno
* Usb
* 2 кнопки
* 2 диода (лучше разных цветов)
* 2 резистора 220 Ом
* 2 резистора 10К Ом
* 14 проводов Папа-Папа
>(этого можно всего меньше, но я сделал компактный Геймпад)
Схема подключения:

![Фото схемы](https://1.downloader.disk.yandex.ru/preview/56d7be2807b4e221cffc8ada0b96d43fb7e2eb03be587624ceeda7826380feac/inf/1il_VEvFM8pzOK8et-rlWhvztN6-KEnDP9cFoOpq-JLErQT8g7piQCQgIRLNpM0PZDA29nXD-eU_we5xczZjZQ%3D%3D?uid=0&filename=IMG-308c668821529737ad3f518124dc32c4-V.jpg&disposition=inline&hash=&limit=0&content_type=image%2Fjpeg&tknv=v2&size=XXL&crop=0)

скрин

******

1.8
-------
Для изменения числа, нужно в функции `loop` поменять `long a`, на свой вариант. Но не больше 10 знаков!!
