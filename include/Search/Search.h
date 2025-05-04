#include <httplib/httplib.h>
#include <simdjson.h>
#include <string.h>
#include <iostream>
#include <vector>
using namespace std;
using namespace simdjson;
using namespace httplib;
struct MusicInfo {
    string title;
    string artist;
    string album;
    string url;     // ����URL
    string source;  // ��Դƽ̨
};

vector<string_view> GetAPI() {
    vector<string_view> API;
    ondemand::parser parser;
    padded_string json = padded_string::load("./API/API.json");
    return API;
}