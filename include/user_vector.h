/*
 * 用户Collection类
 * Description  : user_vector类
 * Author       : 李阳
 * Created      : 2021-06-01
 * Version      : 1.0.0
 * LastEdit     : 2021-06-01
 */

#ifndef USER_VECTOR_H
#define USER_VECTOR_H

#include "user_collection.h"

namespace user_std {
    template<class T>
    class vector:Collection<T> {
    public:
        vector() {};
        explicit vector(size_t size) {
            this->array = new T[size*2];
            this->length = size;
            this->capacity = 2*size;
        };

        ~ vector() {
            delete []array;
        };

        bool empty() override
        {
            return this->length == 0;
        }

        size_t size() override
        {
            return this->length;
        }

        size_t max_size() override
        {
            return UINT_LEAST16_MAX;
        }

    private:
        T* array;
        size_t length = 0;
        size_t capacity = 0;
    };
}

#endif //USER_VECTOR_H
