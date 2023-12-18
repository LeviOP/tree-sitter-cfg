(command .
  (token) @function.call
  (token) @parameter)

((token) @comment
  (#match? @comment "^//"))

";" @punctuation.delimiter
