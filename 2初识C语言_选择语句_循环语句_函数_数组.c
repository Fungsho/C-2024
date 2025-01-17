#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h> //include包括包含的意思 stdio.h 头文件 其中包含了一些常用的输入输出函数的声明
#include <string.h>//是 C 语言标准库中的一个头文件，它包含了一些对字符串操作的函数声明

////==========================================选择语句==========================================
////C语言实现选择:if else (条件分支逻辑)和 siwtch (实现多分支选择的关键字)
//int main()
//{
//	int diming = 0;	//变量初始化
//	printf("旅客你好\n");
//	printf("你想去哪里?\n1.大理\n2.叙利亚\n");
//	//在 C 语言中，& 是一个操作符，用于获取变量的地址。
//	scanf("%d", &diming);//scanf 是 C 语言中用于从标准输入（通常是键盘）中读取输入数据的函数。
//
//	//if 和 else 是 C 语言中用于控制程序流程的关键字，它们通常一起使用来实现条件分支逻辑。
//	//if-else 语句可以根据条件执行不同的代码逻辑，从而实现程序的分支控制。如果 if 后面的条件为真，
//	//则执行与 if 相关联的代码块；否则，执行与 else 相关联的代码块。
//	if (diming == 1)	//= ：赋值运算符	== ：相等运算符   如果变量diming等于scanf输入的值,则输出西藏
//	{
//		printf("我想去西藏!");
//	}
//	else
//	{
//		printf("我想去叙利亚!");
//	}
//	return 0;
//}

////==========================================循环语句==========================================
//// C语言如何实现循环,while语句	for语句	do....while语句
//int main()
//{
//	//做一个循环写代码的打印输出并判断
//	printf("准备写代码\n");
//	int daima = 0;
//	while (daima < 200)	//这是一个 while 循环，它会重复执行其后面的代码块，直到条件不再满足（即 daima 不小于 200）为止。
//	{
//		//++： 自增操作符，用于将变量的值增加 1。	+：加法操作符，用于将两个数相加。
//		daima++;	//将 daima 的值增加 1，每次循环都会使 daima 的值递增
//		printf("代码:%d\n", daima); //先将 num 自增，然后再打印出当前的 num 值。
//	}
//	if (daima >= 200)
//	{
//		printf("你已经达成200行代码成就");
//	}
//	else 
//	{
//		printf("你没有达成");
//	}
//	return 0;
//}



////===================函数==============================
////自定义函数,可以反复调用,节省代码量.         例如写个计算器,把加减乘除分别做函数,模块划分了更加明了清晰.
////求两个整数的和
//int main()
//{
//	//初始化
//	int num1 = 0;
//	int num2 = 0;
//	//输入
//	//这是要存储读取到的整数的变量的地址。& 运算符用于获取变量的地址，这样 scanf 函数就可以将输入的值存储到正确的位置。
//	scanf("%d+%d", &num1, &num2);//这是一个格式化字符串，告诉 scanf 应该如何读取输入。%d 表示要读取的数据应该是整数，而 + 则表示在输入中需要匹配一个加号字符。
//	//计算
//	int sum = num1 + num2;
//	//输出
//	printf("%d\n", sum);
//	return 0;
//}
////数学对于函数的理解为:
////如果 f(x, y) = x + y，那么这个函数表示对两个参数求和。
////如果 f(x, y) = x * y，那么这个函数表示对两个参数求乘积。
////如果 f(x, y) = x ^ y，那么这个函数表示对 x 进行 y 次幂运算。

