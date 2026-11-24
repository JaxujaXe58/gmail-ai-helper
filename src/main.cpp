// main.cpp — entry point. Wires config and subsystems together.

#include "gmailaihelper/settings.h"
#include "gmailaihelper/reader.h"
#include "gmailaihelper/sorter.h"
#include "gmailaihelper/drafts.h"
#include "gmailaihelper/cli.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    gmailaihelper::Settings settings = gmailaihelper::Settings::load_default();
    gmailaihelper::Reader reader(settings.store_path);
    gmailaihelper::Sorter sorter(settings.store_path);
    gmailaihelper::Drafts drafts(settings.store_path);
    gmailaihelper::Cli cli(settings.store_path);
    std::fprintf(stderr, "[gmail-ai-helper] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
