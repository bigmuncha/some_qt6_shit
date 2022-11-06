#include "anal.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    AnalogClock anal;
    anal.show();
    return a.exec(); // .exec starts QApplication and related GUI, this line starts 'event loop'    
}
