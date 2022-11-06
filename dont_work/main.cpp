#include <QPainter>
#include <QTime>
#include <QTimer>
#include <QWidget>

#include <QApplication>

class AnalogClock : public QWidget
{
    Q_OBJECT
public:
    AnalogClock(QWidget *parent = nullptr)
	:QWidget(parent)
	{
	    QTimer *timer = new QTimer(this);
	    connect(timer, &QTimer::timeout, this, QOverload<>::of(&AnalogClock::update));
	    timer->start(1000);
	    setWindowTitle(tr("Analog Clock"));
	    resize(200, 200);
	}
protected:
    void paintEvent(QPaintEvent*){}
};

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    AnalogClock anal;
    anal.show();
    return a.exec(); // .exec starts QApplication and related GUI, this line starts 'event loop'    
}
