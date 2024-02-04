#pragma once

#include <string>

class StringView {
public:
    StringView(const std::string& s, size_t beg = 0, size_t len = npos);

    StringView(const char* s);

    StringView(const char* s, size_t len);

    char operator[](size_t i) const;

    const char* Data() const;

    size_t Size() const;

public:
    static const auto npos = std::string::npos;

private:
    /* some fields */
};
