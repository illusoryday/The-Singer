#include <simdjson/simdjson.h>
#include <vector>
using namespace std;
using namespace simdjson;


struct APIInfo {
    string name;  // API����
          ,url;   // API��ַ
};

vector<APIInfo> GetAPI(string path) {
    vector<APIInfo> APIList;
    dom::parser parser;
    try {
        padded_string json = padded_string::load(path);
        dom::element data = parser.parse(json);

        simdjson::dom::array apis = data["Music"].get_array();
        // 4. ����ÿ�� API ����
        for (auto api : apis) {
            simdjson::dom::object api_obj = api.get_object();
            for (auto field : api_obj) {
                APIInfo info;
                info.name = string(field.key);  // �� "CloudMusic"
                info.url = string(field.value.get_string().value());  // �� URL
                APIList.push_back(info);
            }
        }
    }
    catch (const simdjson_error& e) {
        return {};
    }
    catch (const exception& e) {
        return {};
    }

    return APIList;
}
