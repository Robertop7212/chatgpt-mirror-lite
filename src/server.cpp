// server.cpp — part of chatgpt-mirror-lite.

#include "chatgptmirrorlite/server.h"

#include <cstdio>

namespace chatgptmirrorlite {

Server::Server(const std::string& config_path)
    : config_path_(config_path) {}

void Server::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Server::run() {
    if (verbose_) std::fprintf(stderr, "[chatgpt-mirror-lite] server: run\n");
    // core logic lives here
    return true;
}

}  // namespace chatgptmirrorlite
