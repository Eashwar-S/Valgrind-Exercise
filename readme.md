# Valgrind Exercise
---

## Standard install via command-line
```
git clone --recursive https://github.com/Eashwar-S/Valgrind-Exercise.git
cd path to repository
```

## Build 
```
mkdir build
cd build
cmake ..
make
```

## Running Valgrind
```
valgrind --leak-check=full ./app/shell-app
```

## KCachegrind Memory Profiler Output via Command line
```
valgrind --tool=callgrind ./app/shell-app
```
-Open callgrind.out.XXX file where XXX will be the process identifier in build folder