////写一个自定义加法函数:  可以理解成,原材料  输送给>>>工厂(函数)加工>>>输出产品
////int(返回类型)+ZIDINGYIHANSHU(函数名)+int x,int y(参数),大括号内{函数体}
//int ZIDINGYIHANSHU(int x, int y)
//{
//    // 声明一个整数变量 `z`，并将其初始化为 0    
//    int z = 0;
//    // 将 `x` 和 `y` 相加，并将结果赋值给 `z`
//    z = x + y;
//    // 返回 `z` 的值
//    return z;
//}
////这段代码定义了一个名为 ZIDINGYIHANSHU 的自定义函数，它接受两个整数参数 x 和 y，将它们相加并返回结果。
////然后在 main 函数中调用了这个自定义函数，并将返回值存储在 sum 变量中，最后打印出来。
//int main()
//{
//    // 声明两个整数变量 `n1` 和 `n2`
//    int n1 = 7;
//    int n2 = 0;
//    // 调用自定义函数 `ZIDINGYIHANSHU`，传入参数 `n1` 和 `n2`，并将返回值存储在 `sum` 变量中
//    int sum = ZIDINGYIHANSHU(n1, n2);
//    // 打印 `sum` 的值
//    printf("%d", sum);
//    // 返回 0，表示程序执行成功
//    return 0;
//}

////代码简化上方自定义函数
//// 定义一个自定义函数，将两个整数相加并返回结果
//int ZIDINGYIHANSHU(int x, int y) 
//{
//    return x + y; //可以加括号(x+y)也可以不加,最好加上
//}
//
//int main() 
//{
//    // 调用自定义函数，将参数传入并打印结果
//    printf("%d\n", ZIDINGYIHANSHU(7, 0));
//    return 0;
//}

////=====================数组========================================
////一组相同类型元素的集合 ,数组下标:数组在内存中每个值都有自己的序号从0开始 (即使数组内容都是0数组的下标也是从0开始12345...)
//int main()
//{
//	////0~9 挨个写过于繁琐,可用数组解决
//	//int a = 0;
//	//int b = 1;
//	//int c = 3;
//	////0~9是一组整数,相同类型的值
//	
//	//arr[10]数组语法规定使用{} 数组名字可以自定义
//	int arr[10] = { 6,7,8,9,10,11,12,13,14,15 };
//	char aaa[10] = { 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a', 'a' };
//	double shuangjing[15];
//	printf("%d\n", arr[7]);	//打印数组第8个元素.因为从0开始. 等于13
//	//如果要打印数组里的所有内容呢? 可以利用循环
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%f ", arr[i]);//arr[i] 表示数组 arr 中的第 i 个元素 第一次循环i=0 第二次等于1.....
//		i = i + 1;
//		//i++; 也可以这样写
//	}
//	return 0;
//}





