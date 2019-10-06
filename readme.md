# Valgrind Exercise
[![Build Status](https://travis-ci.org/Eashwar-S/Valgrind_Exercise.svg?branch=master)](https://travis-ci.org/Eashwar-S/Valgrind_Exercise)
[![Coverage Status](https://coveralls.io/repos/github/Eashwar-S/Valgrind_Exercise/badge.svg?branch=master)](https://coveralls.io/github/Eashwar-S/Valgrind_Exercise?branch=master)
---

## Standard install via command-line
```
git clone https://github.com/Eashwar-S/Valgrind_Exercise.git
cd <path to repository>

## Checkout of master branch and go to valgrind_exercise branch

git checkout valgrind_exercise

## Build and Running Valgrind
mkdir build
cd build
cmake ..
make
valgrind --leak-check=full ./app/shell-app

```


