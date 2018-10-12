//
//  main.cpp
//  LearnC++
//
//  Created by 李安生 on 2018/10/11.
//  Copyright © 2018年 李安生. All rights reserved.
//

#include <iostream>
#include <limits>
#include "add.hpp"
/*
int doPrint(int x);
void Test1()
{
    
    //std :: cin与std :: cout相反 - 而std :: cout使用输出运算符（<<）将数据打印到控制台，std :: cin使用输入运算符从控制台的用户读取输入（ >>）
    
    int x = 4;
    std::cout << "x is equal to: " << x <<"\n";
    std::cout << "Hi!";
    std::cout << "My name is Alex.\n";
    
    std::cout << "Hi!" << std::endl; //std :: endl会插入一个换行符
    std::cout << "My name is Alex." << std::endl;
    
    std::cout << "Enter a number: "; // ask user for a number
    // no need to initialize x since we're going to overwrite that value on the very next line
    std::cin >> x; // read number from console and store it in x
    std::cout << "You entered " << x << std::endl;
    //    std::cout << "Hello, World!\n"<<std::endl;
    //    std::cin.clear(); // reset any error flags  重置任何错误标志
    //    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ignore any characters in the input buffer until we find an enter character  忽略任何字符的输入缓冲区,直到我们找到一个输入字符
    //    std::cin.get(); // get one more char from the user
    
    
    
    std::cout << "Starting main()" << std::endl;
    x =  doPrint(1); // Interrupt main() by making a function call to doPrint().  main() is the caller.
    std::cout << "Ending main()" << x<< std::endl;
    
}




int getValueFromUser()
{
     std::cout << "Enter an integer: ";
    int a;
    std::cin >> a;
    return a;
}

void test2()
{
    
    int c=getValueFromUser();
    int d= getValueFromUser();
    std::cout<< c+d<< std::endl;
}

//---------------------------

int return7()
{
    return 7;
}
int return8()
{
    return 8;
}
void Test3()
{
    
    std::cout << return7()+return8() <<std::endl;
}
//--------
int getNumbers()
{
    return 5;
    return 7;
}
void Test4()
{
    
    std::cout << getNumbers() << std::endl;
    std::cout << getNumbers() << std::endl;
}

//-----
int add(int x, int y, int z)
{
    return x + y + z;
}

int multiply(int x, int y)
{
    return x * y;
}
void Test5()
{
     std::cout << multiply(add(1, 2, 3), 5) << std::endl;
}


//-------


int getValueFromUserdoubleNumber()
{
    std::cout << "Enter an integer: ";
    int a;
    std::cin >> a;
    return 2*a;
}


void Test6()
{
    int x;
   x= getValueFromUserdoubleNumber();
    std::cout <<x << std::endl;
}
*/

void Test7()
{
#define MY_FAVORITE_NUMBER 9
    std::cout << "My favorite number is: " << MY_FAVORITE_NUMBER << std::endl;
}

void Test8()
{
#define PRINT_JOE
    
#ifdef PRINT_JOE
    std::cout << "Joe" << std::endl;
#endif
    
#ifdef PRINT_BOB
    std::cout << "Bob" << std::endl;
#endif
}




int main(int argc, const char * argv[]) {

    
    //Test3();
    //Test4();
    //Test5();
    //Test6();
    Test8();
 
    return 0;
}















int doPrint(int x)
{
#define  哈哈
    std::cout << "In doPrint()"<< x << std::endl;
    return x;

}