//============================作业回顾============================
//一...数据类型 (内置)
//整数类型（Integer Types）：
//int：整数类型，通常表示有符号整数，可以存储大约在 - 32767 到 32767 之间的整数。
//char：字符类型，用于存储单个字符，通常占据一个字节的内存空间。
//short：短整数类型，通常表示有符号短整数，可以存储大约在 - 32767 到 32767 之间的整数。
//long：长整数类型，通常表示有符号长整数，可以存储更大范围内的整数。
//浮点类型（Floating - Point Types）：
//float：单精度浮点数类型，通常占据 4 个字节的内存空间，用于存储小数。
//double：双精度浮点数类型，通常占据 8 个字节的内存空间，提供更高的精度。
//无符号整数类型（Unsigned Integer Types）：
//unsigned int：无符号整数类型，可以存储大约在 0 到 65535 之间的整数。
//unsigned char：无符号字符类型，通常占据一个字节的内存空间，用于存储无符号字符。
//unsigned short：无符号短整数类型，可以存储大约在 0 到 65535 之间的整数。
//unsigned long：无符号长整数类型，可以存储更大范围内的整数。
//其他类型：
//void：空类型，用于表示没有值的情况。
//bool：布尔类型，通常用来表示真值或假值，C 语言标准库中没有提供该类型，但可以通过一些库来实现。
// 
//二...数据类型 (自定义)
//结构体
//枚举
//联合等
// 
//三...c语言()[] {}区别
//在 C 语言中，(), [], {} 分别表示不同的语法结构，它们有着不同的作用和含义。让我为你解释一下它们的区别：
//括号()：
//在 C 语言中，括号() 通常用于函数调用和表达式优先级的指定。
//当你调用一个函数时，你需要使用括号将函数的参数括起来，例如：printf("Hello, world!\n"); ，这里的() 就表示函数调用。
//在表达式中，括号也可以用来明确指定运算的顺序，例如：(3 + 4) * 5，这里的括号表示先进行加法运算，然后再乘以 5。
//方括号[]：
//方括号[] 用于声明数组和访问数组元素。
//在声明数组时，你需要指定数组的大小，例如：int numbers[5]; ，这里的[] 表示数组的大小为 5。
//在访问数组元素时，你需要使用方括号来指定元素的下标，例如：numbers[0] 表示访问数组 numbers 的第一个元素。
//大括号{}：
//大括号{} 通常用于定义代码块，也称为复合语句或复合语句块。
//在 C 语言中，大括号可以将一组语句组合在一起，形成一个代码块，在这个代码块中可以执行多个语句。
//大括号还用于初始化数组、结构体和初始化器列表等。
//综上所述，() 用于函数调用和表达式优先级的指定，[] 用于声明数组和访问数组元素，而{} 用于定义代码块。这些括号在 C 语言中各有不同的作用和含义。
//
//四...打印一个小飞机	//复制小技巧直接选中一行任意位置按ctrl+c即可复制,不用选中.
//int main()
//{
//	printf("     **     \n");
//	printf("     **     \n");
//	printf("************\n");
//	printf("************\n");
//	printf("    *  *    \n");
//	printf("    *  *    \n");
//	return 0;
//}
//五...输出学生信息
//int main()
//{
//	printf("Name    Age    Gender\n");
//	printf("---------------------\n");
//	printf("Jack    18     man\n");
//	return 0;
//}
//六...计算表达式的值
//int main()
//{
//	int a = 40;
//	int c = 212;
//	int r = (-8 + 22) * a - 10 + c / 2;
//	printf("%d\n",r);
//	return 0;
//}
//七...比较两个数字的较大值并输出.
//int Daxiao(int a, int b)
//{
//	if (a > b)
//		return a;
//	else
//		return b;//一个函数可以有多个 return 语句，这是因为 return 语句的作用是提前结束函数的执行，
//				 //并将控制权返回给调用者。当函数执行到 return 语句时，它会立即退出，并将指定的值返回给调用者。
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", & a, &b);
//	//比较大小
//	int r = Daxiao(a, b);
//	printf("%d\n", r);
//	return 0;
//}

//八...计算Y的值
//int main()
//{
//	//输入X
//	int x = 0;
//	int y = 0;
//	scanf("%d",&x); //如果不使用&，而是直接传递变量的值，那么scanf函数将无法修改原始变量的值，因为它只能修改传递进来的副本，而不是原始变量本身。
//	//判断
//	if (x > 0)
//		y = -1;
//	else if (x = 0)//否则如果 else if 结构允许你在一个条件不满足时检查另一个条件
//		y = 0;
//	else
//		y = 1;
//	//输出Y
//	printf("%d\n", y);
//	return 0;
//}



//其他知识
//I0型
//所有的代码都是自己来完成和实现
//输入，计算，输出
//
//接口型
//只需要完成一个函数
//假设其他需要的数据都是准备好的~
// 
// 区分0
//0 - 是数字0 它的值等于0
//'0' - 是字符0 - ASCII码等于48
//\0 - 是字符 - ASCII码等于0	数组中的值0跟其一样.
//EOF -	end of file 文件的结束标志 值是-1

//只有字符串类型才会有\0 但是C语言中处理字符数组作为字符串 确保在数组的末尾添加一个空字符 '\0' 是很重要的
//char str[7] = { 'a', 'a' };
//那么数组 str 将会被初始化为 'a', 'a', '\0', '\0', '\0', '\0', '\0'，其中剩余的 5 个元素都会被自动初始化为 \0。这样的结果是，
//数组 str 中的前两个元素是字符 'a'，而后面的五个元素都是空字符，表示字符串的结束。

