// reader.cpp — part of gmail-ai-helper.

#include "gmailaihelper/reader.h"

#include <cstdio>

namespace gmailaihelper {

Reader::Reader(const std::string& config_path)
    : config_path_(config_path) {}

void Reader::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Reader::run() {
    if (verbose_) std::fprintf(stderr, "[gmail-ai-helper] reader: run\n");
    // core logic lives here
    return true;
}

}  // namespace gmailaihelper
