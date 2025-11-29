#ifndef H_CONFIG
    #define H_CONFIG
    #define CONFIG_PATH "~/.ctsp"

    #include "./error.h"
    #include <stdio.h>
    #include <stdbool.h>
    #include "./string-utils.h"

    bool configFileExists(returncode* code);
    FILE* createConfigFile(returncode* code);
    void addSetting(FILE* config_fileptr, string key, string value, returncode* code);
    void removeSetting(FILE* config_fileptr, string key, returncode* code);
    void setSetting(FILE* config_fileptr, string key, string new_value, returncode* code);
    void getSetting(FILE* config_fileptr, string key, string valueptr, returncode* code);
#endif
