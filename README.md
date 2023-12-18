# tree-sitter-cfg

GoldSrc `.cfg` grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter/). This grammar and its highlights are mod-agnostic, and only attempt to replicate the way that GoldSrc tokenizes console commands. 

While this grammar is designed to accurately parse GoldSrc configs, it will work fine for basic Source configs. Its usage for Source configs will start to break down if you try to parse more abstract things like quoted tokens without any white space (`echo"test"` and `"echo"test` are parsed very differently in Source and GoldSrc).

## Known issues

* Highlighting for some commands might not be accurate to the way GoldSrc handles the command. For example, the `say` command, instead of concatenating each argument of the command, takes all the arguments of the command as a string and uses this as what will be said. This means that things like comments and quoted tokens will _not_ be interpreted as comments or quoted tokens, even though the highlighting makes it appear as though that is the case.

## Usage
* [with Neovim](nvim/)
