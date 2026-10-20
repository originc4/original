# C 入门示例

这是一个简单的 C 语言程序：读取两个数字并输出它们的和。

## 编译和运行

使用 GCC 或 Clang：

```sh
cc -std=c11 -Wall -Wextra -pedantic main.c -o c-starter
./c-starter
```

Windows 用户使用 MinGW：

```sh
gcc -std=c11 -Wall -Wextra -pedantic main.c -o c-starter.exe
./c-starter.exe
```

运行后，请输入两个数字并用空格分隔，例如：`12.5 3`。
