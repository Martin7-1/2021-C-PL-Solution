# README

## stack.c

### 题目描述

用数组模拟一个栈（不知道栈的定义的同学请自行 STFW，不知道 STFW 是什么意思的也请自行 STFW），支持的操作有

- push：向栈顶添加数据
- pop：弹出栈顶的数据
- top：查看栈顶的数据
- print：打印栈

### 输入格式

输入包含多行，第一行为一个正整数 n, 10\leqslant n\leqslant 10^4*n*,10⩽*n*⩽104，表示进行操作的次数。

接下来 n*n* 行，每行有四种可能

- push m：其中 m 为一个 char 类型的变量，表示向栈顶添加字符 m；

- pop：如果栈为空，则打印 Empty 并换行，否则弹出栈顶的字符（不用打印）；

- top：如果栈为空，则打印 Empty 并换行，否则打印栈顶的字符（不用弹出）；

- print：如果栈为空，则打印 Empty 并换行，否则按照如下格式自顶向下打印整个栈：

	```
	| c |
	| c |
	 ...
	| c |
	|===|  其中，c 为栈中字符（注意 c 的两边都有一个空格）
	```

### 输出格式

对于每一次 pop / top / print 操作。输出相印内容。



### 什么是栈



### 有关<string.h>

https://www.programiz.com/c-programming/library-function/string.h/strcmp