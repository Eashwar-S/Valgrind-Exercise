## Standard install via command-line
```
git clone https://github.com/Eashwar-S/Valgrind-Exercise.git
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


