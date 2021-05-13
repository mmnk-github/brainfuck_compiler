# brainfuck_compiler
brainfuckをC言語に変換してCコンパイラに投げるだけのコンパイラもどきです。Python3とgccコンパイラが動くなら動きます。

# How to use
1. brainfuckのコードが書かれたファイルを用意します。
1. `python compiler.py CODE_NAME OUTPUT_NAME`の形式でPythonファイルを実行します。
`CODE_NAME`は先ほど書いたファイルまでの相対パス、`OUTPUT_NAME`は最終的な出力ファイルの名前です。
`CODE_NAME`は指定する必要がありますが、`OUTPUT_NAME`は省略可能で、特に指定しない場合`a`であると見なされます。
1. 正しくコンパイルできれば`OUTPUT_NAME.exe`が出力されます。

ご自由にお使いください。
