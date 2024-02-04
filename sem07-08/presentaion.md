---
marp: true
paginate: true
---
# Структуры и классы
- `class`
    - по-умолчанию все поля, методы приватные
    - нечто нетривиальное, требующее инвариантов полей.
- `struct`
    - по-умолчанию все поля, методы публичные
    - обычно что-то простое, не требующее инвариантов полей.
---
# Классы
```cpp
class Rectangle {
public:
    Rectangle(uint32_t width, uint32_t height);

    uint64_t Area() const;

    uint64_t Perimeter() const;

private:
    uint32_t width_;
    uint32_t height_;
}
```
---
# Mutable
Квалификатор для определения поля, как мутабельного. То есть даже в `const` методах данное поле можно будет менять.
---
# Выделение динамической памяти
```cpp
auto* ptr_int = new int{123};
auto* ptr_array = new int[123];
delete[] ptr_array;
delete ptr_int;
```
---
# Smart pointers
- [`std::unique_ptr`](https://en.cppreference.com/w/cpp/memory/unique_ptr)
- [`std::shared_ptr`](https://en.cppreference.com/w/cpp/memory/shared_ptr)
