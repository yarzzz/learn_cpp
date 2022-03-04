#include <iostream>

#include <spdlog/spdlog.h>
#include <spdlog/logger.h>
#include <spdlog/sinks/stdout_color_sinks.h>

void showlog() {
    auto logger = spdlog::get("showlog");
    if (!logger) {
        logger = spdlog::stdout_color_mt("showlog");
    }
    logger->info("test");
}

int main() {
    showlog();
    showlog();
    showlog();
    return EXIT_SUCCESS;
}