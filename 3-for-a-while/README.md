# 3-for-a-while

> Last Update: 2021/11/2 0:10

## 写在前面

本仓库仅作为参考，请不要照抄代码，也请带着思考来阅读这些代码和readme。适合阅读本题解的人有：

1. 思考很长时间没有思路的同学
2. 解法始终无法拿到满分的同学
3. 想要优化自己代码的同学



## A Josephus谜题(josephus.c)

本题是十分著名的**约瑟夫问题**。软院的小朋友在大二的数据结构课上可能会再一次的遇到这个问题。该问题的思路是**模拟**：我们使用数组来存放这 $n$ 个人，并通过 $n - 1$ 次循环来剔除掉 $n - 1$ 个人。



### 思路

1. 初始化数组的索引`index = -1`，这里用 $-1$ 是因为第一个人我们是当做 $1$ 来数的，如果用 $index = 0$ 的话其实第一个人我们是当做 $0$ 来数的（why？
2. `index = (index + k) % size`，这里的`size`是数组的长度，可以知道每经过一次循环，数组长度都减一
3. 我们找到索引之后就将处于该索引的人删去，通过将数组后面的元素不断前移即可实现“删去”这一操作。
4. 删去之后我们需要将 `index--, size--`.
	1. `index--`的用途与前面将`index = -1`的用途是一样的，请自己思考
	2. `size--`是因为我们删去了一个人，需要将数组的范围缩小 $1$。

通过以上的**提醒**，可能你会稍微有点思路，但这其实不是最优解，或许你可以考虑一下降低**时间复杂度**和**空间复杂度**的解法是什么？

### 如何优化

> 提示一：这里的删除操作耗费的时间太久，必须要将该位置以后的数组全部遍历一遍
>
> 提示二：这是个数学问题，或许我们可以有公式推导出来？





## B 二进制转换(binary.c)

这题应该是这次作业中比较简单的一道题了。学过**计算系统基础**的大家都知道，计算机中的所有数据都是由二进制来表示的，整数也是如此，本题所做的就是将一串二进制数表示成整数。

本题思路也是**模拟**：对某个二进制数 $s_ns_{n-1}...s_1$，其十进制数表示为 $s_n \times 2^{n-1} + s_{n-1} \times x^{n-2} + \dots + s_1 \times 2^0$ ，因此我们只需要模拟这个过程即可。



### 注意！！！

本题的二进制数长度最多可能达到**30位**，即使我们使用了`long long`也会面临着溢出的风险，因此我们**应该用一个`char`数组来存储二进制数字**，避免溢出，与此同时，答案其实并不需要和我源代码写的一样用`long long`，因为`C`的`int`型是4个字节也就是32位，所以用`int`完全能够放得下30位的一个长度~

### 思路

1. 通过定义`product`表示 $2$ 的阶乘。

2. **从尾到头**遍历`char`数组，每次循环将`product *= 2`，这么做是为了省去每次都要计算 $2$ 的阶乘（实际上是多余的操作），节省了一重循环，优化了时间复杂度。

	> **从尾到头**遍历数组是因为我们读取数字的时候，二进制数的高位实际上是在`char`数组的低位的，所以我们要从`char`数组的最高位开始遍历（实际上是二进制数的最低位

3. 如果`char`数组的第 $i$ 位是 $1$，那么答案就加上 `product`，否则就跳过。

4. 循环结束，输出答案

### 思考

细心的你可能会发现，本题其实用的是**无符号数**的二进制数表示，即我们转换二进制数实际上只能够得到正数。我们知道，整数在计算机中是以补码的方式存储的，而补码是有符号位的，补码的负数是通过对其相对应的整数“**取反加一**”得到的，这样就可以表示正负数啦~

> 思考一：如果要将二进制**补码**转换成十进制，该怎么实现呢？
>
> 思考二：十进制转成补码又该怎么实现呢？
