#include <iostream>
#include <thread>

#include "httplib.h"

using namespace std;

int main() {
    httplib::Server svr;

    svr.Post("/", [](const httplib::Request &req, httplib::Response &res) {
        cout << "name: " << req.get_param_value("name") << endl;
        cout << "body: " << req.body.c_str() << endl;
        res.set_content("hello", "text/plain");
    });

    std::thread t1([&](const char* host, int port) {
        svr.listen(host, port);
    }, "127.0.0.1", 8080);

    cout << "starting" << endl;
    while (!svr.is_running()) {
        sleep(1);
    }
    cout << "started" << endl;

    httplib::Client cli("http://127.0.0.1:8080");

    httplib::Params params;
    params.emplace("name", "tzj");
    auto res = cli.Post("/", params);
    cout << res->status << ": " << res->body << endl;

    string body = "name=test123";
    res = cli.Post(
        "/"
        , body
        , "text/plain"
    );
    cout << res->status << ": " << res->body << endl;

    sleep(5);

    svr.stop();

    t1.join();

    return EXIT_SUCCESS;
}