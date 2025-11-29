#ifndef H_ERROR
    #define H_ERROR

    typedef unsigned int returncode;
    enum Errors {
        SUCCESSFUL,
        FAILED,  //too generic, use more specific error codes as much as possible
        MEMORY_ERROR,

    };

#endif
