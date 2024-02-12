#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 15
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 16
#define ALIAS_COUNT 0
#define TOKEN_COUNT 9
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 5

enum {
  anon_sym_SEMI = 1,
  anon_sym_LF = 2,
  anon_sym_DQUOTE = 3,
  aux_sym__quoted_token_token1 = 4,
  sym_quoted_token = 5,
  aux_sym_unquoted_token_token1 = 6,
  aux_sym_unquoted_token_token2 = 7,
  aux_sym_unquoted_token_token3 = 8,
  sym_config = 9,
  sym_command = 10,
  sym__token = 11,
  sym__quoted_token = 12,
  sym_unquoted_token = 13,
  aux_sym_config_repeat1 = 14,
  aux_sym_command_repeat1 = 15,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_LF] = "\n",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__quoted_token_token1] = "_quoted_token_token1",
  [sym_quoted_token] = "quoted_token",
  [aux_sym_unquoted_token_token1] = "unquoted_token_token1",
  [aux_sym_unquoted_token_token2] = "unquoted_token_token2",
  [aux_sym_unquoted_token_token3] = "unquoted_token_token3",
  [sym_config] = "config",
  [sym_command] = "command",
  [sym__token] = "_token",
  [sym__quoted_token] = "_quoted_token",
  [sym_unquoted_token] = "unquoted_token",
  [aux_sym_config_repeat1] = "config_repeat1",
  [aux_sym_command_repeat1] = "command_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__quoted_token_token1] = aux_sym__quoted_token_token1,
  [sym_quoted_token] = sym_quoted_token,
  [aux_sym_unquoted_token_token1] = aux_sym_unquoted_token_token1,
  [aux_sym_unquoted_token_token2] = aux_sym_unquoted_token_token2,
  [aux_sym_unquoted_token_token3] = aux_sym_unquoted_token_token3,
  [sym_config] = sym_config,
  [sym_command] = sym_command,
  [sym__token] = sym__token,
  [sym__quoted_token] = sym__quoted_token,
  [sym_unquoted_token] = sym_unquoted_token,
  [aux_sym_config_repeat1] = aux_sym_config_repeat1,
  [aux_sym_command_repeat1] = aux_sym_command_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__quoted_token_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_quoted_token] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_unquoted_token_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unquoted_token_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unquoted_token_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_config] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym__token] = {
    .visible = false,
    .named = true,
  },
  [sym__quoted_token] = {
    .visible = false,
    .named = true,
  },
  [sym_unquoted_token] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_config_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_argument = 1,
  field_name = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_argument] = "argument",
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_argument, 0},
  [2] =
    {field_argument, 1, .inherited = true},
    {field_name, 0},
  [4] =
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(2);
      if (lookahead == '\n') ADVANCE(4);
      if (lookahead == ' ') SKIP(0)
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == ';') ADVANCE(3);
      if (('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          lookahead == ':' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(12);
      if ((1 <= lookahead && lookahead <= 31)) ADVANCE(13);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == ';') ADVANCE(3);
      if ((1 <= lookahead && lookahead <= ' ')) SKIP(1)
      END_STATE();
    case 2:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(4);
      if ((1 <= lookahead && lookahead <= 31)) ADVANCE(13);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(5);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(14);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym__quoted_token_token1);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym__quoted_token_token1);
      if (lookahead == '"') ADVANCE(8);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_quoted_token);
      if ((1 <= lookahead && lookahead <= '\t') ||
          (11 <= lookahead && lookahead <= ' ')) ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(11);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_quoted_token);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_unquoted_token_token1);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_unquoted_token_token2);
      if (lookahead == '\n') ADVANCE(4);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '/') ADVANCE(15);
      if ((1 <= lookahead && lookahead <= 31)) ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != ' ' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(16);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_unquoted_token_token2);
      if (lookahead == '"') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_unquoted_token_token2);
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_unquoted_token_token2);
      if (lookahead == '"') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_unquoted_token_token2);
      if (lookahead == '"') ADVANCE(18);
      if (lookahead == ';') ADVANCE(14);
      if (lookahead == ' ' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          lookahead == ':' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_unquoted_token_token2);
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == ' ' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          lookahead == ':' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_unquoted_token_token3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';') ADVANCE(19);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 9},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_unquoted_token_token1] = ACTIONS(1),
    [aux_sym_unquoted_token_token2] = ACTIONS(1),
    [aux_sym_unquoted_token_token3] = ACTIONS(1),
  },
  [1] = {
    [sym_config] = STATE(13),
    [sym_command] = STATE(11),
    [sym__token] = STATE(4),
    [sym__quoted_token] = STATE(4),
    [sym_unquoted_token] = STATE(4),
    [aux_sym_config_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [aux_sym_unquoted_token_token1] = ACTIONS(9),
    [aux_sym_unquoted_token_token2] = ACTIONS(9),
    [aux_sym_unquoted_token_token3] = ACTIONS(9),
  },
  [2] = {
    [sym_command] = STATE(11),
    [sym__token] = STATE(4),
    [sym__quoted_token] = STATE(4),
    [sym_unquoted_token] = STATE(4),
    [aux_sym_config_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_SEMI] = ACTIONS(13),
    [anon_sym_LF] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [aux_sym_unquoted_token_token1] = ACTIONS(9),
    [aux_sym_unquoted_token_token2] = ACTIONS(9),
    [aux_sym_unquoted_token_token3] = ACTIONS(9),
  },
  [3] = {
    [sym_command] = STATE(11),
    [sym__token] = STATE(4),
    [sym__quoted_token] = STATE(4),
    [sym_unquoted_token] = STATE(4),
    [aux_sym_config_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_SEMI] = ACTIONS(17),
    [anon_sym_LF] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(20),
    [aux_sym_unquoted_token_token1] = ACTIONS(23),
    [aux_sym_unquoted_token_token2] = ACTIONS(23),
    [aux_sym_unquoted_token_token3] = ACTIONS(23),
  },
  [4] = {
    [sym__token] = STATE(9),
    [sym__quoted_token] = STATE(9),
    [sym_unquoted_token] = STATE(9),
    [aux_sym_command_repeat1] = STATE(5),
    [anon_sym_SEMI] = ACTIONS(26),
    [anon_sym_LF] = ACTIONS(26),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [aux_sym_unquoted_token_token1] = ACTIONS(9),
    [aux_sym_unquoted_token_token2] = ACTIONS(9),
    [aux_sym_unquoted_token_token3] = ACTIONS(9),
  },
  [5] = {
    [sym__token] = STATE(9),
    [sym__quoted_token] = STATE(9),
    [sym_unquoted_token] = STATE(9),
    [aux_sym_command_repeat1] = STATE(6),
    [anon_sym_SEMI] = ACTIONS(28),
    [anon_sym_LF] = ACTIONS(28),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [aux_sym_unquoted_token_token1] = ACTIONS(9),
    [aux_sym_unquoted_token_token2] = ACTIONS(9),
    [aux_sym_unquoted_token_token3] = ACTIONS(9),
  },
  [6] = {
    [sym__token] = STATE(9),
    [sym__quoted_token] = STATE(9),
    [sym_unquoted_token] = STATE(9),
    [aux_sym_command_repeat1] = STATE(6),
    [anon_sym_SEMI] = ACTIONS(30),
    [anon_sym_LF] = ACTIONS(30),
    [anon_sym_DQUOTE] = ACTIONS(32),
    [aux_sym_unquoted_token_token1] = ACTIONS(35),
    [aux_sym_unquoted_token_token2] = ACTIONS(35),
    [aux_sym_unquoted_token_token3] = ACTIONS(35),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(38), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_DQUOTE,
      aux_sym_unquoted_token_token1,
      aux_sym_unquoted_token_token2,
      aux_sym_unquoted_token_token3,
  [12] = 1,
    ACTIONS(40), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_DQUOTE,
      aux_sym_unquoted_token_token1,
      aux_sym_unquoted_token_token2,
      aux_sym_unquoted_token_token3,
  [21] = 1,
    ACTIONS(42), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_DQUOTE,
      aux_sym_unquoted_token_token1,
      aux_sym_unquoted_token_token2,
      aux_sym_unquoted_token_token3,
  [30] = 1,
    ACTIONS(44), 6,
      anon_sym_SEMI,
      anon_sym_LF,
      anon_sym_DQUOTE,
      aux_sym_unquoted_token_token1,
      aux_sym_unquoted_token_token2,
      aux_sym_unquoted_token_token3,
  [39] = 2,
    ACTIONS(46), 1,
      anon_sym_SEMI,
    ACTIONS(48), 1,
      anon_sym_LF,
  [46] = 1,
    ACTIONS(50), 1,
      sym_quoted_token,
  [50] = 1,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
  [54] = 1,
    ACTIONS(54), 1,
      aux_sym__quoted_token_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 12,
  [SMALL_STATE(9)] = 21,
  [SMALL_STATE(10)] = 30,
  [SMALL_STATE(11)] = 39,
  [SMALL_STATE(12)] = 46,
  [SMALL_STATE(13)] = 50,
  [SMALL_STATE(14)] = 54,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config, 1),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(3),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(12),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2), SHIFT_REPEAT(8),
  [26] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1, .production_id = 1),
  [28] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2, .production_id = 3),
  [30] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 4),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(12),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2, .production_id = 4), SHIFT_REPEAT(8),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_config_repeat1, 2),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquoted_token, 1),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 1, .production_id = 2),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quoted_token, 3),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [52] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_cfg(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
