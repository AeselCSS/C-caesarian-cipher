# Ceasarian Cipher

To compile the project, use the following command:

```sh
gcc -Wall -I./include -I./src/ui -o ./build/caesar ./src/*.c ./src/ui/*.c
```

## Running the program

On unix-based systems, run the compiled program by using the following command:

```sh
./build/caesar
```

On Windows-based systems, run the compiled program by using the following command:

```sh
./build/caesar.exe
```

## Using the program

The program starts by giving the user the choice of either encrypting or decrypting. Choose what you want to do, follow the instructions and see the magic unfold before your eyes.

Try decrypting this
```sh
Wkh rqob zdb wr ohduq d qhz surjudpplqj odqjxdjh lv eb zulwlqj surjudpv lq lw. - Ghqqlv Ulwfklh
```
with a shift value of 3.

## Development Environment
- **Machine**: Intel-based MacBook Pro
- **Operating System**: macOS Sonoma (14.6.1)
- **Compiler**: gcc-14 (Homebrew GCC 14.2.0)