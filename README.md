# `output`
A command to output text, useful in case you can't use `echo`.

I wrote this as my first C program. Yeah.

Use it like this:
```sh
output "<String here>"
```
If you run simply `output`, it produces an error.
## Install
First, make sure the following software is installed:
* GNU Compiler Collection (`gcc`) or Clang compiler
* GNU Core Utilities
* Manual database (to install the manual page)
* GNU `make`
* [Git](https://git-scm.com) (to clone this repository)

Then, clone this repository with Git:
```shell
git clone https://github.com/Tyler887/output --depth 1
cd output
```

Then, compile the source code:
```shell
gcc output.c -o output # GCC; or
clang output.c -o output # Clang
```

Install the man page:
```shell
sudo cp output.1 /usr/share/man/man1/output.1
sudo mandb
```

To complete installation, run the installation command:
```shell
sudo install output /usr/bin/output
```
