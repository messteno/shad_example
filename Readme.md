# Тестовый проект для курса алгоритмов в ШАД

### Requirements

- CMake
- Тестовый фреймворк Criterion (можно заменить на любой другой)
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

### Features

После сборки в каталоге contest создается файл, объединяющий исходный код в
каталоге source.

Предупреждение: процессор файлов довольно примитивный и может отработать некорректно.
