# Generate Parser with antlr4

## Install

Follow the official [installation guide](https://github.com/antlr/antlr4/blob/master/doc/getting-started.md#installation) to install antlr4 on your system.

## Generate

Generate the parser with the following command. Learn the [command line options](https://github.com/antlr/antlr4/blob/master/doc/tool-options.md) if you are unsure.

```bash
# Change directory to parser with 
# cd <path-to-repo>/src/parser
cd ./src/parser

# generate parser in C++ (-Dlanguage=Cpp)
# with visitor and listener (-visitor -listener)
# from the grammar file ./Valgo.g4
antlr4 -Dlanguage=Cpp -visitor -listener Valgo.g4
```
