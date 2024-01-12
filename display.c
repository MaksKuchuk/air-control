#include <stddef.h>
#define UNUSED(x) (void)(x)

int disp_init(void) {
    return 0;
}

int draw_text(char *str,  size_t s) {
    UNUSED(str);
    UNUSED(s);
    return 0;
}

int clear_screen(void) {
    return 0;
}