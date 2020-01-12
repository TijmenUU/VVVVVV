#pragma once

#include <string>
#include <vector>

void FILESYSTEM_init(char * argvZero);
void FILESYSTEM_deinit();

char * FILESYSTEM_getUserSaveDirectory();
char * FILESYSTEM_getUserLevelDirectory();

bool FILESYSTEM_loadFileToMemory(const char * name, unsigned char ** mem, size_t * len);
void FILESYSTEM_freeMemory(unsigned char ** mem);

std::vector<std::string> FILESYSTEM_getLevelDirFileNames();
