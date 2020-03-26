#ifndef TIMELINETEXTLABEL_H
#define TIMELINETEXTLABEL_H

#include <QObject>
#include <QApplication>
#include <QLabel>
#include <QMouseEvent>
#include <QMenu>
#include <QAction>
#include <QClipboard>
#include <QMouseEvent>

class TimelineTextLabel : public QLabel
{
    Q_OBJECT
public:
    TimelineTextLabel(QWidget* parent = nullptr);

protected:
    void mousePressEvent(QMouseEvent* event) override;
    void mouseReleaseEvent(QMouseEvent* event) override;
    void mouseDoubleClickEvent(QMouseEvent* event) override;

signals:
    void signalClicked();
    void signalDoubleClicked();
    void signalInsertLeft();
    void signalInsertRight();
    void signalDelete();
    void signalCopyText();

public slots:
    void slotMenuShowed(const QPoint &pos);

private:
    QPoint press_pos;

};

#endif // TIMELINETEXTLABEL_H
