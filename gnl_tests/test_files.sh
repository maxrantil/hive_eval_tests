#!/bin/bash

time ./test_gnl plato
echo "under 1s is very good"

./test_gnl test1
./test_gnl test1non
./test_gnl test2
./test_gnl test2non
./test_gnl test3
./test_gnl test3non
./test_gnl test4
./test_gnl test4non
./test_gnl test5
./test_gnl test5non
./test_gnl test6
./test_gnl test6non
./test_gnl test7
./test_gnl test7non
./test_gnl test8
./test_gnl test8non
./test_gnl test9
./test_gnl test9non
./test_gnl empty
# sed -i 's/main_argv/main_stdout1lines/g' Makefile
# awk '{gsub("main_argv", "main_stdout1lines", $0); print}' Makefile
# replace "main_argv" "main_stdout1lines" -- Makefile
echo "stdout 1 line test begin after 'make re"
