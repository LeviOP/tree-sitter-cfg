module.exports = grammar({
    name: "cfg",

    extras: $ => [
        /[\x01-\x20]/
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
            //Characters that always become their own tokens
            /[{}()':,]/,
            //Unquoted token that can contain quote characters. After a quote, a semicolon may occur without ending the token. Subsequent quotes disallow semicolons, and then allow, and so on.
            /[^\n {}()':,";]+("[^\n {}()':,"]*"[^\n {}()':,";]*)*("[^\n {}()':,"]*)?/,
            //Comment, which is technically just a token which isn't added to cmd_argv by COM_Parse, but is still included in cmd_args
            /\/\/[^;\n]*/
        )
    }
});
