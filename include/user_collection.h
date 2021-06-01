/**
 * 用户Collection类
 * Description  : user_vector类
 * Author       : 李阳
 * Created      : 2021-06-01
 * Version      : 1.0.0
 * LastEdit     : 2021-06-01
 */

#ifndef USER_COLLECTION_H
#define USER_COLLECTION_H

namespace user_std {
    template<class T>
    class Collection {
    public:
        virtual bool empty() = 0;
        virtual size_t size() = 0;
        virtual size_t max_size() = 0;
    };
};

#endif //USER_COLLECTION_H
