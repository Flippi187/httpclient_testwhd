#ifndef CLIENT_H
#define CLIENT_H

#include <QMainWindow>

class client : public QMainWindow
{
    Q_OBJECT

public:
    client(QWidget *parent = 0);
    ~client();
};

#endif // CLIENT_H
