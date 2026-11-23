// main.cpp — entry point. Wires config and subsystems together.

#include "chatgptmirrorlite/settings.h"
#include "chatgptmirrorlite/server.h"
#include "chatgptmirrorlite/auth.h"
#include "chatgptmirrorlite/quota.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    chatgptmirrorlite::Settings settings = chatgptmirrorlite::Settings::load_default();
    chatgptmirrorlite::Server server(settings.store_path);
    chatgptmirrorlite::Auth auth(settings.store_path);
    chatgptmirrorlite::Quota quota(settings.store_path);
    std::fprintf(stderr, "[chatgpt-mirror-lite] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
