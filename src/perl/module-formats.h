#include <irssi/src/fe-common/core/formats.h>

enum {
	IRCTXT_MODULE_NAME,

	IRCTXT_FILL_1,

        TXT_SCRIPT_NOT_FOUND,
        TXT_SCRIPT_NOT_LOADED,
        TXT_SCRIPT_LOADED,
        TXT_SCRIPT_UNLOADED,
        TXT_NO_SCRIPTS_LOADED,
        TXT_SCRIPT_LIST_HEADER,
        TXT_SCRIPT_LIST_LINE,
        TXT_SCRIPT_LIST_FOOTER,
        TXT_SCRIPT_ERROR
};

extern FORMAT_REC feperl_formats[];
