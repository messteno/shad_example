# Тестовый проект для курса алгоритмов в ШАД

### Requirements

- CMake
- Тестовый фреймворк googletest:
https://github.com/google/googletest

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
[==========] Running 3 tests from 1 test case.
[----------] Global test environment set-up.
[----------] 3 tests from TestSum
[ RUN      ] TestSum.Success
[       OK ] TestSum.Success (0 ms)
[ RUN      ] TestSum.Error
/home/mesteno/Programming/shad/algorithms/example/tests/test.cpp:19: Failure
      Expected: sum
      Which is: 52
To be equal to: answer
      Which is: 53
[  FAILED  ] TestSum.Error (0 ms)
[ RUN      ] TestSum.Segfault
[1]    31587 segmentation fault (core dumped)  ./bin/example_test
```

### Features

После сборки в каталоге contest создается файл, объединяющий исходный код в
каталоге source. В файле CMakeLists.txt в каталоге source необходимо указывать
заголовочные файлы в том порядке, в котором они должны следовать в объединенном
файле.

Предупреждение: процессор файлов довольно примитивный и может отработать некорректно.
