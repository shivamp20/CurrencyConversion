# CurrencyConversion

##### Information about my project files-
1) currency_to_word.cpp is my main project file which can be executed on Linux/Windows using GCC compiler.
-The main logic and code of my project lies in this file.
on Linux To run Simply open terminal and type -
step1- g++ currency_to_word.cpp
step2- ./a.out.
And the project file will get executed


######information about my Unit testing files-

1) I have used googletest framework for the testing part of my project.The two major file are test1.cpp and whattest.cpp
2)In order to run the google test on Linux operating system and install googletest in your own environment,please refer to the link as attached
below which provides all the essential details related to installing google test.
link- https://www.srcmake.com/home/google-cpp-test-framework
3)In this link provided above the file named sqrt.cpp is my file whattest.cpp and sqrt_test.cpp is my file test1.cpp,kindly replace the name and use my code 
instead for execution of testing.
4)Also in the CMakeLists.txt file in the add_executables method kindly change the sqrt_test.cpp file name with test1.cpp file name of mine.
5)once the installation is complete and executable file is added in the folder,just open the terminal in project directory .
6)In the terminal we have to execute following commands-
step a) cmake CMakeLists.txt
step b) make
step c) ./execteTests
7) The test1.cpp file has two test methods namely positiveTest and negativeTest which has in total 10 test cases for the coverage of my code.
8) The test file will be executed and result will get displayed on terminal.


#### Prereqisites-
1) cmake version greater than 2.6
2) gcc compiler
3) linux/Windows os (Linux recommended)

  
