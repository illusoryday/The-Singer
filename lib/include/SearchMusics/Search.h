#include <httplib/httplib.h>
#include <simdjson/simdjson.h>
#include <string.h>
#include <iostream>
using namespace std;
using namespace simdjson;
using namespace httplib;
struct MusicInfo {
    string title       //����
         , artist      //����
         , album       //ר��
         , musicurl    //����URL
         , lyricsurl   //���URL
         , source;     // ��Դƽ̨
};