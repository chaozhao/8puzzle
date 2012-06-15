#ifndef DIMENSION_H
#define DIMENSION_H

class Dimension
{
public:
    Dimension(unsigned rowValue = 3, unsigned colValue = 3);
    unsigned getRow();
    unsigned getCol();
    void setRow(unsigned value);
    void setCol(unsigned value);
    void setValues(unsigned rowValue,unsigned colValue);

private:
    unsigned row;
    unsigned col;
};

#endif // DIMENSION_H
