// sorter.cpp — part of gmail-ai-helper.

#include "gmailaihelper/sorter.h"

#include <cstdio>

namespace gmailaihelper {

Sorter::Sorter(const std::string& config_path)
    : config_path_(config_path) {}

void Sorter::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Sorter::run() {
    if (verbose_) std::fprintf(stderr, "[gmail-ai-helper] sorter: run\n");
    // core logic lives here
    return true;
}

}  // namespace gmailaihelper
