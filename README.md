# tree-sitter-cfg

GoldSrc `.cfg` grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter/). This grammar and its highlights are mod-agnostic, and only attempt to replicate the way that GoldSrc tokenizes console commands. 

While this grammar is designed to accurately parse GoldSrc configs, it will work fine for basic Source configs. Its usage for Source configs will start to break down if you try to parse more abstract things like quoted tokens without any white space (`echo"test"` and `"echo"test` are parsed very differently in Source and GoldSrc).

## Known issues

* Empty strings executed as commands - In GoldSrc, an empty string executed as a command will access (semi-)random memory and use that as a command if there isn't a command assigned to an empty string. This parser makes no attempt to handle that fact, although you really should never ever run into this as a problem. If you do encounter this, you can create an alias to an empty string. (`alias "";`)
