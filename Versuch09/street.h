#ifndef STREET_H
#define STREET_H

#include "city.h"
#include "drawable.h"

#include <QGraphicsScene>

class Street: public Drawable
{
public:
    Street(City *first, City *second);
    City* getFirstCity() const;
    City* getSecondCity() const;
    virtual void draw(QGraphicsScene &scene);


private:
    City *first;
    City *second;
};

#endif // STREET_H
