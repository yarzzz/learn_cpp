#include <iostream>

#include "httplib.h"

using namespace std;

int main() {
    httplib::Server svr;
    svr.Post("/", [](const httplib::Request& req, httplib::Response& res){
        cout << req.body << endl;
    });
    svr.listen("127.0.0.1", 9090);
}