//C语言和C++都是流行的编程语言，它们有一些相似之处，但也有很多区别。以下是它们之间的一些主要区别：
//
//面向对象编程支持：
//
//C语言是一种过程式编程语言，不支持面向对象编程（OOP）。
//C++是一种多范式编程语言，支持过程式编程、面向对象编程和泛型编程。因此，C++可以使用类、继承、多态等面向对象的概念。
//标准库：
//
//C语言的标准库较小，主要包括了一些基本的输入输出函数、字符串处理函数等。
//C++的标准库更为丰富，包括了C语言的标准库外，还有大量支持面向对象编程的类和模板。
//指针和引用：
//
//在C语言中，指针是一种重要的概念，用于直接访问内存地址。
//C++中也支持指针，但引入了引用（reference）的概念，它提供了更安全、更方便的方式来操作对象。
//内存管理：
//
//在C语言中，内存管理主要由程序员手动管理，包括内存分配（malloc、calloc等）和释放（free）。
//在C++中，引入了自动内存管理机制，比如构造函数和析构函数，以及智能指针（smart pointers）等，可以更方便地管理内存。
//编译器支持：
//
//大多数C编译器也支持C++，因此C代码通常可以在C++编译器中编译通过。
//但是，C++引入了一些新的关键字和语法，因此不是所有的C代码都能够直接在C++中编译通过。
//总的来说，C++可以看作是在C语言基础上进一步发展而来的语言，它继承了C语言的优点，并添加了更多的特性和功能，特别是面向对象编程的支持，使得它更适合开发复杂的软件系统。

//
//
//int main()
//{
//	int n = 10;
//	int arr[n];//不支持C99编译器则不可以这样写
//	//在 C99 标准之前，数组大小都是常量或者常量表达式来指定
//	int arr1[10] = { 0 };//ok
//	int arr2[4 + 6] = { 1,2,3 };//ok
//
//	//在 C99 标准之后，支持了变长数组。允许数组大小是变量，但是这种指定方式的数组，不能初始化
//	int m = 100;
//	int arr3[m];//不支持C99编译器则不可以这样写
//  int arr3[m]={1,2,3,4};//这样写是错误的,不管支不支持C99 都不能初始化{}
//	//VS对C99支持不友好，不支持变长的数组。 在其他环境有的可以支持。
//	return 0;
//}
//
//int main()
//{
//
//	char arr[10] = "hahahahaa";
//	char arr1[10] = { "ccchahaa" };//在初始化数组时，使用大括号 {} 可以为数组指定精确的初始值，而省略大括号会让编译器自动处理数组的大小和初始值。
//	int arr2[5] = {1};//VS 整数数组必须加上初始化大括号{}
//	printf("%s\n%s\n", arr, arr2);
//	return 0;
//}
//只要涉及到输入输出内容的时候,必须要告诉编译器格式("格式控制字符串")



//理解 C 语言中的各种括号和标点符号的使用确实很重要，因为它们可以改变表达式的含义和优先级。让我简单地解释一下它们的用法：
//
//圆括号()：
//
//用于将表达式分组，明确表达式的计算顺序。
//用于函数调用，将参数传递给函数。
//用于控制结构，如 if、for、while 等。
//方括号[]：
//
//用于数组的索引操作，表示访问数组中的元素。
//大括号{}：
//
//用于定义代码块，将多条语句组织在一起，例如在函数体、循环体和条件语句体中。
//用于初始化数组和结构体。
//逗号, ：
//
//用于分隔多个表达式或变量，在函数调用、变量声明、逗号表达式中等。
//分号; ：
//
//用于结束语句，在 C 语言中每条语句都以分号结尾。
//冒号 : ：
//
//用于标记标签，例如在 switch 语句中的 case 标签和 default 标签。
//用于指定成员访问运算符.和成员指针访问运算符->的左侧，表示结构体或联合体的成员名称。
//双引号 ""：
//
//用于表示字符串字面量。
//单引号 ''：
//
//用于表示字符字面量。
//点号.：
//
//用于访问结构体的成员。
//箭头->：
//
//用于访问结构体指针的成员。
//这些符号的使用是 C 语言中的基础，熟练掌握它们的用法可以帮助你编写清晰、正确的代码。

















////C语言是结构化的程序设计语言
////顺序结构
////选择结构
////循环结构
//
////要深刻了解
////	语法
////	转义字符
////    函数
////	库函数
////	标识符,标志符
////	格式控制符
////	ASCII编码
////	表达式
////	语法
////	操作符
////	关键字