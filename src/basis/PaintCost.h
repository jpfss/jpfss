#ifndef PAINTCOST_H
#define PAINTCOST_H


class PaintCost
{
public:
    PaintCost();
    virtual ~PaintCost();
    PaintCost(const PaintCost& other);
    PaintCost& operator=(const PaintCost& other);
    int getCost(int area);

protected:

private:
};

#endif // PAINTCOST_H
