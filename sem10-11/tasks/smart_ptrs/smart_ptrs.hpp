#pragma once

#include <string>

class WeakPtr;

class SharedPtr {
public:
    SharedPtr(const WeakPtr& rhs);
};

class WeakPtr {
public:
};

SharedPtr::SharedPtr(const WeakPtr& rhs) {
}
