g++ -c apple.cpp
g++ -c apple.cpp AppleWrapper.cpp
gcc main.c -o test AppleWrapper.o apple.o -lstdc++
