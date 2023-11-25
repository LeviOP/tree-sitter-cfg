vim.filetype.add({
    extension = {
        cfg = "cfg"
    }
})

require("nvim-web-devicons").set_icon {
    ["cfg"] = {
        icon = "",
        name = "Configuration"
    }
}

local parser_config = require("nvim-treesitter.parsers").get_parser_configs()
parser_config.cfg = {
    install_info = {
        url = "https://github.com/LeviOP/tree-sitter-cfg",
        files = { "src/parser.c" },
        branch = "main"
    }
}
