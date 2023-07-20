#ifndef MEMORY_H
#define MEMORY_H


class Memory
{
    public:
        Memory();
        virtual ~Memory();
        Memory(const Memory& other);
        Memory& operator=(const Memory& other);
        void go();

    protected:

    private:
};

#endif // MEMORY_H
