// auth.cpp — part of chatgpt-mirror-lite.

#include "chatgptmirrorlite/auth.h"

#include <cstdio>

namespace chatgptmirrorlite {

Auth::Auth(const std::string& config_path)
    : config_path_(config_path) {}

void Auth::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Auth::run() {
    if (verbose_) std::fprintf(stderr, "[chatgpt-mirror-lite] auth: run\n");
    // core logic lives here
    return true;
}

}  // namespace chatgptmirrorlite
