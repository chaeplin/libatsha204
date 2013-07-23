#include "error.h"

const char *error_name(int err) {
	if (err == ERR_OK) {
		return "OK";
	} else if (err == ERR_CRC) {
		return  "CRC doesn't match";
	} else if (err == ERR_SEND) {
		return "Couldn't send packet";
	} else if (err == ERR_SEND) {
		return "Couldn't read packet";
	} else if (err == ERR_WAKE_NOT_CONFIRMED) {
		return "Wake not confirmed";
	} else {
		return "Error code is not in the list";
	}
}
