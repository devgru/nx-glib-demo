#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <switch.h>

#include <glib.h>
#include <glib-object.h>

static gchar *dot = ".";
GObject test;

int main(int argc, char* argv[])
{
    g_print(dot);
    return 0;
}
