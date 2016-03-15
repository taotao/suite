#include <stdio.h>

#include <foo/foo.h>

#include <echoworld/echoworld.h>

int
    main()
{
    printf("main()\n");

    echoworld();

    foo();

    return 0;
}
