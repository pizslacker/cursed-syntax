#include <stdio.h>

int main(void) <%
    // Valid C using digraphs (<% and %> instead of { and })
    // and inverted array indexing (i["string"] instead of "string"[i])
    //
    // Both methods work to let programmers write code on keyboards or
    // systems that lack specific punctuation and symbol keys.
    int i = 0;
    while (i < 16) <%
        putchar(i<:"I watch you code":>);
        i++;
    %>
    putchar('\n');
    return 0;
%>