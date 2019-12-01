
bool listDir(fs::FS &fs, const char * dirname, uint8_t levels);
bool createDir(fs::FS &fs, const char * path);
bool removeDir(fs::FS &fs, const char * path);
String readFile(fs::FS &fs, const char * path);
bool writeFile(fs::FS &fs, const char * path, const char * message);
bool appendFile(fs::FS &fs, const char * path, const char * message);
bool renameFile(fs::FS &fs, const char * path1, const char * path2);
bool deleteFile(fs::FS &fs, const char * path);
bool testFileIO(fs::FS &fs, const char * path);
