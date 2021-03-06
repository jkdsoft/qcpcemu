#ifndef SCREENWIDGET_H
#define SCREENWIDGET_H

#include <QtWidgets/qwidget.h>

class QImageScreenRenderer;
class ScreenRenderer;


class ScreenWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ScreenWidget(QWidget* parent = 0);
    ~ScreenWidget();

    ScreenRenderer* renderer() const;

    virtual QSize minimumSizeHint() const;

protected:
    virtual void paintEvent(QPaintEvent* event);

    QImageScreenRenderer* m_renderer;
};

#endif // SCREENWIDGET_H
