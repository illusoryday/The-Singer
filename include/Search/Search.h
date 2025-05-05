#include <httplib/httplib.h>
#include <simdjson/simdjson.h>
#include <string.h>
#include <iostream>
using namespace std;
using namespace simdjson;
using namespace httplib;
struct MusicInfo {
    string title       //歌名
         , artist      //歌手
         , album       //专辑
         , musicurl    //歌曲URL
         , lyricsurl   //歌词URL
         , source;     // 来源平台
};