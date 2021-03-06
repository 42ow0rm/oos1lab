#pragma once

class MyData{
    public:
        virtual ~MyData() = 0;
        virtual MyData * clone() const=0;
        virtual void print(bool=true) const = 0;
        virtual MyData& operator=(const MyData&);
};
