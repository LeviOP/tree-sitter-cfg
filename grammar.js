module.exports = grammar({
    name: "cfg",

    extras: $ => [
        " "
    ],

    rules: {
        config: $ => repeat(seq(
            optional($.command),
            choice(";", "\n")
        )),
        command: $ => repeat1($.token),
        token: $ => choice(
            //Quoted token, optionally missing an end quote (that is therefore terminated by a newline). Can contain any character except a newline.
            /"[^\n"]*"?/,
            //All characters in `g_BreakSetIncludingColons` become their own tokens if unquoted
            /[{}()':]/,
            //Unquoted token that can contain quote characters. After a quote, a semicolon may occur without ending the token. Subsequent quotes disallow semicolons, and then allow, and so on.
            /[^\n {}()':";]+("[^\n {}()':"]*"[^\n {}()':";]*)*("[^\n {}()':"]*)?/,
            //Comment, which is technically just a token that gets ignored by COM_parse, but is still included in cmd_args
            /\/\/[^;\n]*/
        )
    }
});
