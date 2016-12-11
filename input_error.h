#ifndef H_ERRORS_H
#define H_ERRORS_H


enum error {
    INCORRECT_NUMBER_OF_COMMAND_LINE_ARGUMENTS = 1,
    FILE_FAILED_TO_OPEN,
	FILE_FAILED_TO_CLOSE,
	PARSING_ERROR_INVALID_FORMAT,
    PARSING_ERROR_EMPTY_FILE,
	PARSING_ERROR_IMPROPER_VALUE
};

#endif
