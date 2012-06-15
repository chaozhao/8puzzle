#include "dimension.h"

Dimension::Dimension(unsigned rowValue, unsigned colValue)
{
    row = rowValue;
    col = colValue;
}
unsigned Dimension::getRow()
{
    return row;
}

unsigned Dimension::getCol()
{
    return col;
}

void Dimension::setRow(unsigned value)
{
    row = value;
}

void Dimension::setCol(unsigned value)
{
    col = value;
}

void Dimension::setValues(unsigned rowValue, unsigned colValue)
{
    row = rowValue;
    col = colValue;
}
