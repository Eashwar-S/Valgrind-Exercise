# Valgrind Exercise

## Standard install via command-line
```
git clone https://github.com/Eashwar-S/Valgrind-Exercise.git
cd <path to repository>

## Build and Running Valgrind
```

mkdir build
cd build
cmake ..
make
valgrind --leak-check=full ./app/shell-app

# KCachegrind Memory Profiler Output via Command line
```
valgrind --tool=callgrind ./app/shell-app

-Open callgrind.out.XXX file where XXX will be the process identifier in build folder







