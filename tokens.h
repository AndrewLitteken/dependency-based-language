/* token.h
 * Andrew Litteken
 * The enumeration of tokens needed for scanner
 * 2017-09-15
 * */
#include <string>
using namespace std;

typedef enum {
	TOKEN_EOF=0,
	TOKEN_COMMENT,
	TOKEN_IDENTIFIER,
	TOKEN_INTEGER_LITERAL,
	TOKEN_BOOL_LITERAL,
	TOKEN_FP_LITERAL,
	TOKEN_RIGHT_PAREN,
	TOKEN_LEFT_PAREN,
	TOKEN_RIGHT_BRACKET,
	TOKEN_LEFT_BRACKET,
	TOKEN_RIGHT_BRACE,
	TOKEN_LEFT_BRACE,
	TOKEN_INCREMENT,
	TOKEN_DECREMENT,
	TOKEN_INCEQ,
    TOKEN_DECEQ,
    TOKEN_MULTEQ,
    TOKEN_DIVEQ,
    TOKEN_NOT,
	TOKEN_EXPONENT,
	TOKEN_MULTIPLY,
	TOKEN_DIVIDE,
	TOKEN_MOD,
	TOKEN_ADD,
	TOKEN_MINUS,
	TOKEN_LT,
	TOKEN_LE,
	TOKEN_GT,
	TOKEN_GE,
	TOKEN_EQ,
	TOKEN_NE,
	TOKEN_AND,
	TOKEN_OR,
	TOKEN_IN,
    TOKEN_ASSIGN,
	TOKEN_PRINT,
	TOKEN_FUNCTION,
    TOKEN_NEWLINE,
   	TOKEN_FOR,
	TOKEN_IF,
	TOKEN_ELSE,
	TOKEN_RETURN,
	TOKEN_WHILE,
	TOKEN_COLON,
	TOKEN_COMMA,
	TOKEN_ERROR
} token_t;

string token_name(token_t t);
