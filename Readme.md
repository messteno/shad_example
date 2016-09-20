# Тестовый проект для курса алгоритмов в ШАД

### Requirements

- CMake
- Тестовый фреймворк Criterion (можно заменить на любой другой):
https://github.com/Snaipe/Criterion

### Getting stated

```sh
mkdir build
cd build
cmake ..
make
# Запуск программы
./bin/example
# Запуск тестов
./bin/example_test
# Или
make test
```

Пример вывода тестов:

```
[----] /home/user/shad_example/tests/test.cpp:22: Assertion failed: 52 != 53
[FAIL] basic_suite::error: (0.00s)
[----] /home/user/shad_example/tests/test.cpp:25: Unexpected signal caught below this line!
[FAIL] basic_suite::segfault: CRASH!
[====] Synthesis: Tested: 3 | Passing: 1 | Failing: 2 | Crashing: 1
```

### Features

После сборки в каталоге contest создается файл, объединяющий исходный код в
каталоге source.

Предупреждение: процессор файлов довольно примитивный и может отработать некорректно.

### Замена тестового фреймворка

Для замены тестового фреймворка необходимо поправить код tests/test.cpp, tests/CMakeLists.txt и при необходимости добавить в файл tests/test.cpp функцию main
