module.exports = grammar({
    name: "cfg",

    extras: $ => [
        /[ \t]/
    ],

    rules: {
        config: $ => repeat(seq(
            optional($.command),
            choice(";", "\n", $.comment)
        )),
        comment: $ => token(prec(1, seq("//", /[^;\n]*/))),
        command: $ => seq(
            field("name", $.token),
            repeat(field("argument", $.token))
        ),
        token: $ => choice(
            //Quoted token, optionally missing an end quote (that is therefore terminated by a newline). Can contain any character except a newline.
            /"[^\n"]*"?/,
            //4 special characters that always become their own tokens (unless quoted).
            /['():]/,
            //Unquoted token that can contain quote characters. After a quote, a semicolon may occur without ending the token. Subsequent quotes disallow semicolons, and then allow, and so on.
            /[^\n '():";]+("[^\n '():"]*"[^\n '():";]*)*("[^\n '():"]*)?/,
        )
    }
});
