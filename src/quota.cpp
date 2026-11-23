// quota.cpp — part of chatgpt-mirror-lite.

#include "chatgptmirrorlite/quota.h"

#include <cstdio>

namespace chatgptmirrorlite {

Quota::Quota(const std::string& config_path)
    : config_path_(config_path) {}

void Quota::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Quota::run() {
    if (verbose_) std::fprintf(stderr, "[chatgpt-mirror-lite] quota: run\n");
    // core logic lives here
    return true;
}

}  // namespace chatgptmirrorlite
