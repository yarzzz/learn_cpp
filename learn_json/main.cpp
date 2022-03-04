#include "rapidjson/document.h"
#include "rapidjson/writer.h"
#include "rapidjson/stringbuffer.h"
#include <iostream>

using namespace std;
using namespace rapidjson;

// int main() {
//     const char* jsonStr = " { \"test\":{ \"i\":1234, \"pi\": 3.14159 }, \"hello\" : \"world\", \"t\" : true , \"f\" : false, \"n\": null, \"i\":123, \"pi\": 3.1416, \"a\":[1, 2, 3, 4] } ";


//     Document d;
//     d.Parse(jsonStr);
//     cout << d["test"]["i"].GetInt() << endl;
//     cout << d["test"]["pi"].GetDouble() << endl;

//     Value &x = d["test"];
//     cout << (x.IsObject() ? "true" : "false") << endl;

//     Document d2(kArrayType);
//     d2.PushBack(11, d2.GetAllocator());
//     d2.PushBack("\u0000", d2.GetAllocator());

//     Document d3(kObjectType);
//     d3.AddMember("d2", d2, d3.GetAllocator());
//     d3.AddMember("tmp", 77.88, d3.GetAllocator());
//     StringBuffer buffer2;
//     Writer<StringBuffer> writer2(buffer2);
//     d3.Accept(writer2);
//     cout << buffer2.GetString() << endl;

//     StringBuffer buffer;
//     Writer<StringBuffer> writer(buffer);
//     d2.Accept(writer);
//     cout << buffer.GetString() << endl;

//     d3.AddMember("d3", Value(d3, d3.GetAllocator()), d3.GetAllocator());
//     StringBuffer buffer3;
//     Writer<StringBuffer> writer3(buffer3);
//     d3.Accept(writer3);
//     cout << buffer3.GetString() << endl;

//     return 0;
// }

int main() {
    Document d3(kObjectType);
    string str = "str";
    d3.AddMember("d2", GenericStringRef<char>(str.c_str()), d3.GetAllocator());
    d3.AddMember("tmp", 77.88, d3.GetAllocator());
    StringBuffer buffer2;
    Writer<StringBuffer> writer2(buffer2);
    d3.Accept(writer2);
    cout << buffer2.GetString() << endl;
}