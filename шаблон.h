#pragma once

template <typename T1, typename T2>
class Pair {
private:
    T1 first;
    T2 second;

public:
    Pair(T1 value1, T2 value2) : first(value1), second(value2) {}

    T1 getFirst() const {
        return first;
    }

    T2 getSecond() const {
        return second;
    }
};
