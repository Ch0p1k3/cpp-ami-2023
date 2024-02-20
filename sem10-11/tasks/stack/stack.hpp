#pragma once

#include <cstdint>

class Stack {
public:
    using Value = uint64_t;

public:
    Stack() = default;

    Stack(const Stack& other) {
        CopyStack(other);
    }

    Stack& operator=(const Stack& other) {
        if (this == &other) {
            return *this;
        }
        Clean();
        CopyStack(other);
        return *this;
    }

    void Push(Value value) {
        Node* new_top = new Node{value, top_};
        top_ = new_top;
    }

    Value Top() const {
        if (Empty()) {
            return {};
        }
        return top_->value;
    }

    Value Pop() {
        if (Empty()) {
            return {};
        }
        Value res = top_->value;
        Node* new_top = top_->next;
        delete top_;
        top_ = new_top;
        return res;
    }

    bool Empty() const {
        return top_ == nullptr;
    }

    ~Stack() {
        Clean();
    }

private:
    void Clean() {
        while (!Empty()) {
            Pop();
        }
    }

    void CopyStack(const Stack& other) {
        Stack temp;
        Node* other_top = other.top_;
        while (other_top) {
            temp.Push(other_top->value);
            other_top = other_top->next;
        }
        while (!temp.Empty()) {
            Push(temp.Pop());
        }
    }

private:
    struct Node {
        Value value;
        Node* next;
    };

private:
    Node* top_{nullptr};
};
