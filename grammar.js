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
        command: $ => seq(
            field("name", $._token),
            repeat(field("argument", $._token))
        ),
        _token: $ => choice(
            $._quoted_token,
            $.unquoted_token
        ),
        _quoted_token: $ => seq("\"", $.quoted_token, token.immediate(optional("\""))),
        quoted_token: $ => /[^\n"]*/,
        unquoted_token: $ => choice(
            //All characters in `g_BreakSetIncludingColons` become their own tokens if unquoted
            /[{}()':]/,
            //Unquoted token that can contain quote characters. After a quote, a semicolon may occur without ending the token. Subsequent quotes disallow semicolons, and then allow, and so on.
            /[^\n {}()':";]+("[^\n {}()':"]*"[^\n {}()':";]*)*("[^\n {}()':"]*)?/,
            //Comment, which is technically just a token that gets ignored by COM_parse, but is still included in cmd_args
            /\/\/[^;\n]*/
        )
    }
});
