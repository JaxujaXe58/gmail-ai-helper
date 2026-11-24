// drafts.cpp — part of gmail-ai-helper.

#include "gmailaihelper/drafts.h"

#include <cstdio>

namespace gmailaihelper {

Drafts::Drafts(const std::string& config_path)
    : config_path_(config_path) {}

void Drafts::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Drafts::run() {
    if (verbose_) std::fprintf(stderr, "[gmail-ai-helper] drafts: run\n");
    // core logic lives here
    return true;
}

}  // namespace gmailaihelper
