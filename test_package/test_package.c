#include <uchardet/uchardet.h>

#include <string.h>
#include <stdio.h>

int main()
{
    int status;
    const char str[] = "Test data";
    uchardet_t detector = uchardet_new();

    status = uchardet_handle_data(detector, str, strlen(str));
    uchardet_data_end(detector);

    printf("Detected charset: %s\n", uchardet_get_charset(detector));

    uchardet_delete(detector);

    return status;
}