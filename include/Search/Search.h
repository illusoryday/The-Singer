#include <httplib/httplib.h>
#include <simdjson/simdjson.h>
#include <string.h>
#include <iostream>
#include <vector>
#include <utility>
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

pair<vector<string>, vector<string>> GetAPI() {
    pair<vector<string>, vector<string>> APIList;
    dom::parser parser;
    try {
        padded_string json = padded_string::load("./API/API.json");
        dom::element data = parser.parse(json);
        simdjson::dom::array apis = data["APIs"].get_array();
        for (auto api : apis) {
            simdjson::dom::object api_obj = api.get_object();
            for (auto [name, url] : api_obj) {
                APIList.second.push_back(string(name));
                APIList.first.push_back(string(url.get_string().value()));
            }
        }
    }catch(const simdjson_error& e) { return { {}, {} }; }
    return APIList;
}