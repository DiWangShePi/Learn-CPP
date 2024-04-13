# Learn-CPP

>***The question isn't why I am learning CPP, but rather why you aren't learning CPP.***

#### Introduction to CPP



#### How Does CPP Work

我们用`HellWorld/helloworld.cpp` 中的内容作为一个例子：

```cpp
#include <iostream>  // preprocessor statement

using namespace std;

int main() {
    std::cout << "Hello World!" << std::endl;
    exit(0);
}
```

首先我们有`#include <iostream>`语句，这是一条预处理指令。在CPP中，任何以#开头的都是预处理指令。当编译器收到源文件时，它所作的第一件事就是处理所有的预处理指令。这也是为什么它们被称作预处理指令，因为它们发生在真正的编译之前。

在这里，我们会找一个名为`iostream`的文件，并将文件中的所有内容复制粘贴到目前这个文件中。这些文件通常被称为头文件。

这个文件会为我们定义一个名为`cout`的函数，它使我们可以打印东西到控制台。

```cpp
int main() {
    std::cout << "Hello World!" << std::endl;
    exit(0);
}
```

随后我们有主函数，每个CPP程序都有这样一个函数，他被称为函数的入口。也就是说，当我们要运行我们的程序时，计算机会从这里开始。在这里，计算机会一行行的执行其中的指令。函数调用或者控制流语句会更改执行的流程，但总体而言，程序是被一行一行执行的。

在这里，第一个要执行的指令就是在控制台输出"Hello World!"。在那之后，程序退出。主函数的声明里定义了函数的返回类型，但作为一个特殊的函数，它其实可以不需要返回。

>Not too bad, right?

接下来，我们来细致的解释一下输出"Hello World!"的这行代码。

```cpp
std::cout << "Hello World!" << std::endl;
```

`<<` 这一符号其实是被重载的符号，我们可以将其想象成一个函数，换句话说，这句话也可以被写成这样：

```cpp
std::cout.print("Hello World!").print(std::endl); // 结尾的endl是一个换行符号
```

> 也不算很细致

